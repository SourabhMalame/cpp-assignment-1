#include <iostream>

int main() {
    int num1, num2;

    // Input two numbers
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Display the numbers before swapping
    std::cout << "Before swapping: ";
    std::cout << "num1 = " << num1 << ", num2 = " << num2 << std::endl;

    // Swap the numbers without using a temporary variable
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    // Display the numbers after swapping
    std::cout << "After swapping: ";
    std::cout << "num1 = " << num1 << ", num2 = " << num2 << std::endl;

    return 0;
}

