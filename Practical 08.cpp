//  Develop program for for function overloading and function overriding


#include <iostream>
using namespace std;

// Class with Overloaded Functions
class Calculator {
public:
    // Add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Add three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Add two floating-point numbers
    double add(double a, double b) {
        return a + b;
    }
};


// Class with Overredding Functions

class Animal {
public:
    virtual void sound() { // Virtual function for overriding
        cout << "This animal makes a sound." << endl;
    }
};

// Derived Class 1
class Dog : public Animal {
public:
    void sound() override { // Overriding the sound method
        cout << "The dog barks." << endl;
    }
};

// Derived Class 2
class Cat : public Animal {
public:
    void sound() override { // Overriding the sound method
        cout << "The cat meows." << endl;
    }
};

int main() {

    cout << "\n Overloaded Function:-";
    Calculator calc;

    cout << "Sum of 2 and 3: " << calc.add(2, 3) << endl;          // Calls add(int, int)
    cout << "Sum of 1, 4, and 7: " << calc.add(1, 4, 7) << endl;  // Calls add(int, int, int)
    cout << "Sum of 2.5 and 3.1: " << calc.add(2.5, 3.1) << endl; // Calls add(double, double)


    cout <<"/n OVerridding Function:-";


    Animal* animalPtr; // Pointer of type Animal

    Dog dog;
    Cat cat;

    animalPtr = &dog;
    animalPtr->sound(); // Calls Dog's overridden sound method

    animalPtr = &cat;
    animalPtr->sound(); // Calls Cat's overridden sound method


    return 0;
}
