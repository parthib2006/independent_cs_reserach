#include<iostream>
using namespace std;
int main(){
    int x,y;
    y = 0;
    cout << "Enter the size of the array: " << endl;
    cin >> x;
    int arr[x];
    cout << "Enter the elements of the array: " << endl;
    for(int i=0; i<x; i++){
        cin >> arr[i];
    }
    for(int j=0; j<x; j++){
        y += arr[j];
    }
    cout << "The sum of the elements of array is: " << y << endl;
    return 0;
}