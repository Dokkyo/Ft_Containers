#include "containers.hpp"

namespace ft
{
    template < class T, class Alloc = std::allocator<T> >
    class vector
    {
        typedef T                   value_type;
        typedef Alloc               allocator_type;
        typedef value_type&         reference;
        typedef value_type const &  const_reference;
        typedef value_type*         pointer;
        typedef value_type const *  const_pointer;
        // typedef ?        iterator;
        // typedef ?        const_iterator;
        // typedef ?        reverse_iterator;
        // typedef ?        const_reverse_iterator;
        typedef ptrdiff_t           difference_type;
        typedef size_t              size_type;

        public:

            // CONSTRUCTORS
            explicit vector(const allocator_type& alloc = allocator_type()) : _copy(alloc), _vec(get_allocator().allocate(0)), _size(0) {
                std::cout << "vector first constructor called\n";
            };
            explicit vector (size_type n, const value_type& val = value_type(), const allocator_type& alloc = allocator_type()) : _copy(alloc), _vec(get_allocator().allocate(n)), _size(n){
                std::cout << "vector second constructor called\n";
                for (_i = 0; _i<n; _i++) get_allocator().construct(&_vec[_i],val);
                for (_i = 0; _i<n; _i++) std::cout << _i << "=" << _vec[_i] << "\n";
            };
            // template <class InputIterator>
            // vector (InputIterator first, InputIterator last, const allocator_type& alloc = allocator_type()) {
            // };
            vector (const vector& x){
                *this = x;
                return ;
            };
            ~vector() {
                std::cout << "vector Destructor called\n";
                if (_size > 0)
                    for (_i = 0; _i<_size; _i++) get_allocator().destroy(&_vec[_i]);
                get_allocator().deallocate(_vec, _size);
                return;
            };

            // // ITERATORS
            // iterator begin() {};
            // const_iterator begin() const {};
            // iterator end() {};
            // const_iterator end() const {};
            // reverse_iterator rbegin() {};
            // const_reverse_iterator rbegin() const {};
            // reverse_iterator rend() {};
            // const_reverse_iterator rend() const {};
            // const_iterator cbegin() const noexcept {};
            // const_iterator cend() const noexcept {};
            // const_reverse_iterator crbegin() const noexcept {};
            // const_reverse_iterator crend() const noexcept {};

            // CAPACITY
            size_type size() const {
                return _size;
            };
            // size_type max_size() const {};
            // void resize (size_type n, value_type val = value_type()) {};
            // size_type capacity() const {};
            // bool empty() const {};
            // void reserve (size_type n) {};
            // void shrink_to_fit() {};

            // // ELEMENT ACCESS
            // reference operator[] (size_type n) {};
            // const_reference operator[] (size_type n) const {};
            // reference at (size_type n) {};
            // const_reference at (size_type n) const {};
            // reference front() {};
            // const_reference front() const {};
            // reference back() {};
            // const_reference back() const {};
            // value_type* data() noexcept {};
            // const value_type* data() const noexcept {};

            // // MODIFIERS
            // template <class InputIterator>  void assign (InputIterator first, InputIterator last) {};
            // void assign (size_type n, const value_type& val) {};
            // void push_back (const value_type& val) {};
            // void pop_back() {};
            // iterator insert (iterator position, const value_type& val) {};
            // void insert (iterator position, size_type n, const value_type& val);
            // template <class InputIterator> void insert (iterator position, InputIterator first, InputIterator last) {};
            // iterator erase (iterator position);iterator erase (iterator first, iterator last) {};
            // void swap (vector& x) {};
            // void clear() {};
            // template <class... Args> iterator emplace (const_iterator position, Args&&... args) {};
            // template <class... Args>  void emplace_back (Args&&... args) {};

            // ALLOCATOR
            allocator_type get_allocator() const {
                return _copy;
            };

        private:
            allocator_type  _copy;
            T*              _vec;
            size_t          _size;
            size_t          _capacity;
            size_t          _i;
    };
    // template <class T, class Alloc>  bool operator== (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs) {};
    // template <class T, class Alloc>  bool operator!= (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs) {};
    // template <class T, class Alloc>  bool operator<  (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs) {};
    // template <class T, class Alloc>  bool operator<= (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs) {};
    // template <class T, class Alloc>  bool operator>  (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs) {};
    // template <class T, class Alloc>  bool operator>= (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs) {};
    // template <class T, class Alloc>  void swap (vector<T,Alloc>& x, vector<T,Alloc>& y) {};
}
