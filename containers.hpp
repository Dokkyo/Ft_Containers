# ifndef CONTAINERS_HPP
# define CONTAINERS_HPP

#include <memory>
#include <iostream>
#include <cstddef>

#include "vector.hpp"
#include "stack.hpp"
#include "map.hpp"

template <class Iterator> class iterator_traits
{
    typedef typename Iterator::difference_type   difference_type;
    typedef typename Iterator::value_type        value_type;
    typedef typename Iterator::pointer           pointer;
    typedef typename Iterator::reference         reference;
    typedef typename Iterator::iterator_category iterator_category;
};

template <class T> class iterator_traits<T*>
{
    typedef  ptrdiff_t;
    typedef  T;
    typedef  T*;
    typedef  T&;
    typedef  iterator_category;
};

template <class T> class iterator_traits<const T*>
{
    typedef  ptrdiff_t;
    typedef  T;
    typedef  T* const;
    typedef  T& const;
    typedef  iterator_category;
};

template <class T>
struct is_integral
{

};

namespace ft
{

}

#endif