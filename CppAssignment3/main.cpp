#include <iostream>
#include <vector>
#include <array>
#include <ostream>
#include <stdexcept>

using namespace std;

typedef long long lld;
typedef unsigned long long llu;

// Prime number generator, all instance share a common prime table
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
        prime_iterator(size_t n = 0);
        reference operator*() const;
        prime_iterator& operator++();
        prime_iterator operator++(int);
        prime_iterator& operator--();
        prime_iterator operator--(int);
        bool operator==(const prime_iterator& other) const;
        bool operator!=(const prime_iterator& other) const;
    };

    typedef prime_iterator const_iterator;
    typedef reverse_iterator<const_iterator> const_reverse_iterator;

    class primeException : public out_of_range
    {
        friend class prime;
        primeException();
    };

private:
    // Method to expand prime table, use Sieve of Eratosthenes algorithm (https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes)
    static void _expand(size_type n);

public:
    prime(size_type n = 1000);
    prime(const prime& other);
    prime(prime&& other);
    ~prime();
    prime& operator=(const prime& other);
    prime& operator=(prime&& other);
    llu operator[](size_type k) const;
    void clear() const;
    void print(ostream& out = cout) const;
    llu maxPrime() const;
    size_type primeCount() const;
    difference_type expand(size_type n) const;
    const_iterator begin() const;
    const_iterator cbegin() const;
    const_iterator end() const;
    const_iterator cend() const;
    const_reverse_iterator rbegin() const;
    const_reverse_iterator crbegin() const;
    const_reverse_iterator rend() const;
    const_reverse_iterator crend() const;
};

prime::prime_iterator::prime_iterator(size_t n) : iter_index(n)
{
}

iterator<random_access_iterator_tag, unsigned long long>::reference prime::prime_iterator::operator*() const
{
    return prime_table[iter_index / 1000][iter_index % 1000];
}

prime::prime_iterator& prime::prime_iterator::operator++()
{
    ++iter_index;
    return *this;
}

prime::prime_iterator prime::prime_iterator::operator++(int)
{
    return prime_iterator(iter_index++);
}

prime::prime_iterator& prime::prime_iterator::operator--()
{
    --iter_index;
    return *this;
}

prime::prime_iterator prime::prime_iterator::operator--(int)
{
    return prime_iterator(iter_index--);
}

bool prime::prime_iterator::operator==(const prime_iterator& other) const
{
    return iter_index == other.iter_index;
}

bool prime::prime_iterator::operator!=(const prime_iterator& other) const
{
    return iter_index != other.iter_index;
}

prime::primeException::primeException() : out_of_range("Index out of range\n")
{
}

void prime::_expand(size_type n)
{
    if (max_prime == 0)
    {
        prime_table.push_back(array<llu, 1000>());
        prime_table[0][0] = 2llu;
        prime_size = 1;
        max_prime = 2llu;
    }

    if (n > max_prime)
    {
        auto numbers = vector<value_type>();
        auto flags = vector<bool>(n - max_prime, true);
        for (auto i = max_prime + 1; i <= n; ++i)
        {
            numbers.push_back(i);
        }

        // use known prime to filter numbers
        for (auto i = 0; i < prime_size; ++i)
        {
            auto p = prime_table[i / 1000][i % 1000];
            auto start_number_i = 0 + p - numbers[0] % p;
            for (auto j = start_number_i; j < numbers.size(); j += p)
            {
                flags[j] = false;
            }
        }

        // use new number to filter following number
        for (auto i = 0; i < numbers.size(); ++i)
        {
            if (flags[i])
            {
                auto p = numbers[i];
                auto start_number_i = i + p;
                for (auto j = start_number_i; j < numbers.size(); j += p)
                {
                    flags[j] = false;
                }
            }
        }

        // pickup new prime numbers
        for (auto i = 0; i < numbers.size(); ++i)
        {
            if (flags[i])
            {
                if (prime_size % 1000 == 0)
                {
                    prime_table.push_back(array<llu, 1000>());
                }
                prime_table[prime_size / 1000][prime_size % 1000] = numbers[i];
                ++prime_size;
                max_prime = numbers[i];
            }
        }
    }
}

prime::prime(size_type n)
{
    if (max_prime < n)
    {
        _expand(n);
    }
    auto i = 0;
    for (; i < prime_size && prime_table[i / 1000][i % 1000] < n; ++i)
    {
    }
    end_index = i;
}

prime::prime(const prime& other): end_index(other.end_index)
{
}

prime::prime(prime&& other): end_index(other.end_index)
{
}

prime::~prime()
{
}

prime& prime::operator=(const prime& other)
{
    end_index = other.end_index;
    return *this;
}

prime& prime::operator=(prime&& other)
{
    end_index = other.end_index;
    return *this;
}

llu prime::operator[](size_type k) const
{
    if (k > prime_size)
    {
        throw primeException();
    }
    return prime_table[k / 1000][k % 1000];
}

void prime::clear() const
{
    prime_table.clear();
    prime_size = 0;
    max_prime = 0;
}

void prime::print(ostream& out) const
{
    for (auto prime : *this)
    {
        out << prime << '\t';
    }
    out << endl;
}

llu prime::maxPrime() const
{
    return max_prime;
}

prime::size_type prime::primeCount() const
{
    return prime_size;
}

prime::difference_type prime::expand(size_type n) const
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

prime::const_iterator prime::begin() const
{
    return const_iterator();
}

prime::const_iterator prime::cbegin() const
{
    return const_iterator();
}

prime::const_iterator prime::end() const
{
    return const_iterator(end_index);
}

prime::const_iterator prime::cend() const
{
    return const_iterator(end_index);
}

prime::const_reverse_iterator prime::rbegin() const
{
    return const_reverse_iterator(end());
}

prime::const_reverse_iterator prime::crbegin() const
{
    return const_reverse_iterator(end());
}

prime::const_reverse_iterator prime::rend() const
{
    return const_reverse_iterator(begin());
}

prime::const_reverse_iterator prime::crend() const
{
    return const_reverse_iterator(begin());
}

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
    Test();
    prime myPrime(20000);
    prime hisPrime(200);
    prime herPrime(200000);
    auto itsPrime = myPrime;
    cout << itsPrime[100] << endl;

    for (auto iter = myPrime.begin(); iter != myPrime.end(); ++iter)
    {
        cout << *iter << "\t";
    }
    cout << endl;

    cout << myPrime.maxPrime() << endl;
    cout << myPrime.primeCount() << endl;
    cout << myPrime.expand(1000000) << endl;

    return 0;
}