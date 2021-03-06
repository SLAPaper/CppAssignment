#pragma once

#include "utilities.h"

//the implementation of C++14 list, referring to http://en.cppreference.com/w/cpp/container/list
template<typename T, typename Allocator = std::allocator<T>> class Link
{
    struct Link_chain {
        Link_chain* _prev;
        Link_chain* _next;
        T _val;

        Link_chain();
        Link_chain(const T& value);
        Link_chain(T&& value);
        Link_chain(Link_chain* prev, Link_chain* next, const T& value);
        Link_chain(const Link_chain& other);
        Link_chain(Link_chain&& other);
    };

public:
    class const_Link_iter : public std::iterator<std::bidirectional_iterator_tag, T>
    {
        friend class Link;
    public:
        typedef T value_type;
        typedef size_t size_type;
        typedef ptrdiff_t difference_type;
        typedef const value_type& reference;
        typedef const value_type& const_reference;
        typedef const value_type* pointer;
        typedef const value_type* const_pointer;

    protected:
        Link_chain* _current;    //pointer to chain

    public:
        const_Link_iter();
        const_Link_iter(Link_chain* current);
        const_Link_iter(const const_Link_iter& other);
        const_Link_iter(const_Link_iter&& other);
        const_Link_iter& operator=(const const_Link_iter& other);
        const_Link_iter& operator=(const_Link_iter&& other);
        void swap(const_Link_iter& other);
        reference operator*() const;
        pointer operator->() const;
        const_Link_iter& operator++();
        const_Link_iter operator++(int);
        const_Link_iter& operator--();
        const_Link_iter operator--(int);
        bool operator==(const const_Link_iter& other) const;
        bool operator!=(const const_Link_iter& other) const;
    };

    class nonconst_Link_iter : public const_Link_iter
    {
    public:
        using const_Link_iter::const_Link_iter;
        using const_Link_iter::value_type;
        using const_Link_iter::_current;

        typedef value_type& reference;
        typedef value_type* pointer;

        reference operator*() const;
        pointer operator->() const;
        nonconst_Link_iter& operator++();
        nonconst_Link_iter operator++(int);
        nonconst_Link_iter& operator--();
        nonconst_Link_iter operator--(int);
    };

    typedef T value_type;
    typedef rebind_alloc<Allocator, Link_chain> allocator_type;
    typedef size_t size_type;
    typedef ptrdiff_t difference_type;
    typedef value_type& reference;
    typedef const value_type& const_reference;
    typedef T* pointer;
    typedef const T* const_pointer;

    //iterator
    typedef nonconst_Link_iter iterator;
    typedef const_Link_iter const_iterator;
    typedef std::reverse_iterator<iterator> reverse_iterator;
    typedef std::reverse_iterator<const_iterator> const_reverse_iterator;

private:
    size_type _size;
    Link_chain *_front;
    Link_chain *_back;
    allocator_type _alloc;

public:
    //constructor
    Link();
    explicit Link(const allocator_type& alloc);
    Link(size_type count, const T& value, const allocator_type& alloc = allocator_type());
    explicit Link(size_type count, const allocator_type& alloc = allocator_type());

    template<typename InputIter, class = Is_iterator_t<InputIter, void>>
    Link(InputIter first, InputIter last, const allocator_type& alloc = allocator_type());

    //copy constructor
    Link(const Link& other);
    Link(const Link& other, const Allocator& alloc);

    //move constructor
    Link(Link&& other);
    Link(Link&& other, const Allocator& alloc);

    Link(std::initializer_list<T> init, const allocator_type& alloc = allocator_type());

    ~Link();

    Link& operator=(const Link& other);
    Link& operator=(Link&& other);
    Link& operator=(std::initializer_list<T> ilist);

    void assign(size_type count, const T& value);

    template< typename Input_iter, class = Is_iterator_t<Input_iter, void>>
    void assign(Input_iter first, Input_iter last);

    void assign(std::initializer_list<T> ilist);

    allocator_type get_allocator() const;

    //Element access
    reference front();
    const_reference front() const;
    reference back();
    const_reference back() const;

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

    //modifiers
    void clear() noexcept;

    iterator insert(const_iterator pos, const T& value);
    iterator insert(const_iterator pos, T&& value);
    iterator insert(const_iterator pos, size_type count, const T& value);

    template<typename Input_iter>
    Is_iterator_t<Input_iter, iterator> insert(const_iterator pos, Input_iter first, Input_iter last);

    iterator insert(const_iterator pos, std::initializer_list<T> ilist);

    template< typename...Args>
    iterator emplace(const_iterator pos, Args&&... args);

    iterator erase(const_iterator pos);
    iterator erase(const_iterator first, const_iterator last);

    void push_back(const T& value);
    void push_back(T&& value);

    template<class... Args>
    void emplace_back(Args&&... args);
    void pop_back();
    void push_front(const T& value);
    void push_front(T&& value);

    template <class... Args>
    void emplace_front(Args&&... args);

    void pop_front();

    void resize(size_type count);
    void resize(size_type count, const value_type& value);

    void swap(Link& other);

    //operations
    void merge(Link& other);

    template<typename Compare>
    void merge(Link& other, Compare comp);

    void merge(Link&& other);

    template<typename Compare>
    void merge(Link&& other, Compare comp);

    void splice(const_iterator pos, Link& other);
    void splice(const_iterator pos, Link&& other);
    void splice(const_iterator pos, Link& other, const_iterator it);
    void splice(const_iterator pos, Link&& other, const_iterator it);
    void splice(const_iterator pos, Link& other, const_iterator first, const_iterator last);
    void splice(const_iterator pos, Link&& other, const_iterator first, const_iterator last);

    void remove(const T& value);

    template<typename UnaryPredicate>
    void remove_if(UnaryPredicate p);

    void reverse();

    void unique();

    template<typename BinaryPredicate>
    void unique(BinaryPredicate p);

    void sort();

    template<typename Compare>
    void sort(Compare comp);
};

