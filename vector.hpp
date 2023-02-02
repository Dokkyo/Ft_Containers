#include "containers.hpp"

namespace ft
{
    template < class T, class Alloc = std::allocator<T> >
    class vector
    {
        typedef T value_type;
        typedef Alloc allocator_type;

        public:

            // Constructors
            explicit vector(const allocator_type& alloc = allocator_type()) : _tab(new T) {
                std::cout << "vector default constructor called\n";
                _copy = alloc;
            };

            // Allocator
            allocator_type get_allocator() const {
                return _copy;
            };

        private:
            allocator_type   _copy;
            T               *_tab;
    };
}