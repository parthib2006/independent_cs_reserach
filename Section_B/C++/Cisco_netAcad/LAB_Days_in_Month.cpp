#include<iostream>
using namespace std;
bool isLeap(int y){
    if(y%400==0 || (y%4==0 && y%100!=0)){
        return 1;
    }
    return 0;
}
int days_in_months(int y, int m){
    switch(m){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
             return 31;
             break;
    case 4:
    case 6:
    case 9:
    case 11:
             return 30;
             break;
    case 2: 
             if(isLeap(y)){
                return 29;
             }       
             return 28;
    default: return 0;                    
    }         
}
int main(){
    int year, month;
    for(year=2000; year<2002; year++){
        for(month=1; month<=12; month++){
            cout << days_in_months(year, month) << " ";
        }
        cout << endl;
    }

    return 0;
}