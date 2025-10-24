#include<iostream>
using namespace std;

int main(void) {
	int year;
	
	cout << "Enter a year: " << endl;
	cin >> year;
	if(year < 1582){
        cout << "WARNING: Year entered is out of Gregorian era!" << endl;
    }
	else if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
        cout << "Leap Year" << endl;
    }
    else{
        cout << "Common Year" << endl;
    }
	
	return 0;
}