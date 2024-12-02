#include <iostream>
#include <vector>

#include "part01.h"
#include "part02.h"

int32_t main(int32_t argc, char **argv)
{
    std::cout << "\\ Day01" << std::endl;

    std::vector<int32_t> v1;
    std::vector<int32_t> v2;
    int32_t i1, i2;

    while (std::cin >> i1 >> i2) {
      v1.push_back(i1);
      v2.push_back(i2);
    }

    int32_t result1 = part01::Part01(v1, v2);
    int32_t result2 = part02::Part02(v1, v2);

    std::cout << " \\  Part01 --- Result: " << result1 << std::endl;
    std::cout << "  \\ Part02 --- Result: " << result2 << std::endl;

    return 0;
}
