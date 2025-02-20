#include <iostream>
#include <vector>

int main() {
  std::vector<bool> vec;
  vec.push_back(true);
  vec.at(0) = false; // Correct way to modify

  std::cout << vec[0] << std::endl; // Accessing using [] still works, though not recommended for modification

  return 0;
}
