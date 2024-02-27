#include <iostream>

using namespace std;

int main() {
    const int size = 8;  // Adjust the size according to your array size
    int arr[size] = {5, 2, 8, 1, 7, 4, 3, 9};

    // Sort the array in ascending order (Bubble Sort)
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap the elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Display the array in ascending order
    cout << "Array in Ascending Order: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

