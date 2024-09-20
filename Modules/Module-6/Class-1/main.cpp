#include <iostream>
// #include "AllProblems.hpp"

#include "AllProblems.hpp"

int main() {
    int choice = 0;

    // Display the problem options
    std::cout << "Class-1 Coding Questions:\n";
    std::cout << "1. Problem 1\n";
    std::cout << "2. Problem 2\n";
    std::cout << "Enter the number of the problem you want to execute: ";
    std::cin >> choice;

    // Execute the corresponding problem function
    switch (choice) {
        case 1:
            problem_1();
            break;
        case 2:
            problem_2();
            break;
        default:
            std::cout << "Invalid choice. Please try again.\n";
            break;
    }

    return 0;
}