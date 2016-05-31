#pragma once

#include <cmath>
#include <algorithm>
#include <cinttypes>
#include <exception>
#include <stdexcept>

#include "utilities.h"

//the implementation of C++14 vector, referring to http://en.cppreference.com/w/cpp/container/vector
template<typename T, typename Allocator = std::allocator<T>> class userArray
{
public:
    typedef T value_type;
    typedef Allocator allocator_type;
    typedef size_t size_type;
    typedef ptrdiff_t difference_type;
    typedef value_type& reference;
    typedef const value_type& const_reference;
    typedef T* pointer;
    typedef const T* const_pointer;

    //iterator
    typedef pointer iterator;
    typedef const_pointer const_iterator;
    typedef std::reverse_iterator<iterator> reverse_iterator;
    typedef std::reverse_iterator<const_iterator> const_reverse_iterator;

private:
    size_t _capacity;   // the length of inner array
    size_t _size;       // the count of items in array
    Allocator _alloc;   // the allocator
    T *_array;          // the storage of the data

public:
    //constructors
    userArray();
    explicit userArray(const Allocator& alloc);
    userArray(size_type count, const_reference value, const Allocator& alloc = Allocator());
    explicit userArray(size_type count, const Allocator& alloc = Allocator());

    template<typename Input_iter, class = Is_iterator_t<Input_iter, void>>
    userArray(Input_iter first, Input_iter last, const Allocator& alloc = Allocator());

    //copy constructor
    userArray(const userArray& other);
    userArray(const userArray& other, const Allocator& alloc);

    //move constructor
    userArray(userArray&& other);
    userArray(userArray&& other, const Allocator& alloc);

    userArray(std::initializer_list<T> init, const Allocator& alloc = Allocator());

    //destructor
    ~userArray();

    userArray& operator=(const userArray& other);   //copy operator=
    userArray& operator=(userArray&& other);        //move operator=
    userArray& operator=(std::initializer_list<T> ilist);

    userArray& assign(size_type count, const T& value);

    template<typename Input_iter>
    Is_iterator_t<Input_iter, void> assign(Input_iter first, Input_iter last);

    void assign(std::initializer_list<T> ilist);

    allocator_type get_allocator() const;

    //element access
    reference at(size_type i);
    const_reference at(size_type i) const;
    reference operator[](size_type i);
    const_reference operator[](size_type i) const;
    reference front();
    const_reference front() const;
    reference back();
    const_reference back() const;
    pointer data();
    const_pointer data() const;

    //count and countif
    difference_type count(const T& value) const;
    template<typename UnaryPredicate>
    difference_type countIF(UnaryPredicate p) const;

    //iterators
    iterator begin();
    const_iterator begin() const;
    const_iterator cbegin() const;
    iterator end();
    const_iterator end() const;
    const_iterator cend() const;
    reverse_iterator rbegin();
    const_reverse_iterator rbegin() const;
    const_reverse_iterator crbegin() const;
    reverse_iterator rend();
    const_reverse_iterator rend() const;
    const_reverse_iterator crend() const;

    //capacity
    bool empty() const noexcept;
    size_type size() const noexcept;
    static size_type max_size() noexcept;
    void reserve(size_type new_cap);
    size_type capacity() const;
    void shrink_to_fit();

    //modifiers
    void clear() noexcept;

    iterator insert(const_iterator pos, const T& value);
    iterator insert(const_iterator pos, T&& value);
    iterator insert(const_iterator pos, size_type count, const T& value);

    template<typename Input_iter>
    Is_iterator_t<Input_iter, iterator> insert(const_iterator pos, Input_iter first, Input_iter last);

    iterator insert(const_iterator pos, std::initializer_list<T> ilist);

    template<typename... Args>
    iterator emplace(const_iterator pos, Args&&... args);

    iterator erase(const_iterator pos);
    iterator erase(const_iterator first, const_iterator last);
    void push_back(const T& value);
    void push_back(T&& value);

    template<typename... Args>
    void emplace_back(Args&&... args);

    void pop_back();
    void resize(size_type count);
    void resize(size_type count, const T& value);
    void swap(userArray& other);
};

#if 1
template<typename Allocator>
class userArray<bool, Allocator> : public userArray<uintptr_t, rebind_alloc<Allocator, uintptr_t>>
{
    using userArray::_size;
    using userArray::_capacity;
    using userArray::_alloc;
    using userArray::_array;

