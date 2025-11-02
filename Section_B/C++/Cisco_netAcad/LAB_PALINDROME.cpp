#include<iostream>
using namespace std;
int main(){
    int n, arr[] = {1, 2, 3, 4, 5, 4, 3, 2, 1};
    bool is_palindrome = true;
    n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i < n/2; i++){
        if(arr[i] != arr[n-i-1]){
            is_palindrome = false;
        }
    }
    if(is_palindrome){
       cout << "Palindrome" << endl;
    }
    else{
        cout << "Not a Palindrome" << endl;
    }

    return 0;
}