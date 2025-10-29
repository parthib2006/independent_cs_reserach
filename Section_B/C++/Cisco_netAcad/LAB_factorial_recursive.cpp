#include<iostream>
using namespace std;
long long int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n * fact(n-1);
}
int main(){
    int num,factorial;
    cout << "Enter the number: " << endl;
    cin >> num;
    factorial = fact(num);
    cout << "The factorial of the number " << num << " is: " << factorial << endl;
    return 0;
}