    using userArray::value_type;
    using userArray::allocator_type;
    using userArray::size_type;
    using userArray::reference;
    using userArray::const_reference;
    using userArray::pointer;
    using userArray::const_pointer;

    static const typename userArray::size_type bool_length;

    void _allocate(typename userArray::size_type count, const typename userArray::allocator_type& alloc) {
        _capacity = static_cast<typename userArray::size_type>(std::floor(count * 1.0 / bool_length));
        _size = count;
        _alloc = alloc;
        _array = _alloc.allocate(_capacity);
    }

protected:
    void set_bit(typename userArray::size_type index, typename userArray::const_reference value)
    {
        auto unit = std::imaxdiv(index, bool_length);

        if (value)
        {
            _array[unit.quot] |= (1 << (unit.rem - 1));
        }
        else
        {
            _array[unit.quot] &= ~(1 << (unit.rem - 1));
        }
    }
    void fill_bit(typename userArray::size_type first, typename userArray::size_type last, typename userArray::const_reference value)
    {
        static const uintptr_t true_val = ~0u;
        static const uintptr_t false_val = 0u;

        auto first_unit = std::imaxdiv(first, bool_length);
        auto last_unit = std::imaxdiv(last, bool_length);

        //deal with first and last
        uintptr_t mask_first = (1 << first_unit.rem) - 1;
        uintptr_t mask_last = (1 << last_unit.rem) - 1;
        if (value)
        {
            _array[first_unit.quot] |= mask_first;
            _array[last_unit.quot] |= mask_last;
        }
        else
        {
            _array[first_unit.quot] &= ~mask_first;
            _array[last_unit.quot] &= ~mask_last;
        }

        //deal with whole numbers
        for (auto i = first_unit.quot + 1; i < last_unit.quot; ++i)
        {
            _array[i] = value ? true_val : false_val;
        }
    }

public:
    userArray()
    {
    }

    userArray(typename userArray::size_type count, typename userArray::const_reference value, const typename userArray::allocator_type& alloc = typename userArray::allocator_type()) : _allocate(count, alloc)
    {
        fill_bit(0, count, value);
    }

    userArray(typename userArray::size_type count, const typename userArray::allocator_type& alloc = Allocator()) : userArray(count, false, alloc)
    {
    }

    template <typename Input_iter, class = Is_iterator_t<Input_iter, void>>
    userArray(Input_iter first, Input_iter last, const typename userArray::allocator_type& alloc = typename userArray::allocator_type()) : _alloc(std::distance(first, last), alloc)
    {
    }

    userArray(const userArray &other) : userArray(other)
    {
    }

    userArray(const userArray &other, const typename userArray::allocator_type& alloc) : userArray(other, alloc)
    {
    }

    userArray(userArray &&other) : userArray(other)
    {
    }

    userArray(userArray &&other, const typename userArray:allocator_type& alloc) : userArray(other, alloc)
    {
    }

    userArray(std::initializer_list<T> ilist) : userArray(ilist)
    {
    }

    ~userArray()
    {
    }

    userArray& operator=(const userArray& other)   //copy operator=
        userArray& operator=(userArray&& other);        //move operator=
    userArray& operator=(std::initializer_list<T> ilist);

    userArray& assign(size_type count, const T& value);

    template<typename Input_iter>
    Is_iterator_t<Input_iter, void> assign(Input_iter first, Input_iter last);

    void assign(std::initializer_list<T> ilist);

    allocator_type get_allocator() const;

    //element access
    reference at(size_type i);
    const_reference at(size_type i) const;
    reference operator[](size_type i);
    const_reference operator[](size_type i) const;
    reference front();
    const_reference front() const;
    reference back();
    const_reference back() const;
    pointer data();
    const_pointer data() const;

    //count and countif
    difference_type count(const T& value) const;
    template<typename UnaryPredicate>
    difference_type countIF(UnaryPredicate p) const;

    //iterators
    iterator begin();
    const_iterator begin() const;
    const_iterator cbegin() const;
    iterator end();
    const_iterator end() const;
    const_iterator cend() const;
    reverse_iterator rbegin();
    const_reverse_iterator rbegin() const;
    const_reverse_iterator crbegin() const;
    reverse_iterator rend();
    const_reverse_iterator rend() const;
    const_reverse_iterator crend() const;

