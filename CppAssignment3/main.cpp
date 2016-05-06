#include <iostream>
#include <vector>
#include <array>
#include <ostream>
#include <stdexcept>

using namespace std;

typedef long long lld;
typedef unsigned long long llu;

class prime
{
public:
    typedef llu value_type;
    typedef size_t size_type;
    typedef ptrdiff_t difference_type;
    typedef const value_type& const_reference;
    typedef const value_type* const_pointer;

private:
    difference_type end_index;
    static vector<array<llu, 1000>> prime_table;
    static size_type prime_size;
    static llu max_prime;

public:
    class prime_iterator : public iterator<random_access_iterator_tag, llu>
    {
        friend class prime;

        size_type iter_index;
    public:
        prime_iterator(size_t n = 0) : iter_index(n)
        {
        }

        reference operator*() const {
            return prime_table[iter_index / 1000][iter_index % 1000];
        }

        prime_iterator& operator++() {
            ++iter_index;
            return *this;
        }

        prime_iterator operator++(int) {
            return prime_iterator(iter_index++);
        }

        prime_iterator& operator--() {
            --iter_index;
            return *this;
        }

        prime_iterator operator--(int) {
            return prime_iterator(iter_index--);
        }

        bool operator==(const prime_iterator& other)const {
            return iter_index == other.iter_index;
        }

        bool operator!=(const prime_iterator& other)const {
            return iter_index != other.iter_index;
        }
    };

    typedef prime_iterator const_iterator;
    typedef reverse_iterator<const_iterator> const_reverse_iterator;

    class primeException : public out_of_range
    {
        friend class prime;

        primeException() : out_of_range("Index out of range\n")
        {
        }
    };

private:
    static void _expand(size_type n)
    {
        // TODO
    }

public:

    prime(size_type n = 1000)
    {
        if (max_prime < n)
        {
            _expand(n);
        }
        end_index = prime_size;
    }

    prime(const prime &other) : end_index(other.end_index)
    {
    }

    prime(prime &&other) : end_index(other.end_index)
    {
    }

    ~prime()
    {
    }

    prime& operator=(const prime &other) {
        end_index = other.end_index;
        return *this;
    }

    prime& operator=(prime &&other) {
        end_index = other.end_index;
        return *this;
    }

    llu operator[](size_type k) const
    {
        if (k > prime_size)
        {
            throw primeException();
        }
        return prime_table[k / 1000][k % 1000];
    }

    void clear() const
    {
        prime_table.clear();
    }

    void print(ostream &out = cout) const
    {
        for (auto prime : *this)
        {
            out << prime << '\t';
        }
        out << endl;
    }

    llu maxPrime() const
    {
        return max_prime;
    }

    size_type primeCount() const
    {
        return prime_size;
    }

    difference_type expand(size_type n) const
    {
        if (n <= max_prime)
        {
            return 0;
        }
        else
        {
            auto old_size = prime_size;
            _expand(n);
            return prime_size - old_size;
        }
    }

    const_iterator begin() const {
        return const_iterator();
    }

    const_iterator cbegin() const {
        return const_iterator();
    }

    const_iterator end() const {
        return const_iterator(prime_size);
    }

    const_iterator cend() const {
        return const_iterator(prime_size);
    }

    const_reverse_iterator rbegin() const
    {
        return const_reverse_iterator(end());
    }

    const_reverse_iterator crbegin() const
    {
        return const_reverse_iterator(end());
    }

    const_reverse_iterator rend() const
    {
        return const_reverse_iterator(begin());
    }

    const_reverse_iterator crend() const
    {
        return const_reverse_iterator(begin());
    }
};

vector<array<llu, 1000>> prime::prime_table = vector<array<llu, 1000>>();
prime::size_type prime::prime_size = 0;
llu prime::max_prime = 0;

void Test()
{
    prime tmp(2000);
    tmp.print();
}

int main(int argc, char *argv[])
{
    prime myPrime(20000);
    prime hisPrime(200);
    prime herPrime(200000);
    auto itsPrime = myPrime;
    cout << itsPrime[100] << endl;

    for (auto iter = myPrime.begin(); iter != myPrime.end(); ++iter)
    {
        cout << *iter << "\t";
    }

    cout << myPrime.maxPrime() << endl;
    cout << myPrime.primeCount() << endl;
    cout << myPrime.expand(1000000) << endl;

    return 0;
}