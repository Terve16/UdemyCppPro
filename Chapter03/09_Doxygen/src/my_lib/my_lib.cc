#include <iostream>

#include <nlohmann/json.hpp>

#include "my_lib.h"

void print_hello_world()
{
    std::cout << "Hello World" << std::endl;
    std::cout << NLOHMANN_JSON_VERSION_MAJOR << std::endl;

    return;
}
