//Develop program for writing to file and reading the contents of file
#include <iostream>
#include <fstream>  // For file handling
#include <string>

using namespace std;

int main() {
    // Writing to a file
    ofstream outFile("example.txt");  // Open a file for writing

    if (!outFile) {
        // Check if the file was successfully opened
        cout << "Error opening file for writing!" << endl;
        return 1;
    }

    // Writing data to the file
    outFile << "This is a test file.\n";
    outFile << "C++ file handling is easy to learn.\n";
    outFile << "Writing to a file is simple using ofstream.\n";

    cout << "Data written to file successfully!" << endl;

    // Close the file after writing
    outFile.close();

    // Reading from the file
    ifstream inFile("example.txt");  // Open a file for reading

    if (!inFile) {
        // Check if the file was successfully opened
        cout << "Error opening file for reading!" << endl;
        return 1;
    }

    string line;
    cout << "\nReading contents of the file:" << endl;

    // Read the file line by line
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    // Close the file after reading
    inFile.close();

    return 0;
}
