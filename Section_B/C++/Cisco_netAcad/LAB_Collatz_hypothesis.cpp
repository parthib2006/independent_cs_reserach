#include<iostream>
using namespace std;
int main(){
    int num,c0,step;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    c0 = num;
    step = 0;
    if(num<1){
        cout<< "Invalid Operation!! Must input an non-zero non-negative integer!!!" << endl;
        exit(0);
    }
    while(num>0){
        if(c0==1){
            break;
        }
        else if(c0%2==0){
            c0 /= 2;
            cout << c0 << endl;
            step++;
        }
        else{
            c0 = 3*c0+1;
            cout << c0 << endl;
            step++;
        }
    }
    cout << "Steps: " << step << endl;
    return 0;

}