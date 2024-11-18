//Aim: Develop a program for implementation of polymorphism using virtual function

#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    // Virtual function for calculating area
    virtual void area() {
        cout << "Calculating area in base class (Shape)." << endl;
    }

    // Virtual destructor (good practice for polymorphic base classes)
    virtual ~Shape() {}
};

// Derived class Circle
class Circle : public Shape {
private:
    float radius;

public:
    // Constructor to initialize radius
    Circle(float r) {
        radius = r;
    }

    // Overriding the area function for Circle
    void area() override {
        float area = 3.14159 * radius * radius;  // Formula for circle area
        cout << "Area of the Circle with radius " << radius << " is: " << area << endl;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    float width, height;

public:
    // Constructor to initialize width and height
    Rectangle(float w, float h) {
        width = w;
        height = h;
    }

    // Overriding the area function for Rectangle
    void area() override {
        float area = width * height;  // Formula for rectangle area
        cout << "Area of the Rectangle with width " << width << " and height " << height << " is: " << area << endl;
    }
};

// Derived class Triangle
class Triangle : public Shape {
private:
    float base, height;

public:
    // Constructor to initialize base and height
    Triangle(float b, float h) {
        base = b;
        height = h;
    }

    // Overriding the area function for Triangle
    void area() override {
        float area = 0.5 * base * height;  // Formula for triangle area
        cout << "Area of the Triangle with base " << base << " and height " << height << " is: " << area << endl;
    }
};

int main() {
    // Creating pointers of base class type
    Shape* shape1;
    Shape* shape2;
    Shape* shape3;

    // Creating objects of derived classes with values for radius, width, height, etc.
    Circle circleObj(5.0);           // Circle with radius 5
    Rectangle rectangleObj(4.0, 6.0); // Rectangle with width 4 and height 6
    Triangle triangleObj(3.0, 7.0);   // Triangle with base 3 and height 7

    // Assigning base class pointers to derived class objects
    shape1 = &circleObj;
    shape2 = &rectangleObj;
    shape3 = &triangleObj;

    // Demonstrating runtime polymorphism (virtual function call)
    shape1->area();  // Will call Circle's area
    shape2->area();  // Will call Rectangle's area
    shape3->area();  // Will call Triangle's area

    return 0;
}