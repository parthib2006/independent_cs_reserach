#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    for(int i=0; i<num; i++){
        for (int j = 0; j <= i; j++) {
            if(j==0 || j==i || i==num-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}