//Devlope program using manipulators to format I/O

#include <iostream>
#include <iomanip>  // For using manipulators like setw, setprecision, etc.

using namespace std;

int main() {
    // Using setw() to set the width of the output
    cout << "Using setw() for setting width:" << endl;
    cout << setw(10) << "Hello" << setw(10) << "World" << endl;

    // Using setprecision() to set the number of decimal places for floating-point values
    double pi = 3.14159265358979;
    cout << "Using setprecision() for displaying pi:" << endl;
    cout << "Pi to 3 decimal places: " << fixed << setprecision(3) << pi << endl;
    cout << "Pi to 5 decimal places: " << fixed << setprecision(5) << pi << endl;

    // Using fixed and scientific manipulators for floating-point numbers
    cout << "Using fixed and scientific for pi:" << endl;
    cout << "Fixed notation: " << fixed << pi << endl;
    cout << "Scientific notation: " << scientific << pi << endl;

    // Using left, right, and internal for text alignment
    cout << "Text alignment with left, right, and internal:" << endl;
    cout << "Left-aligned: " << left << setw(10) << "Apple" << endl;
    cout << "Right-aligned: " << right << setw(10) << "Banana" << endl;
    cout << "Internal-aligned: " << internal << setw(10) << 1000 << endl;

    // Using endl to insert newline and flush the buffer
    cout << "End of program." << endl;

    return 0;
}
