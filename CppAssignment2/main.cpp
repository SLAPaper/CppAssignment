#pragma warning(disable: 4996)

#include <cassert>
#include <ctime>

#include <vector>
#include <list>
#include <iostream>
#include <algorithm>

#include "assignment2.h"

#define ASSERT_SAME(l1, l2) assert_same_container(l1, l2, __FILE__, __LINE__)

using namespace std;

//unit test helpler
template<typename list1_t, typename list2_t> void assert_same_container(list1_t& l1, list2_t& l2, const char file[], int line)
{
    //test if same size
    if (l1.size() != l2.size())
    {
        cout << "Assert failed with size " << l1.size() << " and " << l2.size() << " at " << file << "(" << line << ")" << endl;
        assert(l1.size() == l2.size());
    }

    //test with iterator
    {
        typename list1_t::iterator i = l1.begin();
        typename list2_t::iterator j = l2.begin();
        for (; i != l1.end() && j != l2.end(); ++i, ++j)
        {
            if (*i != *j)
            {
                cout << "th Assertion failed when testing iterator at " << file << "(" << line << ")" << endl;
                assert(*i == *j);
            }
        }
    }

    //test with const_iterator
    {
        typename list1_t::const_iterator i = l1.cbegin();
        typename list2_t::const_iterator j = l2.cbegin();
        for (; i != l1.cend() && j != l2.cend(); ++i, ++j)
        {
            if (*i != *j)
            {
                cout << "Assert failed when testing const_iterator at " << file << "(" << line << ")" << endl;
                assert(*i == *j);
            }
        }
    }

    //test with reverse_iterator
    {
        typename list1_t::reverse_iterator i = l1.rbegin();
        typename list2_t::reverse_iterator j = l2.rbegin();
        for (; i != l1.rend() && j != l2.rend(); ++i, ++j)
        {
            if (*i != *j)
            {
                cout << "Assert failed when testing reverse_iterator at " << file << "(" << line << ")" << endl;
                assert(*i == *j);
            }
        }
    }

    //test with const_inverse_iterator
    {
        typename list1_t::const_reverse_iterator i = l1.crbegin();
        typename list2_t::const_reverse_iterator j = l2.crbegin();
        for (; i != l1.crend() && j != l2.crend(); ++i, ++j)
        {
            if (*i != *j)
            {
                cout << "Assert failed when testing const_reverse_iterator at " << file << "(" << line << ")" << endl;
                assert(*i == *j);
            }
        }
    }
}

