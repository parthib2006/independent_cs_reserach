#include<iostream>
using namespace std;
int main(){
    unsigned long long int fact;
    fact = 1;
    int num;
    cout << "Enter the Number : " << endl;
    cin >> num;
    if(num < 0){
    cout << "Factorial of negative numbers is not defined!" << endl;
    return 0;
    }
    if(num==0 || num==1){
        fact = 1;
    }
    for(int i=num; i>1; i--){
        fact *= i;
    }
    cout << "The factorial of " << num << " is: " << fact << endl;
    return 0;
}