#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    long long limit;
    double n, pi;
    n=1.0;
    pi = 0.0;

    cout << "Enter the sample limit: " << endl;
    cin >> limit;

    for (int i=1; i<=limit; i++){
        if(i%2!=0){
            pi += 1/n;
        }
        else{
            pi -= 1/n;
        }
        n += 2;
    }

    pi *= 4;

    cout << "The value of pi is: " << endl;
    cout << fixed << setprecision(20);
    cout << "Pi = " << pi << endl;
    return 0;
}