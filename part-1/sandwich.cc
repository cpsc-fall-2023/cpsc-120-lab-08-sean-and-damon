// Damon Cawthon
// dcawthon2242@csu.fullerton.edu
// @damoncawthon
// Partner: @seanbnguyen04

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  int expected_num_arguments{4};
  if (arguments.size() != expected_num_arguments) {
    std::cout << "error: you must supply three arguments\n";
    return 1;
  }

  std::string protein{arguments.at(1)};
  std::string bread{arguments.at(2)};
  std::string condiment{arguments.at(3)};

  std::cout << "Your order:\nA " << protein << " sandwich on " << bread
            << " with " << condiment << ".\n";

  return 0;
}
