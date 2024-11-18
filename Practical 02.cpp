// Devlope a C++ progra using Array of Objects.
// Aim:-Devlop program to create & manipulate array of ibject and passing object as an arguement to function implement program to show the use of array of object 

#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    float marks;

public:
    // Constructor to initialize student data
    Student() : name(""), rollNo(0), marks(0.0f) {}

    // Function to input student data
    void input() {
        cout << "Enter Student Name: ";
        cin >> name;
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    // Function to display student data
    void display() const {
        cout << "Name: " << name << ", Roll No: " << rollNo << ", Marks: " << marks << endl;
    }

    // Friend function to compare marks
    friend void compareMarks(const Student &s1, const Student &s2);
};

// Function to compare marks of two students
void compareMarks(const Student &s1, const Student &s2) {
    cout << "\nComparing Marks of " << s1.name << " and " << s2.name << ":" << endl;
    if (s1.marks > s2.marks)
        cout << s1.name << " has higher marks: " << s1.marks << endl;
    else if (s1.marks < s2.marks)
        cout << s2.name << " has higher marks: " << s2.marks << endl;
    else
        cout << "Both students have equal marks: " << s1.marks << endl;
}

int main() {
    int numStudents;

    // Get the number of students
    cout << "Enter the number of students: ";
    cin >> numStudents;

    // Create an array of Student objects
    Student *students = new Student[numStudents];

    // Input data for each student
    cout << "\nInput Student Details:\n";
    for (int i = 0; i < numStudents; i++) {
        cout << "\nStudent " << i + 1 << ":" << endl;
        students[i].input();
    }

    // Display data for each student
    cout << "\nDisplaying Student Details:\n";
    for (int i = 0; i < numStudents; i++) {
        cout << "Student " << i + 1 << ": ";
        students[i].display();
    }

    // Compare marks of the first two students (if there are at least two students)
    if (numStudents >= 2) {
        compareMarks(students[0], students[1]);
    } else {
        cout << "\nNot enough students to compare marks." << endl;
    }

    // Clean up dynamically allocated memory
    delete[] students;

    return 0;
}