    //capacity
    bool empty() const noexcept;
    size_type size() const noexcept;
    static size_type max_size() noexcept;
    void reserve(size_type new_cap);
    size_type capacity() const;
    void shrink_to_fit();

    //modifiers
    void clear() noexcept;

    iterator insert(const_iterator pos, const T& value);
    iterator insert(const_iterator pos, T&& value);
    iterator insert(const_iterator pos, size_type count, const T& value);

    template<typename Input_iter>
    Is_iterator_t<Input_iter, iterator> insert(const_iterator pos, Input_iter first, Input_iter last);

    iterator insert(const_iterator pos, std::initializer_list<T> ilist);

    template<typename... Args>
    iterator emplace(const_iterator pos, Args&&... args);

    iterator erase(const_iterator pos);
    iterator erase(const_iterator first, const_iterator last);
    void push_back(const T& value);
    void push_back(T&& value);

    template<typename... Args>
    void emplace_back(Args&&... args);

    void pop_back();
    void resize(size_type count);
    void resize(size_type count, const T& value);
    void swap(userArray& other);

};

template <typename Allocator>
const typename userArray<bool, Allocator>::size_type userArray<bool, Allocator>::bool_length = sizeof(uintptr_t) * 8;

#endif

template <typename T, typename Allocator>
userArray<T, Allocator>::userArray() : userArray(Allocator())
{
}

template <typename T, typename Allocator>
userArray<T, Allocator>::userArray(const Allocator& alloc) : _capacity(0), _size(0), _alloc(alloc), _array(nullptr)
{
}

template <typename T, typename Allocator>
userArray<T, Allocator>::userArray(size_type count, typename userArray::const_reference value, const Allocator& alloc = Allocator())
{
    _capacity = count;
    _size = count;
    _alloc = alloc;
    _array = _alloc.allocate(count);
    std::fill_n(_array, count, value);
}

template <typename T, typename Allocator>
userArray<T, Allocator>::userArray(size_type count, const Allocator& alloc = Allocator())
{
    if (count == 0)
    {
        _capacity = 0;
        _size = 0;
        _alloc = alloc;
        _array = nullptr;
    }
    else
    {
        _capacity = count;
        _size = count;
        _alloc = alloc;
        _array = _alloc.allocate(count);
        std::fill_n(_array, count, T());
    }
}

template <typename T, typename Allocator>
template <typename Input_iter, class>
userArray<T, Allocator>::userArray(Input_iter first, Input_iter last, const Allocator& alloc = Allocator())
{
    auto count = std::distance(first, last);
    _capacity = count;
    _size = count;
    _alloc = alloc;
    _array = _alloc.allocate(count);
    std::copy(first, last, _array);
}

// ReSharper disable once CppPossiblyUninitializedMember
template <typename T, typename Allocator>
userArray<T, Allocator>::userArray(const userArray& other) : userArray(other, std::allocator_traits<allocator_type>::select_on_container_copy_construction(other.get_allocator()))
{
}

template <typename T, typename Allocator>
userArray<T, Allocator>::userArray(const userArray& other, const Allocator& alloc)
{
    _capacity = other._capacity;
    _size = other._size;
    _alloc = alloc;
    _array = _alloc.allocate(other._capacity);
    std::copy(other._array, other._array + other._capacity, _array);
}

template <typename T, typename Allocator>
userArray<T, Allocator>::userArray(userArray&& other)
{
    _capacity = other._capacity;
    _size = other._size;
    _alloc = std::move(other._alloc);
    _array = other._array;

    other._array = nullptr;
    other._size = 0;
    other._capacity = 0;
}

template <typename T, typename Allocator>
userArray<T, Allocator>::userArray(userArray&& other, const Allocator& alloc)
{
    _capacity = other._capacity;
    _size = other._size;
    _alloc = alloc;
    if (_alloc == other.get_allocator())
    {
        _array = other._array;
    }
    else
    {
        // if not equal, then move each item individually
        _array = _alloc(_capacity);
        std::move(other._array, other._array + other._capacity, _array);
        other._alloc.deallocate(other._array, other._capacity);
    }

    other._array = nullptr;
    other._size = 0;
    other._capacity = 0;
}

