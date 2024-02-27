/*
WAP to accept the value of a from class Demo1 and value of b from class Demo2. The variables a and b
are private. Exchange/swap the two values and display the result. [Use friend function]
*/

#include <iostream>

using namespace std;

class Demo2; // Forward declaration

class Demo1 {
private:
    int a;

public:
    Demo1(int aValue) : a(aValue) {}

    friend void exchangeValues(Demo1& obj1, Demo2& obj2);
    void display() const {
        cout << "Demo1: a = " << a << endl;
    }
};

class Demo2 {
private:
    int b;

public:
    Demo2(int bValue) : b(bValue) {}

    friend void exchangeValues(Demo1& obj1, Demo2& obj2);
    void display() const {
        cout << "Demo2: b = " << b << endl;
    }
};

// Friend function to exchange values between Demo1 and Demo2
void exchangeValues(Demo1& obj1, Demo2& obj2) {
    int temp = obj1.a;
    obj1.a = obj2.b;
    obj2.b = temp;
}

int main() {
    // Create objects of Demo1 and Demo2
    Demo1 obj1(5);
    Demo2 obj2(10);

    // Display initial values
    cout << "Before Exchange:" << endl;
    obj1.display();
    obj2.display();

    // Exchange values using friend function
    exchangeValues(obj1, obj2);

    // Display values after exchange
    cout << "\nAfter Exchange:" << endl;
    obj1.display();
    obj2.display();

    return 0;
}

