#include "MyVector.h"
#include <iostream>

int main() {
  MyVector<std::string> vec = MyVector<std::string>();
  vec.push_back("hi");
  vec.push_back("no");
  std::cout << vec[0] << ", " << vec[1] << "\n";
  vec.pop_back();
  std::cout << vec.size() << "\n";
  vec.push_back("yes");
  vec.clear();
  std::cout << vec.size() << "\n";
  std::cout << vec.capacity() << "\n";
}