template <typename T, typename Allocator>
userArray<T, Allocator>::userArray(std::initializer_list<T> init, const Allocator& alloc = Allocator())
{
    _capacity = init.size();
    _size = init.size();
    _alloc = alloc;
    _array = _alloc.allocate(_capacity);
    std::copy(init.begin(), init.end(), _array);
}

template <typename T, typename Allocator>
userArray<T, Allocator>::~userArray()
{
    if (_array != nullptr)
    {
        std::for_each(_array, _array + _size, [this](const T& a) { _alloc.destroy(&a); });
        _alloc.deallocate(_array, _capacity);
    }
}

template <typename T, typename Allocator>
userArray<T, Allocator>& userArray<T, Allocator>::operator=(const userArray& other)
{
    if (std::allocator_traits<allocator_type>::propagate_on_container_copy_assignment())
    {
        if (_alloc != other._alloc)
        {
            clear();
        }
        _alloc = other._alloc;
    }
    //auto extend
    if (_capacity < other._capacity)
    {
        clear();
        _array = _alloc.allocate(other._capacity);
        _capacity = other._capacity;
    }
    _size = other._size;
    std::copy(other._array, other._array + other._capacity, _array);

    return *this;
}

template <typename T, typename Allocator>
userArray<T, Allocator>& userArray<T, Allocator>::operator=(userArray&& other)
{
    if (std::allocator_traits<allocator_type>::propagate_on_container_move_assignment())
    {
        clear();
        _alloc = other._alloc;
        _capacity = other._capacity;
        _size = other._size;
        _array = other._array;
    }
    else if (_alloc != other._alloc)
    {
        //realloc and move
        //auto extend
        if (_capacity < other._capacity)
        {
            clear();
            _array = _alloc.allocate(other._capacity);
            _capacity = other._capacity;
        }
        _size = other._size;
        std::move(other._array, other._array + other._capacity, _array);
    }
    else
    {
        _capacity = other._capacity;
        _size = other._size;
        _array = other._array;
    }

    //delete[] _array;
    other._array = nullptr;
    other._capacity = 0;
    other._size = 0;

    return *this;
}

template <typename T, typename Allocator>
userArray<T, Allocator>& userArray<T, Allocator>::operator=(std::initializer_list<T> ilist)
{
    clear();
    _capacity = ilist.size();
    _size = ilist.size();
    _array = _alloc.allocate(_capacity);
    std::copy(ilist.begin(), ilist.end(), _array);

    return *this;
}

template <typename T, typename Allocator>
userArray<T, Allocator>& userArray<T, Allocator>::assign(size_type count, const T& value)
{
    //auto extend
    if (count > _capacity)
    {
        clear();
        _array = _alloc.allocate(count);
        _capacity = count;
        return assign(count, value);
    }
    _size = count;
    std::fill_n(_array, count, value);
    return *this;
}

template <typename T, typename Allocator>
template <typename Input_iter>
Is_iterator_t<Input_iter, void> userArray<T, Allocator>::assign(Input_iter first, Input_iter last)
{
    auto count = static_cast<size_type>(std::distance(first, last));
    //auto extend
    if (count > _capacity)
    {
        clear();
        _array = _alloc.allocate(count);
        _capacity = count;
        return assign(first, last);
    }
    _size = count;
    std::copy(first, last, _array);
}

template <typename T, typename Allocator>
void userArray<T, Allocator>::assign(std::initializer_list<T> ilist)
{
    auto count = ilist.size();
    //auto extend
    if (count > _capacity)
    {
        clear();
        _array = _alloc.allocate(count);
        _capacity = count;
        return assign(ilist);
    }
    _size = count;
    std::copy(ilist.begin(), ilist.end(), _array);
}

template <typename T, typename Allocator>
typename userArray<T, Allocator>::allocator_type userArray<T, Allocator>::get_allocator() const
{
    return _alloc;
}

template <typename T, typename Allocator>
typename userArray<T, Allocator>::reference userArray<T, Allocator>::at(size_type i)
{
    if (!(i < size()))
    {
        throw std::out_of_range("Index out of range");
    }
    return _array[i];
}

