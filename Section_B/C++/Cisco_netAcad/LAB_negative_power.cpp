#include<iostream>
using namespace std;
double power(int base, int power){
    double res;
    res = 1.0;
    for(int i=power; i>0; i--){
        res /= base;
    }
    return res;
}
int main(){
    int n;
    double result;
    cout << "Enter power: " << endl;
    cin >> n;
    result = power(2,n);
    cout << "The power of 2 is: " << endl << "2^-n = ";
    cout.precision(20);
    cout << result << endl;

    return 0;
}