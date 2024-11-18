// Develop program  using static data member Static data function and inline funcation

//Aim :- To Create a C++ program that performs conversion of day into year,month ,remainning days then into hours,minutes and seconds for the given number of days


#include <iostream>
using namespace std;

class DayConverter {
private:
    static const int daysInYear;   // Static constant for days in a year
    static const int daysInMonth; // Static constant for days in a month

public:
    static void convert(int totalDays); // Static function for conversion
};

// Defining static members
const int DayConverter::daysInYear = 365;
const int DayConverter::daysInMonth = 30;

// Static function definition
void DayConverter::convert(int totalDays) {
    int years = totalDays / daysInYear;                  // Calculate years
    int remainingDays = totalDays % daysInYear;          // Days left after years
    int months = remainingDays / daysInMonth;           // Calculate months
    remainingDays %= daysInMonth;                       // Days left after months

    // Inline function to calculate hours, minutes, and seconds
    auto calculateTime = [](int days) -> void {
        int hours = days * 24;
        int minutes = hours * 60;
        int seconds = minutes * 60;

        cout << "Hours: " << hours << endl;
        cout << "Minutes: " << minutes << endl;
        cout << "Seconds: " << seconds << endl;
    };

    // Display results
    cout << "Years: " << years << endl;
    cout << "Months: " << months << endl;
    cout << "Remaining Days: " << remainingDays << endl;

    // Call inline function
    calculateTime(totalDays);
}

int main() {
    int totalDays;

    // Input number of days
    cout << "Enter the total number of days: ";
    cin >> totalDays;

    // Call the static function to perform the conversion
    DayConverter::convert(totalDays);

    return 0;
}
