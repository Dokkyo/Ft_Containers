# ifndef CONTAINERS_HPP
# define CONTAINERS_HPP

#include <memory>
#include <iostream>
#include <cstddef>

#include "vector.hpp"
#include "stack.hpp"
#include "map.hpp"

template <class Iterator>
class iterator_traits : public std::iterator
{
    typedef Iterator::difference_type   difference_type;
    typedef Iterator::value_type        value_type;
    typedef Iterator::pointer           pointer;
    typedef Iterator::reference         reference;
    typedef Iterator::iterator_category iterator_category;
};

template <class T>
class iterator_traits<T*> : public std::iterator
{
    typedef std::iterator::difference_type   ptrdiff_t;
    typedef std::iterator::value_type        T;
    typedef std::iterator::pointer           T*;
    typedef std::iterator::reference         T&;
    typedef std::iterator::iterator_category std::random_access_iterator_tag;
};

template <class T>
class iterator_traits<const T*> : public std::iterator
{
    typedef std::iterator::difference_type   ptrdiff_t;
    typedef std::iterator::value_type        T;
    typedef std::iterator::pointer           T* const;
    typedef std::iterator::reference         T& const;
    typedef std::iterator::iterator_category std::random_access_iterator_tag;
};

template <class T>
struct is_integral
{

};

namespace ft
{
    
}

#endif