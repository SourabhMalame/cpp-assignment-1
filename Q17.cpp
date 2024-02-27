/*
WAP to create a class branch with data members branch ID, branch Name, Branch City and member
functions as getdata() and Display()

*/

#include <iostream>
#include <string>

class Branch {
private:
    int branchID;
    std::string branchName;
    std::string branchCity;

public:
    // Member function to get data from the user
    void getData() {
        std::cout << "Enter Branch ID: ";
        std::cin >> branchID;

        std::cout << "Enter Branch Name: ";
        std::cin.ignore();  // Ignore any previous newline character
        std::getline(std::cin, branchName);

        std::cout << "Enter Branch City: ";
        std::getline(std::cin, branchCity);
    }

    // Member function to display branch information
    void display() {
        std::cout << "Branch ID: " << branchID << std::endl;
        std::cout << "Branch Name: " << branchName << std::endl;
        std::cout << "Branch City: " << branchCity << std::endl;
    }
};

int main() {
    // Create an object of the Branch class
    Branch myBranch;

    // Call getData() to input branch information
    myBranch.getData();

    // Call display() to show branch information
    std::cout << "\nBranch Information:\n";
    myBranch.display();

    return 0;
}

