#include <iostream>
#include <iomanip>
using namespace std;

// Function to check leap year
bool isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return true;
    else
        return false;
}

// Function to get number of days in month
int getDays(int month, int year) {
    switch (month) {
    case 1: return 31;
    case 2:
        if (isLeapYear(year))
            return 29;
        else
            return 28;
    case 3: return 31;
    case 4: return 30;
    case 5: return 31;
    case 6: return 30;
    case 7: return 31;
    case 8: return 31;
    case 9: return 30;
    case 10: return 31;
    case 11: return 30;
    case 12: return 31;
    default: return 30;
    }
}

// Function to get month name
string getMonthName(int month) {
    switch (month) {
    case 1: return "January";
    case 2: return "February";
    case 3: return "March";
    case 4: return "April";
    case 5: return "May";
    case 6: return "June";
    case 7: return "July";
    case 8: return "August";
    case 9: return "September";
    case 10: return "October";
    case 11: return "November";
    case 12: return "December";
    default: return "";
    }
}

// Formula to find first day of month
int getStartDay(int month, int year) {
    if (month < 3) {
        month += 12;
        year--;
    }

    int k = year % 100;
    int j = year / 100;

    int day = (1 + (13 * (month + 1)) / 5 + k + k / 4 + j / 4 + 5 * j) % 7;

    return (day + 6) % 7; // convert to 0=Sunday
}

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    cout << "\nCalendar for " << year << "\n\n";

    for (int month = 1; month <= 12; month++) {

        cout << "      " << getMonthName(month) << "\n";
        cout << "Sun Mon Tue Wed Thu Fri Sat\n";

        int days = getDays(month, year);
        int startDay = getStartDay(month, year);

        // Print spaces before first day
        for (int i = 0; i < startDay; i++) {
            cout << setw(4) << " ";
        }

        // Print days
        for (int day = 1; day <= days; day++) {
            cout << setw(4) << day;

            if ((startDay + day) % 7 == 0)
                cout << endl;
        }

        cout << "\n\n";
    }

    return 0;
}