template <typename T, typename Allocator>
Link<T, Allocator>::Link_chain::Link_chain() : Link_chain(nullptr, nullptr, T())
{
}

template <typename T, typename Allocator>
Link<T, Allocator>::Link_chain::Link_chain(const T& value) : Link_chain(nullptr, nullptr, value)
{
}

template <typename T, typename Allocator>
Link<T, Allocator>::Link_chain::Link_chain(T&& value) : _prev(nullptr), _next(nullptr)
{
    _val = std::move(value);
}

template <typename T, typename Allocator>
Link<T, Allocator>::Link_chain::Link_chain(Link_chain* prev, Link_chain* next, const T& value) : _prev(prev), _next(next), _val(value)
{
}

template <typename T, typename Allocator>
Link<T, Allocator>::Link_chain::Link_chain(const Link_chain& other) : _prev(other._prev), _next(other._next), _val(other._val)
{
}

template <typename T, typename Allocator>
Link<T, Allocator>::Link_chain::Link_chain(Link_chain&& other) : _prev(other._prev), _next(other._next)
{
    _val = std::move(other._val);
}

template <typename T, typename Allocator>
Link<T, Allocator>::const_Link_iter::const_Link_iter() : _current(nullptr)
{
}

template <typename T, typename Allocator>
Link<T, Allocator>::const_Link_iter::const_Link_iter(Link_chain* current) : _current(current)
{
}

template <typename T, typename Allocator>
Link<T, Allocator>::const_Link_iter::const_Link_iter(const const_Link_iter& other) : _current(other._current)
{
}

template <typename T, typename Allocator>
Link<T, Allocator>::const_Link_iter::const_Link_iter(const_Link_iter&& other) : _current(other._current)
{
}

template <typename T, typename Allocator>
typename Link<T, Allocator>::const_Link_iter& Link<T, Allocator>::const_Link_iter::operator=(const const_Link_iter& other)
{
    _current = other._current;
    return *this;
}

template <typename T, typename Allocator>
typename Link<T, Allocator>::const_Link_iter& Link<T, Allocator>::const_Link_iter::operator=(const_Link_iter&& other)
{
    _current = other._current;
    return *this;
}

template <typename T, typename Allocator>
void Link<T, Allocator>::const_Link_iter::swap(const_Link_iter& other)
{
    std::swap(_current, other._current);
}

template <typename T, typename Allocator>
typename Link<T, Allocator>::const_Link_iter::reference Link<T, Allocator>::const_Link_iter::operator*() const
{
    return _current->_val;
}

template <typename T, typename Allocator>
typename Link<T, Allocator>::const_Link_iter::pointer Link<T, Allocator>::const_Link_iter::operator->() const
{
    return &(_current->_val);
}

template <typename T, typename Allocator>
typename Link<T, Allocator>::const_Link_iter& Link<T, Allocator>::const_Link_iter::operator++()
{
    _current = _current->_next;
    return *this;
}

template <typename T, typename Allocator>
typename Link<T, Allocator>::const_Link_iter Link<T, Allocator>::const_Link_iter::operator++(int)
{
    auto tmp = _current;
    _current = _current->_next;
    return const_Link_iter(tmp);
}

template <typename T, typename Allocator>
typename Link<T, Allocator>::const_Link_iter& Link<T, Allocator>::const_Link_iter::operator--()
{
    _current = _current->_prev;
    return *this;
}

template <typename T, typename Allocator>
typename Link<T, Allocator>::const_Link_iter Link<T, Allocator>::const_Link_iter::operator--(int)
{
    auto tmp = _current;
    _current = _current->_prev;
    return const_Link_iter(tmp);
}

template <typename T, typename Allocator>
bool Link<T, Allocator>::const_Link_iter::operator==(const const_Link_iter& other) const
{
    return _current == other._current;
}

