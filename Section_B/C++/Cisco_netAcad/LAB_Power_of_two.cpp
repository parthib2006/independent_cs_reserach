#include<iostream>
using namespace std;
long long int power(int base, int power){
    long long int res;
    res = 1;
    for(int i=power; i>0; i--){
        res *= base;
    }
    return res;
}
int main(){
    int n;
    long long int result;
    cout << "Enter power: " << endl;
    cin >> n;
    result = power(2,n);
    cout << "The power of 2 is: " << endl << "2^n = " << result << endl;

    return 0;
}