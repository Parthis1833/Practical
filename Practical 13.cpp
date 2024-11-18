//Write a program for excepltion Handling
#include <iostream>
#include <stdexcept>  // For standard exceptions

using namespace std;

// Function to divide two numbers
double divide(int num1, int num2) {
    if (num2 == 0) {
        // Throw an exception if division by zero is attempted
        throw runtime_error("Error: Division by zero is not allowed.");
    }
    return static_cast<double>(num1) / num2;
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    try {
        // Attempt to perform division
        double result = divide(num1, num2);
        cout << "Result of division: " << result << endl;
    } 
    catch (const runtime_error &e) {
        // Handle the exception and display an error message
        cout << e.what() << endl;
    }

    cout << "Program continues execution after exception handling." << endl;

    return 0;
}