template <typename T, typename Allocator>
bool Link<T, Allocator>::const_Link_iter::operator!=(const const_Link_iter& other) const
{
    return _current != other._current;
}

template <typename T, typename Allocator>
typename Link<T, Allocator>::nonconst_Link_iter::reference Link<T, Allocator>::nonconst_Link_iter::operator*() const
{
    return _current->_val;
}

template <typename T, typename Allocator>
typename Link<T, Allocator>::nonconst_Link_iter::pointer Link<T, Allocator>::nonconst_Link_iter::operator->() const
{
    return &(_current->_val);
}

template <typename T, typename Allocator>
typename Link<T, Allocator>::nonconst_Link_iter& Link<T, Allocator>::nonconst_Link_iter::operator++()
{
    _current = _current->_next;
    return *this;
}

template <typename T, typename Allocator>
typename Link<T, Allocator>::nonconst_Link_iter Link<T, Allocator>::nonconst_Link_iter::operator++(int)
{
    auto tmp = _current;
    _current = _current->_next;
    return nonconst_Link_iter(tmp);
}

template <typename T, typename Allocator>
typename Link<T, Allocator>::nonconst_Link_iter& Link<T, Allocator>::nonconst_Link_iter::operator--()
{
    _current = _current->_prev;
    return *this;
}

template <typename T, typename Allocator>
typename Link<T, Allocator>::nonconst_Link_iter Link<T, Allocator>::nonconst_Link_iter::operator--(int)
{
    auto tmp = _current;
    _current = _current->_prev;
    return nonconst_Link_iter(tmp);
}

template <typename T, typename Allocator>
Link<T, Allocator>::Link() : Link(allocator_type())
{
}

template <typename T, typename Allocator>
Link<T, Allocator>::Link(const allocator_type& alloc) : _size(0), _alloc(alloc)
{
    _front = _alloc.allocate(1);
    _back = _alloc.allocate(1);
    _alloc.construct(_front);
    _alloc.construct(_back);
    _front->_next = _back;
    _back->_prev = _front;
}

template <typename T, typename Allocator>
Link<T, Allocator>::Link(size_type count, const T& value, const allocator_type& alloc) : Link(alloc)
{
    for (size_type i = 0; i < count; ++i)
    {
        push_back(value);
    }
}

template <typename T, typename Allocator>
Link<T, Allocator>::Link(size_type count, const allocator_type& alloc) : Link(alloc)
{
    // insert n
    for (size_type i = 0; i < count; ++i)
    {
        emplace_back();
    }
}

template <typename T, typename Allocator>
template <typename InputIter, class>
Link<T, Allocator>::Link(InputIter first, InputIter last, const allocator_type& alloc) : Link(alloc)
{
    std::for_each(first, last, [this](const T& a) { push_back(a); });
}

// ReSharper disable once CppPossiblyUninitializedMember
template <typename T, typename Allocator>
Link<T, Allocator>::Link(const Link& other) : Link(other, std::allocator_traits<allocator_type>::select_on_container_copy_construction(other.get_allocator()))
{
}

template <typename T, typename Allocator>
Link<T, Allocator>::Link(const Link& other, const Allocator& alloc) : _size(0)
{
    _alloc = rebind_alloc<Allocator, Link_chain>(alloc);
    _front = _alloc.allocate(1);
    _back = _alloc.allocate(1);
    _alloc.construct(_front);
    _alloc.construct(_back);
    _front->_next = _back;
    _back->_prev = _front;
    for (auto a : other)
    {
        push_back(a);
    }
}

template <typename T, typename Allocator>
Link<T, Allocator>::Link(Link&& other)
{
    _size = other._size;

    auto tmp_begin = other._front->_next;
    auto tmp_end = other._back->_prev;
    other._alloc.destroy(other._front);
    other._alloc.destroy(other._back);
    other._alloc.deallocate(other._front, 1);
    other._alloc.deallocate(other._back, 1);
    other._front = nullptr;
    other._back = nullptr;

    _alloc = std::move(other._alloc);
    _front = _alloc.allocate(1);
    _back = _alloc.allocate(1);
    _alloc.construct(_front);
    _alloc.construct(_back);
    _front->_next = tmp_begin;
    _back->_prev = tmp_end;
    tmp_begin->_prev = _front;
    tmp_end->_next = _back;

    other._size = 0;
    other._alloc = Allocator();
    other._front = other._alloc.allocate(1);
    other._back = other._alloc.allocate(1);
    other._alloc.construct(other._front);
    other._alloc.construct(other._back);
    other._front->_next = other._back;
    other._back->_next = other._front;
}

