#pragma once

// ReSharper disable once CppUnusedIncludeDirective
#include <iterator>

//template class referring to VC++ 2015 version STL to statically check if a type is iterable
// TEMPLATE CLASS Is_iterator
template<class _Ty, class = void> struct Is_iterator : std::false_type
{	// default definition
};

template<class _Ty> struct Is_iterator<_Ty, std::void_t<typename std::iterator_traits<_Ty>::iterator_category>> : std::true_type
{	// defined if iterator_category is provided by iterator_traits<_Ty>
};

//alias to simplify check
template<class _Ty, typename _return_Ty> using Is_iterator_t = std::enable_if_t<Is_iterator<_Ty>::value, _return_Ty>;

//alias for rebind Allocator
template<typename Alloc_t, typename Rebind_t> using rebind_alloc = typename std::allocator_traits<Alloc_t>::template rebind_alloc<Rebind_t>;
