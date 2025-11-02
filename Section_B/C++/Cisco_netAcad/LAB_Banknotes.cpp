#include<iostream>
using namespace std;
int main(){
    int money;
    int notes[5] = {50, 20, 10, 5, 1};
    cout << "Enter amount of Money: " << endl;
    cin >> money;
    for(int i=0; i < 5; i++){
        while(money >= notes[i]){
            cout << notes[i] << " ";
            money -= notes[i];
        }
    }
    cout << endl;
    return 0;
}