template <typename T, typename Allocator>
Link<T, Allocator>::Link(Link&& other, const Allocator& alloc) : _size(0)
{
    _alloc = rebind_alloc<Allocator, Link_chain>(alloc);
    if (_alloc == other.get_allocator())
    {
        _front = _alloc.allocate(1);
        _back = _alloc.allocate(1);
        _alloc.construct(_front);
        _alloc.construct(_back);
        _front->_next = other._front->_next;
        _front->_next->_prev = _front;
        _back->_prev = other._back->prev;
        _back->_prev->_next = _back;
    }
    else
    {
        // move items individually
        auto p = _front;
        auto q = other._front;
        while (q != other._back)
        {
            p->_next = _alloc.allocate(1);
            auto tmp_qnext = q->_next;
            *(p->_next) = std::move(*tmp_qnext);
            p->_next->_prev = p;

            p = p->_next;
            q = tmp_qnext;
        }
    }
    _size = other._size;

    other.size = 0;
    other._front->_next = other._back;
    other._back->_prev = other._front;
}

template <typename T, typename Allocator>
Link<T, Allocator>::Link(std::initializer_list<T> init, const allocator_type& alloc) : Link(alloc)
{
    for (auto a : init)
    {
        push_back(a);
    }
}

template <typename T, typename Allocator>
Link<T, Allocator>::~Link()
{
    clear();
    _alloc.destroy(_front);
    _alloc.destroy(_back);
    _alloc.deallocate(_front, 1);
    _alloc.deallocate(_back, 1);
}

template <typename T, typename Allocator>
Link<T, Allocator>& Link<T, Allocator>::operator=(const Link& other)
{
    clear();

    if (std::allocator_traits<allocator_type>::propagate_on_container_copy_assignment())
    {
        if (_alloc != other._alloc)
        {
            _alloc.destroy(_front);
            _alloc.destroy(_back);
            _alloc.deallocate(_front, 1);
            _alloc.deallocate(_back, 1);
            _front = nullptr;
            _back = nullptr;
        }
        _alloc = other._alloc;
        _front = _alloc.allocate(1);
        _back = _alloc.allocate(1);
        _alloc.construct(_front);
        _alloc.construct(_back);
        _front->_next = _back;
        _back->_prev = _front;
    }
    for (auto a : other)
    {
        push_back(a);
    }
    return *this;
}

template <typename T, typename Allocator>
Link<T, Allocator>& Link<T, Allocator>::operator=(Link&& other)
{
    clear();

    if (std::allocator_traits<allocator_type>::propagate_on_container_move_assignment())
    {
        _alloc.destroy(_front);
        _alloc.destroy(_back);
        _alloc.deallocate(_front, 1);
        _alloc.deallocate(_back, 1);

        _alloc = other._alloc;
        _front = _alloc.allocate(1);
        _back = _alloc.allocate(1);
        _alloc.construct(_front);
        _alloc.construct(_back);
        _front->_next = other._front->_next;
        _front->_next->_prev = _front;
        _back->_prev = other._back->_prev;
        _back->_prev->_next = _back;
        _size = other._size;
    }
    else if (_alloc != other._alloc)
    {
        for (auto a : other)
        {
            push_back(std::move(a));
        }
        other.clear();
    }
    else
    {
        _front->_next = other._front->_next;
        _front->_next->_prev = _front;
        _back->_prev = other._back->_prev;
        _back->_prev->_next = _back;
        _size = other._size;
    }

    other._size = 0;
    other._front->_next = other._back;
    other._back->_prev = other._front;

    return *this;
}

template <typename T, typename Allocator>
Link<T, Allocator>& Link<T, Allocator>::operator=(std::initializer_list<T> ilist)
{
    clear();
    for (auto a : ilist)
    {
        push_back(std::move(a));
    }
    return *this;
}

template <typename T, typename Allocator>
void Link<T, Allocator>::assign(size_type count, const T& value)
{
    clear();
    for (size_type i = 0; i < count; ++i)
    {
        push_back(value);
    }
}

template <typename T, typename Allocator>
template <typename Input_iter, class>
void Link<T, Allocator>::assign(Input_iter first, Input_iter last)
{
    clear();
    std::for_each(first, last, [this](const T& a) { push_back(a); });
}

template <typename T, typename Allocator>
void Link<T, Allocator>::assign(std::initializer_list<T> ilist)
{
    clear();
    for (auto a : ilist)
    {
        push_back(std::move(a));
    }
}

template <typename T, typename Allocator>
typename Link<T, Allocator>::allocator_type Link<T, Allocator>::get_allocator() const
{
    return _alloc;
}

template <typename T, typename Allocator>
typename Link<T, Allocator>::reference Link<T, Allocator>::front()
{
    return _front->_next->_val;
}

template <typename T, typename Allocator>
typename Link<T, Allocator>::const_reference Link<T, Allocator>::front() const
{
    return _front->_next->_val;
}

template <typename T, typename Allocator>
typename Link<T, Allocator>::reference Link<T, Allocator>::back()
{
    return _back->_prev->_val;
}

template <typename T, typename Allocator>
typename Link<T, Allocator>::const_reference Link<T, Allocator>::back() const
{
    return _back->_prev->_val;
}

