#include "containers.hpp"

namespace ft
{
    template < class T, class Alloc = std::allocator<T> >
    class vector
    {
        typedef T                   value_type;
        typedef Alloc               allocator_type;
        typedef size_t              size_type;
        // typedef value_type*         pointer;
        // typedef value_type*         const_pointer;
        // typedef value_type&         reference;
        // typedef value_type&         const_reference;

        public:

            // Constructors
            explicit vector(const allocator_type& alloc = allocator_type()) : _tab(get_allocator().allocate(0)) {
                std::cout << "vector first constructor called\n";
                // _tab = get_allocator().allocate(0);
                _copy = alloc;
            };
            explicit vector (size_type n, const value_type& val = value_type(), const allocator_type& alloc = allocator_type()) : _tab(get_allocator().allocate(n)){
                size_t i = -1;
                std::cout << "vector second constructor called\n";
                _copy = alloc;
                // _tab = get_allocator().allocate(n);
                while (++i < n)
                    _tab[i] = val;
                    // get_allocator().construct(_tab,val);
                i = -1;
                while (++i < n)
                    std::cout << i << "=" << _tab[i] << "\n";
            };
            // template <class InputIterator>
            // vector (InputIterator first, InputIterator last, const allocator_type& alloc = allocator_type()) {

            // };
            // vector (const vector& x){

            // };

            // Allocator
            allocator_type get_allocator() const {
                return _copy;
            };

        private:
            allocator_type  _copy;
            T*              _tab;
    };
}