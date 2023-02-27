# ifndef CONTAINERS_HPP
# define CONTAINERS_HPP

#include <memory>
#include <iostream>
#include <cstddef>

#include "vector.hpp"
#include "stack.hpp"
#include "map.hpp"


// template <class Iterator> class iterator_traits
// {
//     typedef typename Iterator::difference_type   difference_type;
//     typedef typename Iterator::value_type        value_type;
//     typedef typename Iterator::pointer           pointer;
//     typedef typename Iterator::reference         reference;
//     typedef typename Iterator::iterator_category iterator_category;
// };

// template <class T> class iterator_traits<T*>
// {
//     typedef  ptrdiff_t;
//     typedef  T;
//     typedef  T*;
//     typedef  T&;
//     typedef  iterator_category;
// };

// template <class T> class iterator_traits<const T*>
// {
//     typedef  ptrdiff_t;
//     typedef  T;
//     typedef  T* const;
//     typedef  T& const;
//     typedef  iterator_category;
// };

namespace ft
{
    template <class T, T v>
    struct integral_constant {
    static T const value = v;
    typedef T value_type;
    typedef integral_constant<T,v> type;
    operator T() const { return v; }
    };

    typedef integral_constant<bool,true> true_type;
    typedef integral_constant<bool,false> false_type;

    template <class T>
    struct is_integral : public false_type{};

    template <>
    struct is_integral<bool> : public true_type{};
    template <>
    struct is_integral<const bool> : public true_type{};
    template <>
    struct is_integral<volatile bool> : public true_type{};

    template <>
    struct is_integral<char> : public true_type{};
    template <>
    struct is_integral<const char> : public true_type{};
    template <>
    struct is_integral<volatile char> : public true_type{};

    // template <>
    // struct is_integral<char16_t> : public true_type{};

    // template <>
    // struct is_integral<char32_t> : public true_type{};

    template <>
    struct is_integral<wchar_t> : public true_type{};
    template <>
    struct is_integral<const wchar_t> : public true_type{};
    template <>
    struct is_integral<volatile wchar_t> : public true_type{};

    template <>
    struct is_integral<signed char> : public true_type{};
    template <>
    struct is_integral<const signed char> : public true_type{};
    template <>
    struct is_integral<volatile signed char> : public true_type{};

    template <>
    struct is_integral<short int> : public true_type{};
    template <>
    struct is_integral<const short int> : public true_type{};
    template <>
    struct is_integral<volatile short int> : public true_type{};

    template <>
    struct is_integral<int> : public true_type{};
    template <>
    struct is_integral<const int> : public true_type{};
    template <>
    struct is_integral<volatile int> : public true_type{};

    template <>
    struct is_integral<long int> : public true_type{};
    template <>
    struct is_integral<const long int> : public true_type{};
    template <>
    struct is_integral<volatile long int> : public true_type{};

    template <>
    struct is_integral<long long int> : public true_type{};
    template <>
    struct is_integral<const long long int> : public true_type{};
    template <>
    struct is_integral<volatile long long int> : public true_type{};

    template <>
    struct is_integral<unsigned char> : public true_type{};
    template <>
    struct is_integral<const unsigned char> : public true_type{};
    template <>
    struct is_integral<volatile unsigned char> : public true_type{};

    template <>
    struct is_integral<unsigned short int> : public true_type{};
    template <>
    struct is_integral<const unsigned short int> : public true_type{};
    template <>
    struct is_integral<volatile unsigned short int> : public true_type{};

    template <>
    struct is_integral<unsigned int> : public true_type{};
    template <>
    struct is_integral<const unsigned int> : public true_type{};
    template <>
    struct is_integral<volatile unsigned int> : public true_type{};

    template <>
    struct is_integral<unsigned long int> : public true_type{};
    template <>
    struct is_integral<const unsigned long int> : public true_type{};
    template <>
    struct is_integral<volatile unsigned long int> : public true_type{};
    template <>
    struct is_integral<unsigned long long int> : public true_type{};
    template <>
    struct is_integral<const unsigned long long int> : public true_type{};
    template <>
    struct is_integral<volatile unsigned long long int> : public true_type{};

    template <class InputIterator1, class InputIterator2>
    bool equal (InputIterator1 first1, InputIterator1 last1, InputIterator2 first2)
    {
        while (first1!=last1) 
        {
            if (!(*first1 == *first2))
                return false;
            ++first1; ++first2;
        }
        return true;
    };

    template <class InputIterator1, class InputIterator2, class BinaryPredicate> 
    bool equal (InputIterator1 first1, InputIterator1 last1, InputIterator2 first2, BinaryPredicate pred)
    {
        while (first1!=last1)
        {
            if (!pred(*first1,*first2))
                return false;
            ++first1; ++first2;
        }
        return true;
    };

    template <class T1, class T2>
    struct pair
    {
        typedef T1  first_type;
        typedef T2  second_type;

        first_type      first;
        second_type     second;

        pair() : first(0), second(0) {};
        template<class U, class V>
        pair (const pair<U,V>& pr) : first(pr.first), second(pr.second) {};
        pair (const first_type& a, const second_type& b) : first(a), second(b) {};

        pair& operator= (const pair& pr)
        {
            first = pr.first;
            second = pr.second;
            return *this;
        };
    };
    template< class T1, class T2, class U1, class U2 >
    bool operator==( const ft::pair<T1, T2>& lhs, const ft::pair<U1, U2>& rhs )
    {
        return (lhs.first == rhs.first && lhs.second == rhs.second);
    };
    template< class T1, class T2, class U1, class U2 >
    bool operator!=( const ft::pair<T1, T2>& lhs, const ft::pair<U1, U2>& rhs )
    {
        return (!(lhs == rhs));
    };
    template< class T1, class T2, class U1, class U2 >
    bool operator<( const ft::pair<T1, T2>& lhs, const ft::pair<U1, U2>& rhs )
    {
        if (lhs.first < rhs.first)
            return (true);
        if (rhs.first < lhs.second)
            return (false);
        if (lhs.second < rhs.second)
            return (true);
        if (lhs.second < rhs.second)
            return (false);
        return false;
    };
    template< class T1, class T2, class U1, class U2 >
    bool operator<=( const ft::pair<T1, T2>& lhs, const ft::pair<U1, U2>& rhs )
    {
        return (!(rhs < lhs));
    };
    template< class T1, class T2, class U1, class U2 >
    bool operator>( const ft::pair<T1, T2>& lhs, const ft::pair<U1, U2>& rhs )
    {
        return (rhs < lhs);
    };
    template< class T1, class T2, class U1, class U2 >
    bool operator>=( const ft::pair<T1, T2>& lhs, const ft::pair<U1, U2>& rhs )
    {
        return (!(lhs < rhs));
    };
    template <class T1, class T2>
    pair<T1,T2> make_pair (T1 x, T2 y)
    {
        return (pair<T1,T2>(x,y));
    };

    template<bool B, class T = void >
    struct enable_if {};
    template<class T>
    struct enable_if<true, T> { typedef T type; };
}

#endif