template <typename T, typename Allocator>
typename Link<T, Allocator>::difference_type Link<T, Allocator>::count(const T& value) const
{
    return countIF([value](const T& a)->bool {return a == value; });
}

template <typename T, typename Allocator>
template <typename UnaryPredicate>
typename Link<T, Allocator>::difference_type Link<T, Allocator>::countIF(UnaryPredicate p) const
{
    return std::count_if(begin(), end(), p);
}

template <typename T, typename Allocator>
typename Link<T, Allocator>::iterator Link<T, Allocator>::begin()
{
    return iterator(_front->_next);
}

template <typename T, typename Allocator>
typename Link<T, Allocator>::const_iterator Link<T, Allocator>::begin() const
{
    return const_iterator(_front->_next);
}

template <typename T, typename Allocator>
typename Link<T, Allocator>::const_iterator Link<T, Allocator>::cbegin() const
{
    return const_iterator(_front->_next);
}

template <typename T, typename Allocator>
typename Link<T, Allocator>::iterator Link<T, Allocator>::end()
{
    return iterator(_back);
}

template <typename T, typename Allocator>
typename Link<T, Allocator>::const_iterator Link<T, Allocator>::end() const
{
    return const_iterator(_back);
}

template <typename T, typename Allocator>
typename Link<T, Allocator>::const_iterator Link<T, Allocator>::cend() const
{
    return const_iterator(_back);
}

template <typename T, typename Allocator>
typename Link<T, Allocator>::reverse_iterator Link<T, Allocator>::rbegin()
{
    return reverse_iterator(end());
}

template <typename T, typename Allocator>
typename Link<T, Allocator>::const_reverse_iterator Link<T, Allocator>::rbegin() const
{
    return const_reverse_iterator(end());
}

template <typename T, typename Allocator>
typename Link<T, Allocator>::const_reverse_iterator Link<T, Allocator>::crbegin() const
{
    return const_reverse_iterator(end());
}

template <typename T, typename Allocator>
typename Link<T, Allocator>::reverse_iterator Link<T, Allocator>::rend()
{
    return reverse_iterator(begin());
}

template <typename T, typename Allocator>
typename Link<T, Allocator>::const_reverse_iterator Link<T, Allocator>::rend() const
{
    return const_reverse_iterator(begin());
}

template <typename T, typename Allocator>
typename Link<T, Allocator>::const_reverse_iterator Link<T, Allocator>::crend() const
{
    return const_reverse_iterator(begin());
}

template <typename T, typename Allocator>
bool Link<T, Allocator>::empty() const noexcept
{
    if (_size == 0)
        return true;
    return false;
}

template <typename T, typename Allocator>
typename Link<T, Allocator>::size_type Link<T, Allocator>::size() const noexcept
{
    return _size;
}

template <typename T, typename Allocator>
typename Link<T, Allocator>::size_type Link<T, Allocator>::max_size() noexcept
{
    return std::numeric_limits<size_type>::max();
}

template <typename T, typename Allocator>
void Link<T, Allocator>::clear() noexcept
{
    _size = 0;
    if (_front != nullptr && _back != nullptr)
    {
        auto p = _front->_next;
        while (p != _back)
        {
            auto q = p->_next;
            _alloc.destroy(p);
            p = q;
        }
    }
    else
    {
        //either _front or _back is nullptr means that _alloc has been moved and should be reconstructed
        _alloc = Allocator();
        _front = _alloc.allocate(1);
        _back = _alloc.allocate(1);
        _alloc.construct(_front);
        _alloc.construct(_back);
    }
    _front->_next = _back;
    _back->_prev = _front;
}

template <typename T, typename Allocator>
typename Link<T, Allocator>::iterator Link<T, Allocator>::insert(const_iterator pos, const T& value)
{
    auto tmp_prev = pos._current->_prev;
    pos._current->_prev = _alloc.allocate(1);
    _alloc.construct(pos._current->_prev, value);
    tmp_prev->_next = pos._current->_prev;
    pos._current->_prev->_prev = tmp_prev;
    pos._current->_prev->_next = pos._current;
    ++_size;

    return iterator(pos._current->_prev);
}

template <typename T, typename Allocator>
typename Link<T, Allocator>::iterator Link<T, Allocator>::insert(const_iterator pos, T&& value)
{
    auto tmp_prev = pos._current->_prev;
    pos._current->_prev = _alloc.allocate(1);
    _alloc.construct(pos._current->_prev, std::move(value));
    tmp_prev->_next = pos._current->_prev;
    pos._current->_prev->_prev = tmp_prev;
    pos._current->_prev->_next = pos._current;
    ++_size;

    return iterator(pos._current->_prev);
}

template <typename T, typename Allocator>
typename Link<T, Allocator>::iterator Link<T, Allocator>::insert(const_iterator pos, size_type count, const T& value)
{
    auto p = pos._current->_prev;
    for (size_type i = 0; i < count; ++i)
    {
        insert(pos, value);
    }
    return iterator(p->_next);
}

