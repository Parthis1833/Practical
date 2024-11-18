// Develop a C++ Program using class,object and Scop resolution operator
//Aim:-Write program to show use of classes and objects
#include <iostream>
using namespace std;

// Class definition
class Car {
private:
    string brand;
    int year;

public:
    // Constructor to initialize the brand and year
    Car(string b, int y) {
        brand = b;
        year = y;
    }

    // Member function to display details of the car
    void displayInfo() {
        cout << "Car Brand: " << brand << endl;
        cout << "Car Year: " << year << endl;
    }

    // Function to display the car's age
    void carAge(int currentYear) {
        int age = currentYear - year;
        cout << "The car's age is: " << age << " years" << endl;
    }

    // Static member function using the scope resolution operator
    static void displayMessage() {
        cout << "Welcome to the Car Showroom!" << endl;
    }
};

// Main function
int main() {
    // Creating an object of the Car class
    Car car1("Toyota", 2015);
    
    // Calling the displayInfo function using the object
    car1.displayInfo();
    
    // Calling the carAge function using the object and the current year
    car1.carAge(2024);

    // Calling the static member function using the scope resolution operator
    Car::displayMessage();

    return 0;
}
