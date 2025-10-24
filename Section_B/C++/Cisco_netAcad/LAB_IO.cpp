#include <iostream>
#include <sstream>
using namespace std;

int main() {
    int p1, p2, p3, p4;
    cout << "Enter 4 subparts of an IP Address: " << endl;
    cin >> p1 >> p2 >> p3 >> p4;

    int arr[4] = {p1, p2, p3, p4};
    bool valid = true;

    for (int i = 0; i < 4; i++) {
        if (!(arr[i] >= 0 && arr[i] <= 255)) {
            cout << "Invalid input! Each part must be between 0 and 255." << endl;
            valid = false;
            break;
        }
    }

    if (valid) {
        stringstream ss;
        ss << p1 << "." << p2 << "." << p3 << "." << p4;
        string ip = ss.str();

        cout << "The IP Address is: " << ip << endl;
    }

    return 0;
}