template <typename T, typename Allocator>
typename userArray<T, Allocator>::const_reference userArray<T, Allocator>::at(size_type i) const
{
    if (!(i < size()))
    {
        throw std::out_of_range("Index out of range");
    }
    return _array[i];
}

template <typename T, typename Allocator>
typename userArray<T, Allocator>::reference userArray<T, Allocator>::operator[](size_type i)
{
    return _array[i];
}

template <typename T, typename Allocator>
typename userArray<T, Allocator>::const_reference userArray<T, Allocator>::operator[](size_type i) const
{
    return _array[i];
}

template <typename T, typename Allocator>
typename userArray<T, Allocator>::reference userArray<T, Allocator>::front()
{
    return _array[0];
}

template <typename T, typename Allocator>
typename userArray<T, Allocator>::const_reference userArray<T, Allocator>::front() const
{
    return _array[0];
}

template <typename T, typename Allocator>
typename userArray<T, Allocator>::reference userArray<T, Allocator>::back()
{
    return _array[_size - 1];
}

template <typename T, typename Allocator>
typename userArray<T, Allocator>::const_reference userArray<T, Allocator>::back() const
{
    return _array[_size - 1];
}

template <typename T, typename Allocator>
typename userArray<T, Allocator>::pointer userArray<T, Allocator>::data()
{
    return _array;
}

template <typename T, typename Allocator>
typename userArray<T, Allocator>::const_pointer userArray<T, Allocator>::data() const
{
    return _array;
}

template <typename T, typename Allocator>
typename userArray<T, Allocator>::difference_type userArray<T, Allocator>::count(const T& value) const
{
    return std::count(this->begin(), this->end(), value);
}

template <typename T, typename Allocator>
template <typename UnaryPredicate>
typename userArray<T, Allocator>::difference_type userArray<T, Allocator>::countIF(UnaryPredicate p) const
{
    return std::count_if(this->begin(), this->end(), p);
}

template <typename T, typename Allocator>
typename userArray<T, Allocator>::iterator userArray<T, Allocator>::begin()
{
    return iterator(_array);
}

template <typename T, typename Allocator>
typename userArray<T, Allocator>::const_iterator userArray<T, Allocator>::begin() const
{
    return const_iterator(_array);
}

template <typename T, typename Allocator>
typename userArray<T, Allocator>::const_iterator userArray<T, Allocator>::cbegin() const
{
    return const_iterator(_array);
}

template <typename T, typename Allocator>
typename userArray<T, Allocator>::iterator userArray<T, Allocator>::end()
{
    return iterator(_array + _size);
}

template <typename T, typename Allocator>
typename userArray<T, Allocator>::const_iterator userArray<T, Allocator>::end() const
{
    return const_iterator(_array + _size);
}

template <typename T, typename Allocator>
typename userArray<T, Allocator>::const_iterator userArray<T, Allocator>::cend() const
{
    return const_iterator(_array + _size);
}

template <typename T, typename Allocator>
typename userArray<T, Allocator>::reverse_iterator userArray<T, Allocator>::rbegin()
{
    return reverse_iterator(iterator(_array + _size));
}

template <typename T, typename Allocator>
typename userArray<T, Allocator>::const_reverse_iterator userArray<T, Allocator>::rbegin() const
{
    return const_reverse_iterator(const_iterator(_array + _size));
}

template <typename T, typename Allocator>
typename userArray<T, Allocator>::const_reverse_iterator userArray<T, Allocator>::crbegin() const
{
    return const_reverse_iterator(const_iterator(_array + _size));
}

template <typename T, typename Allocator>
typename userArray<T, Allocator>::reverse_iterator userArray<T, Allocator>::rend()
{
    return reverse_iterator(iterator(_array));
}

template <typename T, typename Allocator>
typename userArray<T, Allocator>::const_reverse_iterator userArray<T, Allocator>::rend() const
{
    return const_reverse_iterator(const_iterator(_array));
}

template <typename T, typename Allocator>
typename userArray<T, Allocator>::const_reverse_iterator userArray<T, Allocator>::crend() const
{
    return const_reverse_iterator(const_iterator(_array));
}

template <typename T, typename Allocator>
bool userArray<T, Allocator>::empty() const noexcept
{
    if (_size == 0)
        return true;
    return false;
}

