#include<iostream>
using namespace std;
int main(){
    long long prev,next,sum;
    prev = 0;
    next = 1;
    sum = 0;
    int limit;
    cout << "Enter the limit up to which we need fibonacci numbers: " << endl;
    cin >> limit;
    if(limit <= 0){
        cout << "Please enter a positive limit!!!" << endl;
        exit(0);
    }
    cout << "The fibonacci series up to " << limit <<"-th term is: " << endl;
    cout << prev << " " << next << " ";
    for(int i = 2; i < limit; i++){
        sum = prev + next;
        cout << sum << " ";
        prev = next;
        next = sum;
    }
    return 0;
}