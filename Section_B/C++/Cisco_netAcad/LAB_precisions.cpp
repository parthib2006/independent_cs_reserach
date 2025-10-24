#include<iostream>
#include<iomanip>
using namespace std;
int main(){
float x = 2.3;
float y = 2.123456;
cout << setprecision(2) << x << endl;
cout << setprecision(2) << fixed << x << endl;
cout << setprecision(6) << y << endl;
cout << setprecision(2) << y << endl;
cout << setprecision(0) << y << endl;
return 0;
}