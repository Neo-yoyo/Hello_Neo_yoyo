#include <iostream>

#include "git_submodule/submodule/calculator/calculator.hpp"

int main() {
    std::cout << "Hello world!" << std::endl ;

    calculator calc;

    std::cout << calc.add(7, 5) << std::endl ;
}

