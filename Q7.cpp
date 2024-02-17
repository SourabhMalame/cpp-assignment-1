// 7 WAP to display the array values in Ascending order
#include <iostream>

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void displayArray(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    const int size = 5;  // You can change the size as per your requirement
    int arr[size];

    // Input values into the array
    printf("Enter %d integer values:\n", size);
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }

    // Sort the array in ascending order
    sortArray(arr, size);

    // Display the sorted array
    printf("Array in ascending order: ");
    displayArray(arr, size);

    return 0;
}

