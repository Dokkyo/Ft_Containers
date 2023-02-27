#include <vector>
#include <type_traits>
#include "containers.hpp"

// equal algorithm example
#include <iostream>     // std::cout
#include <algorithm>    // std::equal
#include <vector>       // std::vector

bool mypredicate (int i, int j) {
  return (i==j);
}

int main () {

    std::cout << "STD IS_INTEGRAL TESTS" << std::endl;
    std::cout << std::boolalpha << std::endl;

    std::cout << "std::is_integral<int>::value: " << std::is_integral<bool>::value << std::endl;
    std::cout << "std::is_integral<char>::value: " << std::is_integral<char>::value << std::endl;
    std::cout << "std::is_integral<wchar_t>::value: " << std::is_integral<wchar_t>::value << std::endl;
    std::cout << "std::is_integral<signed char>::value: " << std::is_integral<signed char>::value << std::endl;
    std::cout << "std::is_integral<short int>::value: " << std::is_integral<short int>::value << std::endl;
    std::cout << "std::is_integral<int>::value: " << std::is_integral<int>::value << std::endl;
    std::cout << "std::is_integral<long int>::value: " << std::is_integral<long int>::value << std::endl;
    std::cout << "std::is_integral<long long int>::value: " << std::is_integral<long long int>::value << std::endl;
    std::cout << "std::is_integral<unsigned char>::value: " << std::is_integral<unsigned char>::value << std::endl;
    std::cout << "std::is_integral<unsigned short int>::value: " << std::is_integral<unsigned short int>::value << std::endl;
    std::cout << "std::is_integral<unsigned int>::value: " << std::is_integral<unsigned int>::value << std::endl;
    std::cout << "std::is_integral<unsigned long int>::value: " << std::is_integral<unsigned long int>::value << std::endl;
    std::cout << "std::is_integral<unsigned long long int>::value: " << std::is_integral<unsigned long long int>::value << std::endl;
    std::cout << "std::is_integral<double>::value: " << std::is_integral<double>::value << std::endl;
    std::cout << "std::is_integral<float>::value: " << std::is_integral<float>::value << std::endl;
    std::cout << "std::true_type::value: " << std::true_type::value << std::endl;
    std::cout << "std::false_type::value: " << std::false_type::value << std::endl;
    std::cout << std::endl;
    std::cout << "std::integral_constant<bool, true>::value: " << std::integral_constant<bool, true>::value << std::endl;
    std::cout << "std::integral_constant<bool, false>::value: " << std::integral_constant<bool, false>::value << std::endl;
    std::cout << std::endl;

    std::cout << "STD PAIR TESTS" << std::endl;
    std::pair<int,char> foo (10,'z');
    std::pair<int,char> bar (90,'a');

    if (foo==bar) std::cout << "foo and bar are equal\n";
    if (foo!=bar) std::cout << "foo and bar are not equal\n";
    if (foo< bar) std::cout << "foo is less than bar\n";
    if (foo> bar) std::cout << "foo is greater than bar\n";
    if (foo<=bar) std::cout << "foo is less than or equal to bar\n";
    if (foo>=bar) std::cout << "foo is greater than or equal to bar\n";


    std::cout << "STD PAIR TESTS" << std::endl;
    foo = std::make_pair (10,20);
    bar = std::make_pair (10.5,'A'); // ok: implicit conversion from pair<double,char>

    std::cout << "foo: " << foo.first << ", " << foo.second << '\n';
    std::cout << "bar: " << bar.first << ", " << bar.second << '\n';
    std::cout << std::endl;

    // std::cout << "STD EQUAL TESTS" << std::endl;
    // int myints[] = {20,40,60,80,100};               //   myints: 20 40 60 80 100
    // std::vector<int>myvector (myints,myints+5);     // myvector: 20 40 60 80 100

    // // using default comparison:
    // if ( std::equal (myvector.begin(), myvector.end(), myints) )
    //   std::cout << "The contents of both sequences are equal.\n";
    // else
    //   std::cout << "The contents of both sequences differ.\n";

    // myvector[3]=81;                                 // myvector: 20 40 60 81 100

    // // using predicate comparison:
    // if ( std::equal (myvector.begin(), myvector.end(), myints, mypredicate) )
    //   std::cout << "The contents of both sequences are equal.\n";
    // else
    //   std::cout << "The contents of both sequences differ.\n";

  return 0;
}