template <typename T, typename Allocator>
typename userArray<T, Allocator>::size_type userArray<T, Allocator>::size() const noexcept
{
    return _size;
}

template <typename T, typename Allocator>
typename userArray<T, Allocator>::size_type userArray<T, Allocator>::max_size() noexcept
{
    return std::numeric_limits<size_type>::max();
}

template <typename T, typename Allocator>
void userArray<T, Allocator>::reserve(size_type new_cap)
{
    if (new_cap > max_size()) {
        throw std::length_error("out of max_size");
    }
    //auto extend
    if (new_cap > _capacity)
    {
        auto temp = _alloc.allocate(new_cap);
        auto tmp_size = _size;
        std::move(_array, _array + _capacity, temp);
        clear();
        _array = temp;
        _capacity = new_cap;
        _size = tmp_size;
    }
}

template <typename T, typename Allocator>
typename userArray<T, Allocator>::size_type userArray<T, Allocator>::capacity() const
{
    return _capacity;
}

template <typename T, typename Allocator>
void userArray<T, Allocator>::shrink_to_fit()
{
    if (_size < _capacity)
    {
        auto temp = _alloc.allocate(_size);
        auto tmp_size = _size;
        std::move(_array, _array + _size, temp);
        clear();
        _array = temp;
        _capacity = tmp_size;
        _size = tmp_size;
    }
}

template <typename T, typename Allocator>
void userArray<T, Allocator>::clear() noexcept
{
    if (_array != nullptr)
    {
        std::for_each(_array, _array + _size, [this](const T& a) { _alloc.destroy(&a); });
        _alloc.deallocate(_array, _capacity);
        _array = nullptr;
    }
    else
    {
        // if _array is nullptr then _alloc has been moved and it needs to reconstruct one
        _alloc = Allocator();
    }
    _array = _alloc.allocate(_capacity);
    _size = 0;
}

template <typename T, typename Allocator>
typename userArray<T, Allocator>::iterator userArray<T, Allocator>::insert(const_iterator pos, const T& value)
{
    auto index = pos - _array;
    //auto extend
    if (_size >= _capacity)
    {
        auto temp = _alloc.allocate(_capacity * 2 + 2);
        auto tmp_size = _size;
        auto tmp_cap = _capacity;
        std::move(_array, _array + _capacity, temp);
        clear();
        _array = temp;
        _capacity = tmp_cap * 2 + 2;
        _size = tmp_size;
        return insert(_array + index, value);
    }
    std::move(_array + index, _array + _size, _array + index + 1);
    ++_size;
    *(_array + index) = value;
    return _array + index;
}

template <typename T, typename Allocator>
typename userArray<T, Allocator>::iterator userArray<T, Allocator>::insert(const_iterator pos, T&& value)
{
    auto index = pos - _array;
    //auto extend
    if (_size >= _capacity)
    {
        auto temp = _alloc.allocate(_capacity * 2 + 2);
        auto tmp_size = _size;
        auto tmp_cap = _capacity;
        std::move(_array, _array + _size, temp);
        clear();
        _array = temp;
        _capacity = tmp_cap * 2 + 2;
        _size = tmp_size;
        return insert(_array + index, value);
    }
    std::move(_array + index, _array + _size, _array + index + 1);
    ++_size;
    *(_array + index) = std::move(value);
    return _array + index;
}

template <typename T, typename Allocator>
typename userArray<T, Allocator>::iterator userArray<T, Allocator>::insert(const_iterator pos, size_type count, const T& value)
{
    auto index = pos - _array;
    //auto extend
    auto c = _capacity;
    for (; c < _size + count; c = c * 2 + 2)
    {
    }
    if (c != _capacity)
    {
        auto temp = _alloc.allocate(c);
        auto tmp_size = _size;
        std::move(_array, _array + _size, temp);
        clear();
        _array = temp;
        _capacity = c;
        _size = tmp_size;
        return insert(_array + index, count, value);
    }
    std::move(_array + index, _array + _size, _array + index + count);
    _size += count;
    std::fill_n(_array + index, count, value);
    return _array + index;
}

