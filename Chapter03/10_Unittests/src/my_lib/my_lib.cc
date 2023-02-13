#include <iostream>
#include <cstdint>

#include <nlohmann/json.hpp>

#include "my_lib.h"

void print_hello_world()
{
    std::cout << "Hello World" << std::endl;
    std::cout << NLOHMANN_JSON_VERSION_MAJOR << std::endl;

    return;
}

std::uint32_t factorial(std::uint32_t number)
{
    return number <= 1 ? 1 : factorial(number - 1) * number;
}