int main(int argc, char *argv[])
{
    srand(static_cast<unsigned>(time(nullptr)));
    //test constructor 1 (empty)
    {
        userArray<vector<int>> arr;
        vector<vector<int>> vec;
        ASSERT_SAME(arr, vec);
    }

    //test constructor 2 and destructor
    {
        auto length = rand() + 15;
        auto x = rand();
        auto p_arr2 = new userArray<int>(length, x);
        auto p_vec2 = new vector<int>(length, x);
        ASSERT_SAME(*p_arr2, *p_vec2);
        delete p_arr2;
        delete p_vec2;
    }

    //test constructor 3
    auto length = rand() + 15;
    userArray<int> arr2(length);
    vector<int> vec2(length);
    ASSERT_SAME(arr2, vec2);

    //test operator[]
    for (size_t i = 0; i < arr2.size(); ++i)
    {
        auto x = rand();
        arr2[i] = x;
        vec2[i] = x;
    }
    ASSERT_SAME(arr2, vec2);

    //test constrctor 4
    {
        vector<int> vec3(vec2.begin(), vec2.end());
        userArray<int> arr3(arr2.begin(), arr2.end());
        ASSERT_SAME(arr3, vec3);
    }

    //test copy constructor
    auto arr3 = arr2;
    auto vec3 = vec2;
    ASSERT_SAME(arr3, vec3);

    //test move constructor
    {
        auto arr4 = move(arr3);
        auto vec4 = move(vec3);
        ASSERT_SAME(arr4, vec4);
        ASSERT_SAME(arr3, vec3);
        arr3.clear();
        vec3.clear();
    }

    //test copy operator=
    {
        arr3 = arr2;
        vec3 = vec2;
        ASSERT_SAME(arr3, vec3);
    }

    //test move operator=
    {
        arr3 = userArray<int>({ 1, 2, 3, 4, 5, 5, 5 });
        vec3 = vector<int>({ 1, 2, 3, 4, 5, 5, 5 });
        ASSERT_SAME(arr3, vec3);
    }

    //test initializer_list operator=
    {
        arr3 = { 1, 2, 3, 4, 5, 5 };
        vec3 = { 1, 2, 3, 4, 5, 5 };
        ASSERT_SAME(arr3, vec3);
    }

    //test initializer_list constructor
    {
        userArray<int> arr4 = { 1, 2, 3, 4, 5, 5, 5 };
        vector<int> vec4 = { 1, 2, 3, 4 ,5 ,5 ,5 };
        ASSERT_SAME(arr4, vec4);
    }

    //test assign overload 1
    {
        arr3 = { 1, 2, 3 };
        vec3 = { 2, 2, 1 };
        auto i = rand() % arr3.size();
        auto x = rand();
        arr3.assign(i, x);
        vec3.assign(i, x);
        ASSERT_SAME(arr3, vec3);
    }

    //test assign overload 2
    {
        arr3 = { 1, 2, 2 };
        vec3 = { 2, 1, 3 };
        arr3.assign(arr2.begin(), arr2.end());
        vec3.assign(vec2.begin(), vec2.end());
        ASSERT_SAME(arr3, vec3);
    }

    //test assign overload 3
    {
        arr3 = { 1, 2, 2 };
        vec3 = { 2, 1, 3 };
        arr3.assign({ 1, 2, 3, 4, 5, 5, 5 });
        vec3.assign({ 1, 2, 3, 4, 5, 5, 5 });
        ASSERT_SAME(arr3, vec3);
    }

    //test front and back
    {
        assert(arr3.front() == vec3.front());
        assert(arr3.back() == vec3.back());
    }

    //test count and countIF
    {
        assert(arr3.count(arr3.front()) == count(vec3.begin(), vec3.end(), vec3.front()));
        assert(arr3.countIF([](const int &a) {return true; }) == count_if(vec3.begin(), vec3.end(), [](const int &a) {return true; }));
    }

    //test reserve and capacity
    {
        auto i = rand() + arr3.size();
        arr3.reserve(i);
        vec3.reserve(i);
        ASSERT_SAME(arr3, vec3);
        arr3.shrink_to_fit();
        vec3.shrink_to_fit();
        ASSERT_SAME(arr3, vec3);
    }

    //test clear
    {
        arr3.clear();
        vec3.clear();
        ASSERT_SAME(arr3, vec3);
    }

    //test insert overload 1
    arr3 = arr2;
    vec3 = vec2;
    ASSERT_SAME(arr3, vec3);
    {
        auto i = rand() % arr3.size();
        auto x = rand();
        arr3.insert(arr3.begin() + i, x);
        vec3.insert(vec3.begin() + i, x);
    }
    ASSERT_SAME(arr3, vec3);

    //test insert overload 2
    {
        auto i = rand() % arr3.size();
        arr3.insert(arr3.begin() + i, 16);
        vec3.insert(vec3.begin() + i, 16);
    }
    ASSERT_SAME(arr3, vec3);

    //test insert overload 3
    {
        auto i = rand() % arr3.size();
        auto x = rand();
        auto count = rand();
        arr3.insert(arr3.begin() + i, count, x);
        vec3.insert(vec3.begin() + i, count, x);
    }
    ASSERT_SAME(arr3, vec3);

    //test insert overload 4
    {
        auto i = rand() % arr3.size();
        arr3.insert(arr3.begin() + i, arr2.begin(), arr2.end());
        vec3.insert(vec3.begin() + i, vec2.begin(), vec2.end());
    }
    ASSERT_SAME(arr3, vec3);

    //test insert overload 5
    {
        auto i = rand() % arr3.size();
        arr3.insert(arr3.begin() + i, { 1, 2, 3, 4, 5, 5, 5 });
        vec3.insert(vec3.begin() + i, { 1, 2, 3, 4, 5, 5, 5 });
    }
    ASSERT_SAME(arr3, vec3);

    //test emplace
    {
        auto i = rand() % arr3.size();
        auto x = rand();
        arr3.emplace(arr3.begin() + i, x);
        vec3.emplace(vec3.begin() + i, x);
    }
    ASSERT_SAME(arr3, vec3);

    //test erase overload 1
    {
        auto i = rand() % arr3.size();
        arr3.erase(arr3.begin() + i);
        vec3.erase(vec3.begin() + i);
    }
    ASSERT_SAME(arr3, vec3);

    //test erase overload 2
    {
        auto i = rand() % arr3.size();
        auto j = i + rand() % (arr3.size() - i);
        arr3.erase(arr3.begin() + i, arr3.begin() + j);
        vec3.erase(vec3.begin() + i, vec3.begin() + j);
    }
    ASSERT_SAME(arr3, vec3);

    //test push_back overload 1
    {
        auto i = rand();
        arr3.push_back(i);
        vec3.push_back(i);
    }
    ASSERT_SAME(arr3, vec3);

    //test push_back overload 2
    {
        arr3.push_back(9);
        vec3.push_back(9);
    }
    ASSERT_SAME(arr3, vec3);

    //test emplace_back
    {
        auto x = rand();
        arr3.emplace_back(x);
        vec3.emplace_back(x);
    }
    ASSERT_SAME(arr3, vec3);

    //test pop_back
    {
        arr3.pop_back();
        vec3.pop_back();
    }
    ASSERT_SAME(arr3, vec3);

    //test resize overload 1
    {
        auto i = rand() % arr3.size();
        auto size = arr3.size();
        arr3.resize(size - i);
        vec3.resize(size - i);
        ASSERT_SAME(arr3, vec3);

        arr3.resize(size + i);
        vec3.resize(size + i);
        ASSERT_SAME(arr3, vec3);
    }

    //test resize overload 2
    {
        auto i = rand() % arr3.size();
        auto size = arr3.size();
        auto x = rand();

        arr3.resize(size - i, x);
        vec3.resize(size - i, x);
        ASSERT_SAME(arr3, vec3);

        arr3.resize(size + i, x);
        vec3.resize(size + i, x);
        ASSERT_SAME(arr3, vec3);
    }

    //test swap and compare operator
    {
        auto arr4_1 = userArray<int>({ 1, 2, 3, 4, 5, 5, 5 });
        auto arr4_2 = userArray<int>({ 9, 9, 9, 9, 9, 9, 9, 9, 9 });
        auto vec4_1 = vector<int>({ 1, 2, 3, 4, 5, 5, 5 });
        auto vec4_2 = vector<int>({ 9, 9, 9, 9, 9, 9, 9, 9, 9 });

        ASSERT_SAME(arr4_1, vec4_1);
        ASSERT_SAME(arr4_2, vec4_2);
        assert((arr4_1 == arr4_2) == (vec4_1 == vec4_2));
        assert((arr4_1 != arr4_2) == (vec4_1 != vec4_2));
        assert((arr4_1 < arr4_2) == (vec4_1 < vec4_2));
        assert((arr4_1 <= arr4_2) == (vec4_1 <= vec4_2));
        assert((arr4_1 > arr4_2) == (vec4_1 > vec4_2));
        assert((arr4_1 >= arr4_2) == (vec4_1 >= vec4_2));

        swap(arr4_1, arr4_2);
        swap(vec4_1, vec4_2);

        ASSERT_SAME(arr4_1, vec4_1);
        ASSERT_SAME(arr4_2, vec4_2);
    }

    //test constructor 1 (empty)
    {
        Link<vector<int>> link;
        list<vector<int>> list;
        ASSERT_SAME(link, list);
    }

    //test constructor 2 and destructor
    {
        auto length2 = rand() % 100 + 15;
        auto x = rand();
        auto p_link2 = new Link<int>(length2, x);
        auto p_list2 = new list<int>(length2, x);
        ASSERT_SAME(*p_link2, *p_list2);
        delete p_link2;
        delete p_list2;
    }

    //use constructor 3
    auto length2 = rand() % 100 + 15;
    Link<int> link2(length2);
    list<int> list2(length2);
    ASSERT_SAME(link2, list2);

    //test constrctor 4
    {
        Link<int> link3(link2.begin(), link2.end());
        list<int> list3(list2.begin(), list2.end());
        ASSERT_SAME(list3, link3);
    }

    //test copy constructor
    auto list3 = list2;
    auto link3 = link2;
    ASSERT_SAME(list3, link3);

    //test move constructor
    {
        auto list4 = move(list3);
        auto link4 = move(link3);
        ASSERT_SAME(list4, link4);
        ASSERT_SAME(list3, link3);
        list3.clear();
        link3.clear();
    }

    //test initializer_list constructor
    {
        list<int> list4 = { 1, 2, 3, 4, 5, 5, 5 };
        Link<int> link4 = { 1, 2, 3, 4 ,5 ,5 ,5 };
        ASSERT_SAME(list4, link4);
    }

    //test copy operator=
    {
        list3 = list2;
        link3 = link2;
        ASSERT_SAME(list3, link3);
    }

    //test move operator=
    {
        list3 = list<int>({ 1, 2, 3, 4, 5, 5, 5 });
        link3 = Link<int>({ 1, 2, 3, 4, 5, 5, 5 });
        ASSERT_SAME(list3, link3);
    }

    //test initializer_list operator=
    {
        list3 = { 1, 2, 3, 4, 5, 5 };
        link3 = { 1, 2, 3, 4, 5, 5 };
        ASSERT_SAME(list3, link3);
    }

    //test assign overload 1
    {
        list3 = { 1, 2, 3 };
        link3 = { 2, 2, 1 };
        auto i = rand() % list3.size();
        auto x = rand();
        list3.assign(i, x);
        link3.assign(i, x);
        ASSERT_SAME(list3, link3);
    }

    //test assign overload 2
    {
        list3 = { 1, 2, 2 };
        link3 = { 2, 1, 3 };
        list3.assign(list2.begin(), list2.end());
        link3.assign(link2.begin(), link2.end());
        ASSERT_SAME(list3, link3);
    }

    //test assign overload 3
    {
        list3 = { 1, 2, 2 };
        link3 = { 2, 1, 3 };
        list3.assign({ 1, 2, 3, 4, 5, 5, 5 });
        link3.assign({ 1, 2, 3, 4, 5, 5, 5 });
        ASSERT_SAME(list3, link3);
    }

    //test front and back
    {
        assert(list3.front() == link3.front());
        assert(list3.back() == link3.back());
    }

    //test count and countIF
    {
        assert(link3.count(link3.front()) == count(list3.begin(), list3.end(), list3.front()));
        assert(link3.countIF([](const int &a) {return true; }) == count_if(list3.begin(), list3.end(), [](const int &a) {return true; }));
    }

    //test clear
    {
        list3.clear();
        link3.clear();
        ASSERT_SAME(list3, link3);
    }

    //test insert overload 1
    list3 = list2;
    link3 = link2;
    ASSERT_SAME(list3, link3);
    {
        auto i = rand() % list3.size();
        auto x = rand();
        auto li = list3.begin();
        auto lj = link3.begin();
        advance(li, i);
        advance(lj, i);
        list3.insert(li, x);
        link3.insert(lj, x);
    }
    ASSERT_SAME(list3, link3);

    //test insert overload 2
    {
        auto i = rand() % list3.size();
        auto li = list3.begin();
        auto lj = link3.begin();
        advance(li, i);
        advance(lj, i);
        list3.insert(li, 16);
        link3.insert(lj, 16);
    }
    ASSERT_SAME(list3, link3);

    //test insert overload 3
    {
        auto i = rand() % list3.size();
        auto x = rand();
        auto count = rand();
        auto li = list3.begin();
        auto lj = link3.begin();
        advance(li, i);
        advance(lj, i);
        list3.insert(li, count, x);
        link3.insert(lj, count, x);
    }
    ASSERT_SAME(list3, link3);

    //test insert overload 4
    {
        auto i = rand() % list3.size();
        auto li = list3.begin();
        auto lj = link3.begin();
        advance(li, i);
        advance(lj, i);
        list3.insert(li, list2.begin(), list2.end());
        link3.insert(lj, link2.begin(), link2.end());
    }
    ASSERT_SAME(list3, link3);

    //test insert overload 5
    {
        auto i = rand() % list3.size();
        auto li = list3.begin();
        auto lj = link3.begin();
        advance(li, i);
        advance(lj, i);
        list3.insert(li, { 1, 2, 3, 4, 5, 5, 5 });
        link3.insert(lj, { 1, 2, 3, 4, 5, 5, 5 });
    }
    ASSERT_SAME(list3, link3);

    //test emplace
    {
        auto i = rand() % list3.size();
        auto x = rand();
        auto li = list3.begin();
        auto lj = link3.begin();
        advance(li, i);
        advance(lj, i);
        list3.emplace(li, x);
        link3.emplace(lj, x);
    }
    ASSERT_SAME(list3, link3);

    //test erase overload 1
    {
        auto i = rand() % list3.size();
        auto li = list3.begin();
        auto lj = link3.begin();
        advance(li, i);
        advance(lj, i);
        list3.erase(li);
        link3.erase(lj);
    }
    ASSERT_SAME(list3, link3);

    //test erase overload 2
    {
        auto i = rand() % list3.size();
        auto j = i + rand() % (list3.size() - i);
        auto li = list3.begin();
        auto li2 = list3.begin();
        auto lj = link3.begin();
        auto lj2 = link3.begin();
        advance(li, i);
        advance(lj, i);
        advance(li2, j);
        advance(lj2, j);
        list3.erase(li, li2);
        link3.erase(lj, lj2);
    }
    ASSERT_SAME(list3, link3);

    //test push_back overload 1
    {
        auto i = rand();
        list3.push_back(i);
        link3.push_back(i);
    }
    ASSERT_SAME(list3, link3);

    //test push_back overload 2
    {
        list3.push_back(9);
        link3.push_back(9);
    }
    ASSERT_SAME(list3, link3);

    //test emplace_back
    {
        auto x = rand();
        list3.emplace_back(x);
        link3.emplace_back(x);
    }
    ASSERT_SAME(list3, link3);

    //test pop_back
    {
        list3.pop_back();
        link3.pop_back();
    }
    ASSERT_SAME(list3, link3);

    //test push_front overload 1
    {
        auto i = rand();
        list3.push_front(i);
        link3.push_front(i);
    }
    ASSERT_SAME(list3, link3);

    //test push_front overload 2
    {
        list3.push_front(9);
        link3.push_front(9);
    }
    ASSERT_SAME(list3, link3);

    //test emplace_front
    {
        auto x = rand();
        list3.emplace_front(x);
        link3.emplace_front(x);
    }
    ASSERT_SAME(list3, link3);

    //test pop_front
    {
        list3.pop_front();
        link3.pop_front();
    }
    ASSERT_SAME(list3, link3);

    //test resize overload 1
    {
        auto i = rand() % list3.size();
        auto size = list3.size();
        list3.resize(size - i);
        link3.resize(size - i);
        ASSERT_SAME(list3, link3);

        list3.resize(size + i);
        link3.resize(size + i);
        ASSERT_SAME(list3, link3);
    }

    //test resize overload 2
    {
        auto i = rand() % list3.size();
        auto size = list3.size();
        auto x = rand();

        list3.resize(size - i, x);
        link3.resize(size - i, x);
        ASSERT_SAME(list3, link3);

        list3.resize(size + i, x);
        link3.resize(size + i, x);
        ASSERT_SAME(list3, link3);
    }

    //test swap and compare operator
    //also test merge, splice, remove/remove_if, reverse, unique, sort
    {
        auto list4_1 = list<int>({ 1, 2, 3, 4, 5, 5, 5 });
        auto list4_2 = list<int>({ 9, 9, 9, 9, 9, 9, 9, 9, 9 });
        auto link4_1 = Link<int>({ 1, 2, 3, 4, 5, 5, 5 });
        auto link4_2 = Link<int>({ 9, 9, 9, 9, 9, 9, 9, 9, 9 });

        ASSERT_SAME(list4_1, link4_1);
        ASSERT_SAME(list4_2, link4_2);
        assert((list4_1 == list4_2) == (link4_1 == link4_2));
        assert((list4_1 != list4_2) == (link4_1 != link4_2));
        assert((list4_1 < list4_2) == (link4_1 < link4_2));
        assert((list4_1 <= list4_2) == (link4_1 <= link4_2));
        assert((list4_1 > list4_2) == (link4_1 > link4_2));
        assert((list4_1 >= list4_2) == (link4_1 >= link4_2));

        swap(list4_1, list4_2);
        swap(link4_1, link4_2);

        ASSERT_SAME(list4_1, link4_1);
        ASSERT_SAME(list4_2, link4_2);

        {
            auto list4_3 = list4_2;
            auto link4_3 = link4_2;
            list4_1.merge(list4_3);
            link4_1.merge(link4_3);

            ASSERT_SAME(list4_1, link4_1);
            ASSERT_SAME(list4_2, link4_2);
        }

        link4_1.merge(Link<int>({ 1, 3, 4, 5, 6, 7, 9 }));
        list4_1.merge(list<int>({ 1, 3, 4, 5, 6, 7, 9 }));

        ASSERT_SAME(list4_1, link4_1);
        ASSERT_SAME(list4_2, link4_2);

        {
            auto i = rand() % link4_1.size();
            auto li = link4_1.begin();
            auto lj = list4_1.begin();
            advance(li, i);
            advance(lj, i);
            auto link4_3 = link4_2;
            auto list4_3 = list4_2;
            link4_1.splice(li, link4_3);
            list4_1.splice(lj, list4_3);

            ASSERT_SAME(list4_1, link4_1);
            ASSERT_SAME(list4_2, link4_2);
            ASSERT_SAME(list4_3, link4_3);

            link4_1.splice(li, Link<int>({ 1, 3, 4, 5, 5 }));
            list4_1.splice(lj, list<int>({ 1, 3, 4, 5, 5 }));

            ASSERT_SAME(list4_1, link4_1);
            ASSERT_SAME(list4_2, link4_2);

            {
                link4_3 = link4_1;
                list4_3 = list4_1;
                auto j = rand() % link4_3.size();
                auto li2 = link4_3.begin();
                auto lj2 = list4_3.begin();
                advance(li2, j);
                advance(lj2, j);
                link4_1.splice(li, link4_3, li2);
                list4_1.splice(lj, list4_3, lj2);

                ASSERT_SAME(list4_1, link4_1);
                ASSERT_SAME(list4_2, link4_2);
                ASSERT_SAME(list4_3, link4_3);
            }
            {
                link4_3 = link4_1;
                list4_3 = list4_1;
                auto j = rand() % link4_3.size();
                auto li2 = link4_3.begin();
                auto lj2 = list4_3.begin();
                advance(li2, j);
                advance(lj2, j);
                link4_1.splice(li, move(link4_3), li2);
                list4_1.splice(lj, move(list4_3), lj2);

                ASSERT_SAME(list4_1, link4_1);
                ASSERT_SAME(list4_2, link4_2);
                ASSERT_SAME(list4_3, link4_3);
            }
            {
                link4_3 = link4_1;
                list4_3 = list4_1;
                auto j = rand() % (link4_3.size() / 2);
                auto nj = link4_3.size() - j;
                auto li2 = link4_3.begin();
                auto li3 = link4_3.begin();
                auto lj2 = list4_3.begin();
                auto lj3 = list4_3.begin();
                advance(li2, j);
                advance(lj2, j);
                advance(li3, nj);
                advance(lj3, nj);
                link4_1.splice(li, link4_3, li2, li3);
                list4_1.splice(lj, list4_3, lj2, lj3);

                ASSERT_SAME(list4_1, link4_1);
                ASSERT_SAME(list4_2, link4_2);
                ASSERT_SAME(list4_3, link4_3);
            }
            {
                link4_3 = link4_1;
                list4_3 = list4_1;
                auto j = rand() % (link4_3.size() / 2);
                auto nj = link4_3.size() - j;
                auto li2 = link4_3.begin();
                auto li3 = link4_3.begin();
                auto lj2 = list4_3.begin();
                auto lj3 = list4_3.begin();
                advance(li2, j);
                advance(lj2, j);
                advance(li3, nj);
                advance(lj3, nj);
                list4_1.splice(lj, move(list4_3), lj2, lj3);
                link4_1.splice(li, move(link4_3), li2, li3);

                ASSERT_SAME(list4_1, link4_1);
                ASSERT_SAME(list4_2, link4_2);
                ASSERT_SAME(list4_3, link4_3);
            }
            {
                auto link4_4 = link4_1;
                auto list4_4 = link4_1;
                link4_4.remove(1);
                list4_4.remove(1);
                ASSERT_SAME(list4_4, link4_4);
            }
            {
                auto link4_4 = link4_1;
                auto list4_4 = link4_1;
                link4_4.remove_if([](const int& a) {return a % 2 == 0; });
                list4_4.remove_if([](const int& a) {return a % 2 == 0; });
                ASSERT_SAME(list4_4, link4_4);
            }

            link4_1.reverse();
            list4_1.reverse();
            ASSERT_SAME(list4_1, link4_1);

            {
                auto link4_4 = link4_1;
                auto list4_4 = link4_1;
                link4_4.unique();
                list4_4.unique();
                ASSERT_SAME(list4_4, link4_4);
            }
            {
                auto link4_4 = link4_1;
                auto list4_4 = link4_1;
                link4_4.unique([](const int& a, const int& b) {return (a + b) % 2 == 0; });
                list4_4.unique([](const int& a, const int& b) {return (a + b) % 2 == 0; });
                ASSERT_SAME(list4_4, link4_4);
            }

            link4_1.sort();
            list4_1.sort();
            ASSERT_SAME(list4_1, link4_1);

            link4_1.sort([](const int& a, const int& b) {return a > b; });
            list4_1.sort([](const int& a, const int& b) {return a > b; });
            ASSERT_SAME(list4_1, link4_1);
        }
    }

    system("PAUSE");

    return 0;
}
