#include <iostream>

using namespace std;

int main() {
    char ch;

    // Input a character from the user
    cout << "Enter a character: ";
    cin >> ch;

    // Display ASCII value
    int asciiValue = static_cast<int>(ch);
    cout << "ASCII value of '" << ch << "': " << asciiValue << endl;

    // Check if the character is a lowercase letter
    if ((ch >= 'a' && ch <= 'z')) {
        cout << "It's a lowercase letter." << endl;
    }
    // Check if the character is an uppercase letter
    else if (ch >= 'A' && ch <= 'Z') {
        cout << "It's an uppercase letter." << endl;
    }
    // If it's not a letter
    else {
        cout << "It's not a letter." << endl;
    }

    return 0;
}