template <typename T, typename Allocator>
template <typename Input_iter>
Is_iterator_t<Input_iter, typename userArray<T, Allocator>::iterator> userArray<T, Allocator>::insert(const_iterator pos, Input_iter first, Input_iter last)
{
    auto index = pos - _array;
    auto count = std::distance(first, last);
    //auto extend
    auto c = _capacity;
    for (; c < _size + count; c = c * 2 + 2)
    {
    }
    if (c != _capacity)
    {
        auto temp = _alloc.allocate(c);
        auto tmp_size = _size;
        std::move(_array, _array + _size, temp);
        clear();
        _array = temp;
        _capacity = c;
        _size = tmp_size;
        return insert(_array + index, first, last);
    }
    std::move(_array + index, _array + _size, _array + index + count);
    _size += count;
    std::copy(first, last, _array + index);
    return _array + index;
}

template <typename T, typename Allocator>
typename userArray<T, Allocator>::iterator userArray<T, Allocator>::insert(const_iterator pos, std::initializer_list<T> ilist)
{
    auto index = pos - _array;
    auto count = ilist.size();
    //auto extend
    auto c = _capacity;
    for (; c < _size + count; c = c * 2 + 2)
    {
    }
    if (c != _capacity)
    {
        auto temp = _alloc.allocate(c);
        auto tmp_size = _size;
        std::move(_array, _array + _size, temp);
        clear();
        _array = temp;
        _capacity = c;
        _size = tmp_size;
        return insert(_array + index, ilist);
    }
    std::move(_array + index, _array + _size, _array + index + count);
    _size += count;
    std::copy(ilist.begin(), ilist.end(), _array + index);
    return _array + index;
}

template <typename T, typename Allocator>
template <typename ... Args>
typename userArray<T, Allocator>::iterator userArray<T, Allocator>::emplace(const_iterator pos, Args&&... args)
{
    auto index = pos - _array;
    //auto extend
    if (_size >= _capacity)
    {
        auto temp = _alloc.allocate(_capacity * 2 + 2);
        auto tmp_size = _size;
        auto tmp_cap = _capacity;
        std::move(_array, _array + _size, temp);
        clear();
        _array = temp;
        _capacity = tmp_cap * 2 + 2;
        _size = tmp_size;
        return emplace(_array + index, args...);
    }
    std::move(_array + index, _array + _size, _array + index + 1);
    ++_size;
    *(_array + index) = T(args...);
    return _array + index;
}

template <typename T, typename Allocator>
typename userArray<T, Allocator>::iterator userArray<T, Allocator>::erase(const_iterator pos)
{
    auto index = pos - _array;
    std::move(_array + index + 1, _array + _size, _array + index);
    --_size;
    _alloc.destroy(_array + _size);
    return _array + index;
}

template <typename T, typename Allocator>
typename userArray<T, Allocator>::iterator userArray<T, Allocator>::erase(const_iterator first, const_iterator last)
{
    auto index_f = first - _array;
    auto index_l = last - _array;
    auto count = index_l - index_f;
    std::move(_array + index_l, _array + _size, _array + index_f);
    std::for_each(_array + _size - count, _array + _size, [this](const T& a) {_alloc.destroy(&a); });
    _size -= index_l - index_f;
    return _array + index_f;
}

template <typename T, typename Allocator>
void userArray<T, Allocator>::push_back(const T& value)
{
    //auto extend
    if (_size >= _capacity)
    {
        auto temp = _alloc.allocate(_capacity * 2 + 2);
        auto tmp_size = _size;
        auto tmp_cap = _capacity;
        std::move(_array, _array + _size, temp);
        clear();
        _array = temp;
        _capacity = tmp_cap * 2 + 2;
        _size = tmp_size;
        return push_back(value);
    }
    *(_array + _size) = value;
    ++_size;
}

template <typename T, typename Allocator>
void userArray<T, Allocator>::push_back(T&& value)
{
    //auto extend
    if (_size >= _capacity)
    {
        auto temp = _alloc.allocate(_capacity * 2 + 2);
        auto tmp_size = _size;
        auto tmp_cap = _capacity;
        std::move(_array, _array + _size, temp);
        clear();
        _array = temp;
        _capacity = tmp_cap * 2 + 2;
        _size = tmp_size;
        return push_back(value);
    }
    *(_array + _size) = std::move(value);
    ++_size;
}

