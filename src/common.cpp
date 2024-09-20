#include "common.hpp"
#include <iostream>
#include <vector>

void logVec(const std::vector<int>& vec) {
    for (int v : vec) {
        std::cout << v << " ";
    }
    std::cout << std::endl;
}