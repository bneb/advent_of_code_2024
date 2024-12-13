#include <iostream>
#include <sstream>
#include <vector>

#include "part01.h"
#include "part02.h"

int32_t main(int32_t argc, char **argv)
{
    std::cout << "\\ Day02" << std::endl;

    std::vector<std::vector<int32_t>> number_lists;
    std::string str;

    while (std::getline(std::cin, str)) {
      std::istringstream number_stream(str);
      std::vector<int32_t> numbers;
      int32_t num;
      while (number_stream >> num) {
        numbers.push_back(num);
      }
      number_lists.push_back(numbers);
    }

    int32_t result1 = part01::Part01(number_lists);
    int32_t result2 = part02::Part02(number_lists);

    std::cout << " \\  Part01 --- Result: " << result1 << std::endl;
    std::cout << "  \\ Part02 --- Result: " << result2 << std::endl;

    return 0;
}
