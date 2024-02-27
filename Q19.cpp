/*
WAP to create a function getdata() which contains the details of Vehical as vehical number,Vehical
name,Average and fuel capacity. Display those vehicals which has avg>=15 km and fuel capacity is
greater than 10 ltrs.
*/

#include <iostream>
#include <vector>

using namespace std;

struct Vehicle {
    string vehicleNumber;
    string vehicleName;
    float average;
    float fuelCapacity;
};

vector<Vehicle> getdata() {
    int numVehicles;
    cout << "Enter the number of vehicles: ";
    cin >> numVehicles;

    vector<Vehicle> vehicles;

    for (int i = 0; i < numVehicles; ++i) {
        Vehicle vehicle;
        
        cout << "\nEnter details for Vehicle " << i + 1 << ":\n";
        cout << "Vehicle Number: ";
        cin >> vehicle.vehicleNumber;
        
        cout << "Vehicle Name: ";
        cin.ignore();  // Clear newline character from the buffer
        getline(cin, vehicle.vehicleName);
        
        cout << "Average (in km): ";
        cin >> vehicle.average;
        
        cout << "Fuel Capacity (in liters): ";
        cin >> vehicle.fuelCapacity;

        vehicles.push_back(vehicle);
    }

    return vehicles;
}

void display_vehicles(const vector<Vehicle>& vehicles) {
    cout << "\nVehicles with average >= 15 km and fuel capacity > 10 liters:\n";
    cout << "--------------------------------------------------------\n";

    for (const auto& vehicle : vehicles) {
        if (vehicle.average >= 15 && vehicle.fuelCapacity > 10) {
            cout << "Vehicle Number: " << vehicle.vehicleNumber << endl;
            cout << "Vehicle Name: " << vehicle.vehicleName << endl;
            cout << "Average: " << vehicle.average << " km" << endl;
            cout << "Fuel Capacity: " << vehicle.fuelCapacity << " liters\n";
            cout << "--------------------------------------------------------\n";
        }
    }
}

int main() {
    vector<Vehicle> vehiclesData = getdata();
    display_vehicles(vehiclesData);

    return 0;
}

