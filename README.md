# CppAssignment

some C++ lesson assignments

Actually, the assignment #2 is my favourite. I spent the most time on it and gained much about inheritance, iterator, allocator, overloading, template, and so on.

## CppAssignment2

re-implementation of `std::vector` and `std::list`

`std::vector<bool>` is not finished and disabled by `#if False`

## CppAssignment3

a container-like prime table.

It is required that all the instances of prime table class should share the same common "actual" prime table. Each instance is just like a generator or somehow `range` in Python, which will only iterate on given number of prime numbers.

The common prime table will auto expand when newly construct instance cover a never-calculated range and won't shrink, except for manually calling the `clear()` method.

## CppAssignment4

a small program that uses Dijkstra's Algorithm to find the shortest path between two stations in the metro system of Beijing.