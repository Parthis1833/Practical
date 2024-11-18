// Develop a C++ program using constructor and destructor funcation in class
//Aim:- To implement the concept of Constructor and Destructor

#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // Constructor: Initializes object
    Person(string n, int a) {
        name = n;
        age = a;
        cout << "Constructor called: Person object created for " << name << endl;
    }

    // Destructor: Cleans up when object is destroyed
    ~Person() {
        cout << "Destructor called: Person object for " << name << " is destroyed" << endl;
    }

    // Function to display person's details
    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // Creating objects
    cout << "Creating objects..." << endl;
    Person person1("Alice", 25);
    Person person2("Bob", 30);

    // Displaying details of the objects
    cout << "\nDisplaying details:" << endl;
    person1.display();
    person2.display();

    cout << "\nExiting program..." << endl;
    return 0;
}
