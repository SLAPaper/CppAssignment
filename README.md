# CppAssignment

some C++ lesson assignments

Actually, the assignment #2 is my favourite. I spent the most time on it and gained much about inheritance, iterator, allocator, overloading, template, and so on.

The assignment #3 is a little bit too easy and fuzzy. The teacher provided a very ambiguous assignment requirements, and I just do it in the way I like.

The assignment #4 is the most boring one. In fact, the teacher provided a bunch of topics to choose from, and, here comes the ridiculous point, it's required that the total lines of the homework shall exceed 800 lines. I wonder why it isn't "shorter is better" or "faster is better" while there is a given topic.

## CppAssignment2

re-implementation of `std::vector` and `std::list`

`std::vector<bool>` is not finished and disabled by `#if False`

## CppAssignment3

a container-like prime table.

It is required that all the instances of prime table class should share the same common "actual" prime table. Each instance is just like a generator or somehow `range` in Python, which will only iterate on given number of prime numbers.

The common prime table will auto expand when newly construct instance cover a never-calculated range and won't shrink, except for manually calling the `clear()` method.

## CppAssignment4

a small program that uses Dijkstra's Algorithm to find the shortest path between two stations in the metro system of Beijing.

Here there are a critical design failure due to the topic requirements, a huge design failure in order to match the topic requirements, an enourmous feature lack caused by my procrastination, and a small "oops" error of using pointer other than id or iterator as key of map.