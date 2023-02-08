#include "containers.hpp"
#include <vector>

int main()
{
  // constructors used in the same order as described above:
//   std::vector<int> first;                                // empty vector of ints
//   std::vector<int> second (4,100);                       // four ints with value 100
//   std::vector<int> third (second.begin(),second.end());  // iterating through second
//   std::vector<int> fourth (third);                       // a copy of third

  // constructors used in the same order as described above:
  ft::vector<int> un;                                // empty vector of ints
  ft::vector<int> second(4,100);                       // four ints with value 100
  ft::vector<int> third (second.begin(),second.end());  // iterating through second
//   ft::vector<int> fourth (third);                       // a copy of third


    return 0;
}
