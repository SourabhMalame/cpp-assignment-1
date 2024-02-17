#include <iostream>

bool isPrime(int num) {
   
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int start, end;

    // Get user input for the range
    std::cout << "Enter the starting number: ";
    std::cin >> start;

    std::cout << "Enter the ending number: ";
    std::cin >> end;

    std::cout << "Prime numbers between " << start << " and " << end << " are:\n";

    // Display prime numbers in the specified range
    for (int i = start; i <= end; ++i) {
        if (isPrime(i)) {
            std::cout << i << " ";
        }
    }

    return 0;
}

