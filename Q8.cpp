// WAP to display the minimum value among the array values.

#include <iostream>

void findMinimum(int arr[], int size) {
    int minVal = arr[0];

    for (int i = 1; i < size; ++i) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }

    std::cout << "Minimum value in the array: " << minVal << std::endl;
}

int main() {
    const int size = 5;  // You can change the size as per your requirement
    int arr[size];

    // Input values into the array
    std::cout << "Enter " << size << " integer values:\n";
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    // Find and display the minimum value in the array
    findMinimum(arr, size);

    return 0;
}

