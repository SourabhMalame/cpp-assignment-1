/*

WAP to create a class ARRAY with member function getarray() which accepts the array elements as user
defined size and create another function geteven(), getodd() to display the all even and odd values from
the array.[Use scope resolution operator]

*/

#include <iostream>

using namespace std;

class Array {
private:
    int size;
    int *arr;

public:
    void getArray() {
        cout << "Enter the size of the array: ";
        cin >> size;

        arr = new int[size];

        cout << "Enter array elements:" << endl;
        for (int i = 0; i < size; ++i) {
            cout << "Element " << i + 1 << ": ";
            cin >> arr[i];
        }
    }

    void getEven() {
        cout << "Even elements in the array:" << endl;
        for (int i = 0; i < size; ++i) {
            if (arr[i] % 2 == 0) {
                cout << arr[i] << " ";
            }
        }
        cout << endl;
    }

    void getOdd() {
        cout << "Odd elements in the array:" << endl;
        for (int i = 0; i < size; ++i) {
            if (arr[i] % 2 != 0) {
                cout << arr[i] << " ";
            }
        }
        cout << endl;
    }

    ~Array() {
        delete[] arr; // Release memory when the object is destroyed
    }
};

int main() {
    Array arrayObject;

    // Accept array elements
    arrayObject.getArray();

    // Display even elements
    arrayObject.getEven();

    // Display odd elements
    arrayObject.getOdd();

    return 0;
}

