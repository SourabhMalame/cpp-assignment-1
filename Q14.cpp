#include <iostream>

int main() {
    int startRange, endRange;

    // Input the range
    std::cout << "Enter the starting range: ";
    std::cin >> startRange;

    std::cout << "Enter the ending range: ";
    std::cin >> endRange;

    // Validate the range
    if (startRange <= endRange) {
        std::cout << "Even numbers in the range [" << startRange << ", " << endRange << "]: ";
        for (int i = startRange; i <= endRange; ++i) {
            if (i % 2 == 0) {
                std::cout << i << " ";
            }
        }

        std::cout << "\nOdd numbers in the range [" << startRange << ", " << endRange << "]: ";
        for (int i = startRange; i <= endRange; ++i) {
            if (i % 2 != 0) {
                std::cout << i << " ";
            }
        }

        std::cout << std::endl;
    } else {
        std::cout << "Invalid range. Please enter a valid range." << std::endl;
    }

    return 0;
}

