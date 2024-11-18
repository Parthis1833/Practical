// Develop program to implement muliple and hierorchical inheritance

#include <iostream>
using namespace std;

// Base Class
class Animal {
public:
    void eat() {
        cout << "This animal is eating." << endl;
    }
};


// Multilevel Inheritance

// First Child Class: 
class Dog : public Animal {
public:
    void bark() {
        cout << "The dog is barking." << endl;
    }
};
class Puppy : public Dog {
public:
    void play() {
        cout << "The puppy is playing." << endl;
    }
};

// Second Child Class:
class Cat : public Animal {
public:
    void meow() {
        cout << "The cat is meowing." << endl;
    }
};
int main() {

    // Multilevel Inheritance
    cout << "\nMultilevel Inheritance :" << endl;
    Puppy puppy;
    puppy.eat();  // From Animal class
    puppy.bark(); // From Dog class
    puppy.play(); // From Puppy class

    // Hierarchical Inheritance
    cout << "\nHierarchicall Inheritance :" << endl;
    // Dog Object
    cout << "\nDog Actions:" << endl;
    Dog dog;
    dog.eat();  // Inherited from Animal
    dog.bark(); // Unique to Dog

    // Cat Object
    cout << "\nCat Actions:" << endl;
    Cat cat;
    cat.eat();  // Inherited from Animal
    cat.meow(); // Unique to Cat
    return 0;
}