template <typename T, typename Allocator>
template <typename ... Args>
void userArray<T, Allocator>::emplace_back(Args&&... args)
{
    //auto extend
    if (_size >= _capacity)
    {
        auto temp = _alloc.allocate(_capacity * 2 + 2);
        auto tmp_size = _size;
        auto tmp_cap = _capacity;
        std::move(_array, _array + _size, temp);
        clear();
        _array = temp;
        _capacity = tmp_cap * 2 + 2;
        _size = tmp_size;
        return emplace_back(args...);
    }
    *(_array + _size) = T(args...);
    ++_size;
}

template <typename T, typename Allocator>
void userArray<T, Allocator>::pop_back()
{
    --_size;
    _alloc.destroy(_array + _size);
}

template <typename T, typename Allocator>
void userArray<T, Allocator>::resize(size_type count)
{
    if (count < _size)
    {
        std::for_each(_array + count, _array + _size, [this](const T& a) {_alloc.destroy(&a); });
        _size = count;
    }
    else if (count > _size)
    {
        //auto extend
        auto c = _capacity;
        for (; c < count; c = c * 2 + 2)
        {
        }
        if (c != _capacity)
        {
            auto temp = _alloc.allocate(c);
            auto tmp_size = _size;
            std::move(_array, _array + _size, temp);
            clear();
            _array = temp;
            _capacity = c;
            _size = tmp_size;
            resize(count);
        }
        std::fill(_array + _size, _array + count, T());
        _size = count;
    }
}

template <typename T, typename Allocator>
void userArray<T, Allocator>::resize(size_type count, const T& value)
{
    if (count < _size)
    {
        std::for_each(_array + count, _array + _size, [this](const T& a) {_alloc.destroy(&a); });
        _size = count;
    }
    else if (count > _size)
    {
        //auto extend
        auto c = _capacity;
        for (; c < count; c = c * 2 + 2)
        {
        }
        if (c != _capacity)
        {
            auto temp = _alloc.allocate(c);
            auto tmp_size = _size;
            std::move(_array, _array + _size, temp);
            clear();
            _array = temp;
            _capacity = c;
            _size = tmp_size;
            resize(count, value);
        }
        std::fill(_array + _size, _array + count, value);
        _size = count;
    }
}

template <typename T, typename Allocator>
void userArray<T, Allocator>::swap(userArray& other)
{
    std::swap(_capacity, other._capacity);
    std::swap(_size, other._size);
    std::swap(_array, other._array);
}

//userArray compare operator
template<typename T, typename Allocator>
bool operator==(const userArray<T, Allocator>& lhs, const userArray<T, Allocator>& rhs) {
    return lhs.size() == rhs.size() && std::equal(lhs.begin(), lhs.end(), rhs.begin(), rhs.end());
}

template<typename T, typename Allocator>
bool operator!=(const userArray<T, Allocator>& lhs, const userArray<T, Allocator>& rhs) {
    return lhs.size() != rhs.size() || !std::equal(lhs.begin(), lhs.end(), rhs.begin(), rhs.end());
}

template<typename T, typename Allocator>
bool operator<(const userArray<T, Allocator>& lhs, const userArray<T, Allocator>& rhs) {
    return std::lexicographical_compare(lhs.begin(), lhs.end(), rhs.begin(), rhs.end(), [](const T &a, const T &b) {return a < b; });
}

template<typename T, typename Allocator>
bool operator<=(const userArray<T, Allocator>& lhs, const userArray<T, Allocator>& rhs) {
    return std::lexicographical_compare(lhs.begin(), lhs.end(), rhs.begin(), rhs.end(), [](const T &a, const T &b) {return a <= b; });
}

template<typename T, typename Allocator>
bool operator>(const userArray<T, Allocator>& lhs, const userArray<T, Allocator>& rhs) {
    return std::lexicographical_compare(lhs.begin(), lhs.end(), rhs.begin(), rhs.end(), [](const T &a, const T &b) {return a > b; });
}

template<typename T, typename Allocator>
bool operator>=(const userArray<T, Allocator>& lhs, const userArray<T, Allocator>& rhs) {
    return std::lexicographical_compare(lhs.begin(), lhs.end(), rhs.begin(), rhs.end(), [](const T &a, const T &b) {return a >= b; });
}

template<typename T, typename Alloc>
void swap(userArray<T, Alloc>& lhs, userArray<T, Alloc>& rhs)
{
    lhs.swap(rhs);
}