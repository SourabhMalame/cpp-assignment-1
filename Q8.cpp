#include <iostream>

using namespace std;

int main() {
    const int size = 5;  // Adjust the size according to your array size
    int arr[size] = {5, 2, 8, 1, 7};

    // Find the minimum value
    int minValue = arr[0]; // Assume the first element as the minimum

    for (int i = 1; i < size; i++) {
        if (arr[i] < minValue) {
            minValue = arr[i];
            cout <<  "\n "<< minValue << "\n";
        }
    }

    // Display the minimum value
    cout << "Minimum value in the array: " << minValue << endl;

    return 0;
}

