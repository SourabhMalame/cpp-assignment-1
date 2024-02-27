/*


WAP to create a class ARRAY with member function getarray() which accepts the array elements. Define
2 different objects of that class ARRAY as a1 and a2.Get array values in object a1 and in object a2.Define
a function calculate() which accepts the objects as arguments and performs addition of array from
object a1 and a2.

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

    static Array calculate(const Array& a1, const Array& a2) {
        // Ensure both arrays have the same size for addition
        if (a1.size != a2.size) {
            cerr << "Error: Arrays must have the same size for addition." << endl;
            exit(EXIT_FAILURE);
        }

        Array result;
        result.size = a1.size;
        result.arr = new int[result.size];

        for (int i = 0; i < result.size; ++i) {
            result.arr[i] = a1.arr[i] + a2.arr[i];
        }

        return result;
    }

    void display() const {
        cout << "Array elements:" << endl;
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~Array() {
        delete[] arr; // Release memory when the object is destroyed
    }
};

int main() {
    Array a1, a2;

    // Get array values in object a1
    cout << "Enter values for Array a1:" << endl;
    a1.getArray();

    // Get array values in object a2
    cout << "Enter values for Array a2:" << endl;
    a2.getArray();

    // Perform addition of arrays from objects a1 and a2
    Array result = Array::calculate(a1, a2);

    // Display array elements in objects a1, a2, and the result
    cout << "\nArray a1:" << endl;
    a1.display();

    cout << "\nArray a2:" << endl;
    a2.display();

    cout << "\nSum of arrays a1 and a2:" << endl;
    result.display();

    return 0;
}

