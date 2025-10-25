#include <iostream>
using namespace std;

int main() {
    int day, month, year;
    cout << "Enter date (DD MM YYYY): ";
    int q, m, y;
    cin >> q >> m >> y;  // q = day, m = month, y = year

    // Adjust months for Zeller's formula
    if (m == 1) {  // January
        m = 13;
        y--;
    }
    else if (m == 2) {  // February
        m = 14;
        y--;
    }

    int K = y % 100;    // year within century
    int J = y / 100;    // zero-based century

    // Zeller’s formula
    int h = (q + (13*(m + 1))/5 + K + K/4 + J/4 + 5*J) % 7;

    string days[7] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    cout << "The day is: " << days[h] << endl;

    return 0;
}