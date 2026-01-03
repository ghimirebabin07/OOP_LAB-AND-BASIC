#include<iostream>
#include<iomanip>
#include <iostream>
#include <string>
using namespace std;

// Class declaration
class Car {
private:
    string brand;
    string model;
    int year;

public:
    // Constructor
    Car(string b, string m, int y) {
        brand = b;
        model = m;
        year = y;
    }

    // Setter function
    void setBrand(string b) {
        brand = b;
    }

    // Getter function
    string getBrand() {
        return brand;
    }

    // Display function
    void displayInfo() {
        cout << "Car Brand: " << brand << endl;
        cout << "Car Model: " << model << endl;
        cout << "Car Year: " << year << endl;
    }
};

// Main function
int main() {
    // Creating object of Car
    Car car1("Toyota", "Corolla", 2020);

    // Displaying info
    car1.displayInfo();

    // Changing brand using setter
    car1.setBrand("Honda");

    cout << "\nAfter changing brand:" << endl;
    cout << "New Brand: " << car1.getBrand() << endl;

    return 0;
}