template <typename T, typename Allocator>
template <typename Input_iter>
Is_iterator_t<Input_iter, typename Link<T, Allocator>::iterator> Link<T, Allocator>::insert(const_iterator pos, Input_iter first, Input_iter last)
{
    auto p = pos._current->_prev;
    std::for_each(first, last, [this, pos](const T& a) {insert(pos, a); });
    return iterator(p->_next);
}

template <typename T, typename Allocator>
typename Link<T, Allocator>::iterator Link<T, Allocator>::insert(const_iterator pos, std::initializer_list<T> ilist)
{
    auto p = pos._current->_prev;
    for (auto a : ilist)
    {
        insert(pos, a);
    }
    return iterator(p->_next);
}

template <typename T, typename Allocator>
template <typename ... Args>
typename Link<T, Allocator>::iterator Link<T, Allocator>::emplace(const_iterator pos, Args&&... args)
{

    auto tmp_prev = pos._current->_prev;
    pos._current->_prev = _alloc.allocate(1);
    _alloc.construct(pos._current->_prev, args...);
    tmp_prev->_next = pos._current->_prev;
    pos._current->_prev->_prev = tmp_prev;
    pos._current->_prev->_next = pos._current;
    ++_size;

    return iterator(pos._current->_prev);
}

template <typename T, typename Allocator>
typename Link<T, Allocator>::iterator Link<T, Allocator>::erase(const_iterator pos)
{
    auto prev = pos._current->_prev;
    auto next = pos._current->_next;
    _alloc.destroy(pos._current);
    _alloc.deallocate(pos._current, 1);
    prev->_next = next;
    next->_prev = prev;
    --_size;
    return iterator(next);
}

template <typename T, typename Allocator>
typename Link<T, Allocator>::iterator Link<T, Allocator>::erase(const_iterator first, const_iterator last)
{
    auto prev = first._current->_prev;
    for (auto p = first._current; p != last._current;)
    {
        auto p_next = p->_next;
        _alloc.destroy(p);
        _alloc.deallocate(p, 1);
        p = p_next;
        --_size;
    }
    prev->_next = last._current;
    last._current->_prev = prev;
    return iterator(last._current);
}

template <typename T, typename Allocator>
void Link<T, Allocator>::push_back(const T& value)
{
    auto tmp_prev = _back->_prev;
    _back->_prev = _alloc.allocate(1);
    _alloc.construct(_back->_prev, value);
    tmp_prev->_next = _back->_prev;
    _back->_prev->_prev = tmp_prev;
    _back->_prev->_next = _back;
    ++_size;
}

template <typename T, typename Allocator>
void Link<T, Allocator>::push_back(T&& value)
{
    auto tmp_prev = _back->_prev;
    _back->_prev = _alloc.allocate(1);
    _alloc.construct(_back->_prev, value);
    tmp_prev->_next = _back->_prev;
    _back->_prev->_prev = tmp_prev;
    _back->_prev->_next = _back;
    ++_size;
}

template <typename T, typename Allocator>
template <class ... Args>
void Link<T, Allocator>::emplace_back(Args&&... args)
{
    push_back(T(args...));
}

template <typename T, typename Allocator>
void Link<T, Allocator>::pop_back()
{
    erase(--end());
}

template <typename T, typename Allocator>
void Link<T, Allocator>::push_front(const T& value)
{
    auto tmp_next = _front->_next;
    _front->_next = _alloc.allocate(1);
    _alloc.construct(_front->_next, value);
    tmp_next->_prev = _front->_next;
    _front->_next->_next = tmp_next;
    _front->_next->_prev = _front;
    ++_size;
}

template <typename T, typename Allocator>
void Link<T, Allocator>::push_front(T&& value)
{
    auto tmp_next = _front->_next;
    _front->_next = _alloc.allocate(1);
    _alloc.construct(_front->_next, std::move(value));
    tmp_next->_prev = _front->_next;
    _front->_next->_next = tmp_next;
    _front->_next->_prev = _front;
    ++_size;
}

template <typename T, typename Allocator>
template <class ... Args>
void Link<T, Allocator>::emplace_front(Args&&... args)
{
    push_front(T(args...));
}

template <typename T, typename Allocator>
void Link<T, Allocator>::pop_front()
{
    erase(begin());
}

template <typename T, typename Allocator>
void Link<T, Allocator>::resize(size_type count)
{
    auto tmp = _size;
    if (tmp > count)
    {
        for (size_type i = 0; i < tmp - count; ++i)
        {
            pop_back();
        }
    }
    else if (tmp < count)
    {
        for (size_type i = 0; i < count - tmp; ++i)
        {
            emplace_back();
        }
    }
}

