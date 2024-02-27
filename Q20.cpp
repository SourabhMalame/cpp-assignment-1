/*
WAP to create a class temperature with member fuctions gettemp1() which accepts the temprature in
fahreinheit and converts it to centigrade and another function gettemp2() which accepts the
temperature in centigrade and converts it to fahreinheit.Display the temperature in both units using
display() function.
*/

#include <iostream>

using namespace std;

class Temperature {
private:
    float tempFahrenheit;
    float tempCelsius;

public:
    void getTemp1() {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> tempFahrenheit;
        // Convert Fahrenheit to Celsius
        tempCelsius = (tempFahrenheit - 32) * 5 / 9;
    }

    void getTemp2() {
        cout << "Enter temperature in Celsius: ";
        cin >> tempCelsius;
        // Convert Celsius to Fahrenheit
        tempFahrenheit = tempCelsius * 9 / 5 + 32;
    }

    void display() {
        cout << "Temperature in Fahrenheit: " << tempFahrenheit << " °F" << endl;
        cout << "Temperature in Celsius: " << tempCelsius << " °C" << endl;
    }
};

int main() {
    Temperature tempObject;

    // Convert temperature from Fahrenheit to Celsius
    tempObject.getTemp1();
    tempObject.display();

    // Convert temperature from Celsius to Fahrenheit
    tempObject.getTemp2();
    tempObject.display();

    return 0;
}

