#include <iostream>
#include <spdlog/spdlog.h>

#include "src/two_sum.hpp"

int main(int, char**) {
    spdlog::info("--- Two sum problem ---");
    const auto& indices = two_sum({2,7,11,15}, 9);
    spdlog::info("Positional args are {0} {1}..", indices[0], indices[1]);
}
    