template <typename T, typename Allocator>
void Link<T, Allocator>::resize(size_type count, const value_type& value)
{
    auto tmp = _size;
    if (tmp > count)
    {
        for (size_type i = 0; i < tmp - count; ++i)
        {
            pop_back();
        }
    }
    else if (tmp < count)
    {
        for (size_type i = 0; i < count - tmp; ++i)
        {
            push_back(value);
        }
    }
}

template <typename T, typename Allocator>
void Link<T, Allocator>::swap(Link& other)
{
    if (std::allocator_traits<allocator_type>::propagate_on_container_swap::value)
    {
        std::swap(_alloc, other._alloc);
    }
    std::swap(_size, other._size);
    std::swap(_front, other._front);
    std::swap(_back, other._back);
}

template <typename T, typename Allocator>
void Link<T, Allocator>::merge(Link& other)
{
    merge(other, [](const T& a, const T& b) -> bool {return a < b; });
}

template <typename T, typename Allocator>
template <typename Compare>
void Link<T, Allocator>::merge(Link& other, Compare comp)
{
    auto i = begin();
    auto j = other.begin();
    while (i != end() || j != other.end())
    {
        if (comp(*i, *j))
        {
            if (i != end())
            {
                ++i;
            }
            else
            {
                splice(end(), other, j, other.end());
                j = other.end();
            }
        }
        else
        {
            if (j != other.end())
            {
                auto tmp = j++;
                splice(i, other, tmp);
            }
            else
            {
                i = end();
            }
        }
    }
}

template <typename T, typename Allocator>
void Link<T, Allocator>::merge(Link&& other)
{
    merge(other, [](const T& a, const T& b) -> bool {return a < b; });
}

template <typename T, typename Allocator>
template <typename Compare>
void Link<T, Allocator>::merge(Link&& other, Compare comp)
{
    auto i = begin();
    auto j = other.begin();
    while (i != end() || j != other.end())
    {
        if (comp(*i, *j))
        {
            if (i != end())
            {
                ++i;
            }
            else
            {
                insert(end(), j, other.end());
                j = other.end();
            }
        }
        else
        {
            if (j != other.end())
            {
                insert(i, *j);
                ++j;
            }
            else
            {
                i = end();
            }
        }
    }
}

template <typename T, typename Allocator>
void Link<T, Allocator>::splice(const_iterator pos, Link& other)
{
    auto prev = pos._current->_prev;
    prev->_next = other._front->_next;
    prev->_next->_prev = prev;
    pos._current->_prev = other._back->_prev;
    pos._current->_prev->_next = pos._current;
    _size += other._size;

    other._front->_next = other._back;
    other._back->_prev = other._front;
    other.clear();
}

template <typename T, typename Allocator>
void Link<T, Allocator>::splice(const_iterator pos, Link&& other)
{
    auto prev = pos._current->_prev;
    prev->_next = other._front->_next;
    prev->_next->_prev = prev;
    pos._current->_prev = other._back->_prev;
    pos._current->_prev->_next = pos._current;
    _size += other._size;

    other._front->_next = other._back;
    other._back->_prev = other._front;
    other.clear();
}

template <typename T, typename Allocator>
void Link<T, Allocator>::splice(const_iterator pos, Link& other, const_iterator it)
{
    auto prev = pos._current->_prev;
    prev->_next = it._current;
    pos._current->_prev = it._current;

    it._current->_prev->_next = it._current->_next;
    it._current->_next->_prev = it._current->_prev;
    it._current->_prev = prev;
    it._current->_next = pos._current;
    --(other._size);
    ++_size;
}

template <typename T, typename Allocator>
void Link<T, Allocator>::splice(const_iterator pos, Link&& other, const_iterator it)
{
    auto prev = pos._current->_prev;
    prev->_next = it._current;
    pos._current->_prev = it._current;

    it._current->_prev->_next = it._current->_next;
    it._current->_next->_prev = it._current->_prev;
    it._current->_prev = prev;
    it._current->_next = pos._current;
    --(other._size);
    ++_size;
}

template <typename T, typename Allocator>
void Link<T, Allocator>::splice(const_iterator pos, Link& other, const_iterator first, const_iterator last)
{
    if (this == &other)
    {
        auto tmp_pos_prev = pos._current->_prev;
        auto tmp_first_prev = first._current->_prev;
        auto tmp_last_prev = last._current->_prev;

        tmp_pos_prev->_next = first._current;
        first._current->_prev = tmp_pos_prev;

        tmp_last_prev->_next = pos._current;
        pos._current->_prev = tmp_last_prev;

        tmp_first_prev->_next = last._current;
        last._current->_prev = tmp_first_prev;
    }
    else
    {
        for (auto i = first; i != last;)
        {
            auto tmp = i;
            ++tmp;
            splice(pos, other, i);
            i = tmp;
        }
    }
}

