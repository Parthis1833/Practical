//Develop program for overloading array and binory operators
//Aim:- To implement the concept of oprator overloading

#include <iostream>
using namespace std;

class Array {
private:
    int size;
    int *arr;

public:
    // Constructor: Allocates memory for the array
    Array(int s) {
        size = s;
        arr = new int[size];
    }

    // Destructor: Frees the allocated memory
    ~Array() {
        delete[] arr;
    }

    // Overloading the array subscript operator []
    int& operator[](int index) {
        if (index >= 0 && index < size) {
            return arr[index];
        }
        else {
            cout << "Index out of bounds!" << endl;
            exit(1);  // Exit if index is out of bounds
        }
    }

    // Overloading the binary + operator
    Array operator+(const Array& other) {
        // Ensure the arrays are of the same size before adding
        if (size != other.size) {
            cout << "Arrays are not of the same size!" << endl;
            exit(1);
        }

        Array temp(size);
        for (int i = 0; i < size; ++i) {
            temp[i] = arr[i] + other.arr[i];
        }
        return temp;
    }

    // Function to display the array elements
    void display() const {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    // Creating two Array objects
    Array arr1(5);
    Array arr2(5);

    // Initializing arrays with values
    for (int i = 0; i < 5; i++) {
        arr1[i] = i + 1;
        arr2[i] = (i + 1) * 2;
    }

    // Display the original arrays
    cout << "Array 1: ";
    arr1.display();
    cout << "Array 2: ";
    arr2.display();

    // Adding two arrays using overloaded + operator
    Array arr3 = arr1 + arr2;

    // Display the result of the addition
    cout << "Array 1 + Array 2: ";
    arr3.display();

    return 0;
}
