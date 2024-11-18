// Develop program from the implementation of Singel and Multilevel inheritance 

#include <iostream>
using namespace std;

// Base Class
class Animal {
public:
    void eat() {
        cout << "This animal is eating." << endl;
    }
};

// Single Inheritance
class Dog : public Animal {
public:
    void bark() {
        cout << "The dog is barking." << endl;
    }
};

// Multilevel Inheritance
class Puppy : public Dog {
public:
    void play() {
        cout << "The puppy is playing." << endl;
    }
};
int main() {
    //  Single Inheritance
    cout << "Single Inheritance :" << endl;
    Dog dog;
    dog.eat();  // From Animal class
    dog.bark(); // From Dog class

    // Multilevel Inheritance
    cout << "\nMultilevel Inheritance :" << endl;
    Puppy puppy;
    puppy.eat();  // From Animal class
    puppy.bark(); // From Dog class
    puppy.play(); // From Puppy class

    return 0;
}
