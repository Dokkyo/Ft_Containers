#include "containers.hpp"

// int main()
// {
  // constructors used in the same order as described above:
  // std::vector<int> first;                                // empty vector of ints
  // std::vector<int> second (4,100);                       // four ints with value 100
  // std::vector<int> third (second.begin(),second.end());  // iterating through second
  // std::vector<int> fourth (third);                       // a copy of third

  // constructors used in the same order as described above:
  // ft::vector<int> un;                                // empty vector of ints
  // ft::vector<int> second(4,100);                       // four ints with value 100
  // ft::vector<int> third (second.begin(),second.end());  // iterating through second
  // ft::vector<int> fourth (second);                       // a copy of third
  // std::cout << fourth.size() << "\n";
  //   return 0;
// }

int main ()
{
    std::cout << "Message of the day" << "\n" \
    << "                           " << "\n" \
    << "      ____                 " << "\n" \
    << "     |  o_|                " << "\n" \
    << "    _| |__                 " << "\n" \
    << "   /      \\               " << "\n" \
    << "  / (.)(.) \\              " << "\n" \
    << std::endl;

    std::cout << "FT IS_INTEGRAL TESTS" << std::endl;
    std::cout << std::boolalpha << std::endl;

    std::cout << "std::is_integral<int>::value: " << ft::is_integral<bool>::value << std::endl;
    std::cout << "std::is_integral<char>::value: " << ft::is_integral<char>::value << std::endl;
    std::cout << "std::is_integral<wchar_t>::value: " << ft::is_integral<wchar_t>::value << std::endl;
    std::cout << "std::is_integral<signed char>::value: " << ft::is_integral<signed char>::value << std::endl;
    std::cout << "std::is_integral<short int>::value: " << ft::is_integral<short int>::value << std::endl;
    std::cout << "std::is_integral<int>::value: " << ft::is_integral<int>::value << std::endl;
    std::cout << "std::is_integral<long int>::value: " << ft::is_integral<long int>::value << std::endl;
    std::cout << "std::is_integral<long long int>::value: " << ft::is_integral<long long int>::value << std::endl;
    std::cout << "std::is_integral<unsigned char>::value: " << ft::is_integral<unsigned char>::value << std::endl;
    std::cout << "std::is_integral<unsigned short int>::value: " << ft::is_integral<unsigned short int>::value << std::endl;
    std::cout << "std::is_integral<unsigned int>::value: " << ft::is_integral<unsigned int>::value << std::endl;
    std::cout << "std::is_integral<unsigned long int>::value: " << ft::is_integral<unsigned long int>::value << std::endl;
    std::cout << "std::is_integral<unsigned long long int>::value: " << ft::is_integral<unsigned long long int>::value << std::endl;
    std::cout << "std::is_integral<double>::value: " << ft::is_integral<double>::value << std::endl;
    std::cout << "std::is_integral<float>::value: " << ft::is_integral<float>::value << std::endl;
    std::cout << "std::true_type::value: " << ft::true_type::value << std::endl;
    std::cout << "std::false_type::value: " << ft::false_type::value << std::endl;
    std::cout << std::endl;
    std::cout << "std::integral_constant<bool, true>::value: " << std::integral_constant<bool, true>::value << std::endl;
    std::cout << "std::integral_constant<bool, false>::value: " << std::integral_constant<bool, false>::value << std::endl;
    std::cout << std::endl;

    std::cout << "FT PAIR TESTS" << std::endl;
    ft::pair<int,char> foo (10,'z');
    ft::pair<int,char> bar (90,'a');

    if (foo==bar) std::cout << "foo and bar are equal\n";
    if (foo!=bar) std::cout << "foo and bar are not equal\n";
    if (foo<bar) std::cout << "foo is less than bar\n";
    if (foo>bar) std::cout << "foo is greater than bar\n";
    if (foo<=bar) std::cout << "foo is less than or equal to bar\n";
    if (foo>=bar) std::cout << "foo is greater than or equal to bar\n";
    std::cout << std::endl;
    
    std::cout << "STD PAIR TESTS" << std::endl;
    foo = ft::make_pair (10,20);
    bar = ft::make_pair (10.5,'A'); // ok: implicit conversion from pair<double,char>

    std::cout << "foo: " << foo.first << ", " << foo.second << '\n';
    std::cout << "bar: " << bar.first << ", " << bar.second << '\n';
    std::cout << std::endl;

    // ft::vector<int> foo (3,0);
    // ft::vector<int> bar (5,0); //leak

    // std::cout << "addr foo " << &foo << std::endl;
    // std::cout << "addr bar " << &bar << std::endl;

    // bar = foo;
    // std::cout << "addr bar " << &bar << std::endl;
    // foo = ft::vector<int>(); //invalid free
    // std::cout << "addr foo " << &foo << std::endl;

    // std::cout << "Size of foo: " << int(foo.size()) << '\n';
    // std::cout << "Size of bar: " << int(bar.size()) << '\n';
  return 0;

}