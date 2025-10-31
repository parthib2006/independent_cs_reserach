#include<iostream>
using namespace std;
int main() {
    unsigned long val;
    int count=0;
    cout << "Enter the Decimal Value: " << endl;
    cin >> val;
    while(val!=0){
        if ((val & 1) == 1)
          count++;
        
        val >>= 1 ;
    }
    cout << "Total no. of 1 in the bit sequence is: " << count << endl;
    return 0;
}