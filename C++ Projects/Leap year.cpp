#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int year;
    cout << "Leap Year Finder\n";
    cout << "Enter a year: ";
    cin >> year;

    if (year % 4 == 0) {
                cout << year << " is a leap year.";
    }
            else{ 
                cout << year << " is not a leap year.";
            }

    return 0;
}