#include <iostream>

// Function to calculate the bill amount
double calculate(double price, int qty) {
    return price * qty;
}

int main() {
    // Variables to store user input
    double price;
    int qty;

    // Input price
    std::cout << "Enter the price: ";
    std::cin >> price;

    // Input quantity
    std::cout << "Enter the quantity: ";
    std::cin >> qty;

    // Calculate the bill amount using the calculate() function
    double totalAmount = calculate(price, qty);

    // Display the total bill amount
    std::cout << "Total Bill Amount: " << totalAmount << std::endl;

    return 0;
}