template <typename T, typename Allocator>
void Link<T, Allocator>::splice(const_iterator pos, Link&& other, const_iterator first, const_iterator last)
{
    if (this == &other)
    {
        auto tmp_pos_prev = pos._current->_prev;
        auto tmp_first_prev = first._current->_prev;
        auto tmp_last_prev = last._current->_prev;

        tmp_pos_prev->_next = first._current;
        first._current->_prev = tmp_pos_prev;

        tmp_last_prev->_next = pos._current;
        pos._current->_prev = tmp_last_prev;

        tmp_first_prev->_next = last._current;
        last._current->_prev = tmp_first_prev;
    }
    else
    {
        for (auto i = first; i != last;)
        {
            auto tmp = i++;
            splice(pos, other, tmp);
        }
    }
}

template <typename T, typename Allocator>
void Link<T, Allocator>::remove(const T& value)
{
    remove_if([value](const T &a)->bool {return a == value; });
}

template <typename T, typename Allocator>
template <typename UnaryPredicate>
void Link<T, Allocator>::remove_if(UnaryPredicate p)
{
    for (auto i = begin(); i != end();)
    {
        auto tmp = i++;
        if (p(tmp._current->_val))
        {
            erase(tmp);
        }
    }
}

template <typename T, typename Allocator>
void Link<T, Allocator>::reverse()
{
    for (auto i = begin(); i != end();)
    {
        auto tmp = i++;
        std::swap(tmp._current->_next, tmp._current->_prev);
    }
    std::swap(_front->_next, _back->_prev);
    _front->_next->_prev = _front;
    _back->_prev->_next = _back;
}

template <typename T, typename Allocator>
void Link<T, Allocator>::unique()
{
    unique([](const T& a, const T& b)->bool {return a == b; });
}

template <typename T, typename Allocator>
template <typename BinaryPredicate>
void Link<T, Allocator>::unique(BinaryPredicate p)
{
    for (auto i = begin(); i != end();)
    {
        auto tmp = i++;
        while (p(*tmp, *i) && i != end())
        {
            auto dulp = i++;
            erase(dulp);
        }
    }
}

template <typename T, typename Allocator>
void Link<T, Allocator>::sort()
{
    sort([](const T& a, const T& b)->bool {return a < b; });
}

template <typename T, typename Allocator>
template <typename Compare>
void Link<T, Allocator>::sort(Compare comp)
{
    auto nodes = new Link_chain*[_size];

    auto index = 0;
    for (auto i = begin(); i != end(); ++i)
    {
        nodes[index++] = i._current;
    }
    std::stable_sort(nodes, nodes + index, [comp](const Link_chain *a, const Link_chain *b)->bool {return comp(a->_val, b->_val); });
    for (auto i = 0; i < index - 1; ++i)
    {
        nodes[i]->_next = nodes[i + 1];
        nodes[i + 1]->_prev = nodes[i];
    }
    _front->_next = nodes[0];
    _front->_next->_prev = _front;
    _back->_prev = nodes[index - 1];
    _back->_prev->_next = _back;
    delete[] nodes;
}

//Link compare operator
template<typename T, typename Allocator>
bool operator==(const Link<T, Allocator>& lhs, const Link<T, Allocator>& rhs) {
    return lhs.size() == rhs.size() && std::equal(lhs.begin(), lhs.end(), rhs.begin(), rhs.end());
}

template<typename T, typename Allocator>
bool operator!=(const Link<T, Allocator>& lhs, const Link<T, Allocator>& rhs) {
    return lhs.size() != rhs.size() || !std::equal(lhs.begin(), lhs.end(), rhs.begin(), rhs.end());
}

template<typename T, typename Allocator>
bool operator<(const Link<T, Allocator>& lhs, const Link<T, Allocator>& rhs) {
    return std::lexicographical_compare(lhs.begin(), lhs.end(), rhs.begin(), rhs.end(), [](const T &a, const T &b) {return a < b; });
}

template<typename T, typename Allocator>
bool operator<=(const Link<T, Allocator>& lhs, const Link<T, Allocator>& rhs) {
    return std::lexicographical_compare(lhs.begin(), lhs.end(), rhs.begin(), rhs.end(), [](const T &a, const T &b) {return a <= b; });
}

template<typename T, typename Allocator>
bool operator>(const Link<T, Allocator>& lhs, const Link<T, Allocator>& rhs) {
    return std::lexicographical_compare(lhs.begin(), lhs.end(), rhs.begin(), rhs.end(), [](const T &a, const T &b) {return a > b; });
}

template<typename T, typename Allocator>
bool operator>=(const Link<T, Allocator>& lhs, const Link<T, Allocator>& rhs) {
    return std::lexicographical_compare(lhs.begin(), lhs.end(), rhs.begin(), rhs.end(), [](const T &a, const T &b) {return a >= b; });
}
template<typename T, typename Alloc>

void swap(Link<T, Alloc>& lhs, Link<T, Alloc>& rhs)
{
    lhs.swap(rhs);
}
