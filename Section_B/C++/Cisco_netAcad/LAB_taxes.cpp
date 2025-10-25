#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float gross, rate, net, tax;
    cout << "Enter Gross amount: " << endl;
    cin >> gross;
    cout << "Enter rate of tax: " << endl;
    cin >> rate;

    if (gross <= 0.0 || rate < 0.0 || rate > 100.0){
        cout << "Invalid Operation !!!" << endl;
    }
    else{
        net = gross / (1 + rate/100);
        tax = gross - net;
        cout << fixed << setprecision(4);
        cout << "The Net Price: " << net << endl << "Tax: " << tax << endl;
    }
    return 0;
}