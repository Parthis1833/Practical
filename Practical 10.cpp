// Develop program for pointer to object,array of object and this pointer

#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
    float marks;

public:
    // Constructor to initialize student data
    Student(string n, int a, float m) {
        name = n;
        age = a;
        marks = m;
    }

    // Getter methods to access private members
    string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    float getMarks() const {
        return marks;
    }

    // Member function to display student info using 'this' pointer
    void displayInfo() {
        cout << "Student Name: " << this->getName() << endl;
        cout << "Age: " << this->getAge() << endl;
        cout << "Marks: " << this->getMarks() << endl;
    }

    // Function to compare marks using 'this' pointer
    bool isBetterThan(Student& other) {
        return this->marks > other.marks;
    }
};

int main() {
    // Pointer to Object Example
    Student* studentPtr = new Student("Alice", 20, 85.5);
    studentPtr->displayInfo();
    delete studentPtr;

    cout << endl;

    // Array of Objects Example
    Student students[2] = {
        Student("Bob", 21, 90.0),
        Student("Charlie", 22, 75.0)
    };

    for (int i = 0; i < 2; i++) {
        cout << "Student " << (i + 1) << ":" << endl;
        students[i].displayInfo();
        cout << endl;
    }

    // Using 'this' pointer to compare two students
    cout << "Comparison using 'this' pointer:" << endl;
    if (students[0].isBetterThan(students[1])) {
        cout << students[0].getName() << " has better marks than " << students[1].getName() << endl;
    } else {
        cout << students[1].getName() << " has better marks than " << students[0].getName() << endl;
    }

    return 0;
}