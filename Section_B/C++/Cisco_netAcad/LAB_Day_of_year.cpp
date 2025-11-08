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
int day_of_year(int y, int m, int d){
    int days = 0;
    for(int i=1; i<m; i++){
        days += days_in_months(y, i);
    }
    days += d;
    return days;
}
int main(){
    int year, month, date;
    cout << "Enter the year, month and date: " << endl;
    cin >> year >> month >> date;
    cout << day_of_year(year, month, date) << endl;
    return 0;
}