// Damon Cawthon
// dcawthon2242@csu.fullerton.edu
// @damoncawthon
// Partners: @seanbnguyen04

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  int expected_num_arguments{2};
  if (arguments.size() < expected_num_arguments) {
    std::cout << "error: you must supply at least one argument\n";
    return 1;
  }

  double sum{0.0};
  bool first{true};

  for (const std::string& argument : arguments) {
    if (first) {
      first = false;
    } else {
      sum = sum + std::stod(argument);
    }
  }
  double average{sum / (static_cast<int>(arguments.size()) - 1)};

  std::cout << "average = " << average << "\n";
  return 0;
}
