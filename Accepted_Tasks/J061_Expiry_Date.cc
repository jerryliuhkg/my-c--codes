#include <iostream>
using namespace std;
int main()
{
    int day, month, year;
    string m;
    cin >> day >> m >> year;
    if(m=="Jan") {
        month = 1;
    }
    else if(m=="Feb") {
        month = 2;
    }
    else if(m=="Mar") {
        month = 3;
    }
    else if(m=="Apr") {
        month = 4;
    }
    else if(m=="May") {
        month = 5;
    }
    else if(m=="Jun") {
        month = 6;
    }
    else if(m=="Jul") {
        month = 7;
    }
    else if(m=="Aug") {
        month = 8;
    }
    else if(m=="Sep") {
        month = 9;
    }
    else if(m=="Oct") {
        month = 10;
    }
    else if(m=="Nov") {
        month = 11;
    }
    else if(m=="Dec") {
        month = 12;
    }
    int a[12];
    a[0]=31;
    a[1]=28;
    a[2]=31;
    a[3]=30;
    a[4]=31;
    a[5]=30;
    a[6]=31;
    a[7]=31;
    a[8]=30;
    a[9]=31;
    a[10]=30;
    a[11]=31;
    
    int days;
    cin >> days;
    bool leapyear = false;
    if(year%400==0) {
        leapyear = true;
    }
    else if(year%100==0) {
        leapyear = false;
    }
    else if(year%4==0) {
        leapyear = true;
    }
    else{
        leapyear = false;
    }
    for(int i=0; i<days; i++) {
        day++;
        if(month==2 and leapyear==true and day>29) {
            month = 3;
            day = 1;
        }
        else if(day>a[month-1]and month != 2) {
            month++;
            day = 1;
        }
        else if(month==2 and leapyear==false and day>28) {
            month = 3;
            day = 1;
        }
        
        if(month>12) {
            year++;
            month = 1;
            if(year%400==0) {
                leapyear = true;
            }
            else if(year%100==0) {
                leapyear = false;
            }
            else if(year%4==0) {
                leapyear = true;
            }
            else{
                leapyear = false;
            }
        }
    }
    cout << day << ' ';
    if(month==1) {
        cout << "Jan" << ' ';
    }
    else if(month==2) {
        cout << "Feb" << ' ';
    }
    else if(month==3) {
        cout << "Mar" << ' ';
    }
    else if(month==4) {
        cout << "Apr" << ' ';
    }
    else if(month==5) {
        cout << "May" << ' ';
    }
    else if(month==6) {
        cout << "Jun" << ' ';
    }
    else if(month==7) {
        cout << "Jul" << ' ';
    }
    else if(month==8) {
        cout << "Aug" << ' ';
    }
    else if(month==9) {
        cout << "Sep" << ' ';
    }
    else if(month==10) {
        cout << "Oct" << ' ';
    }
    else if(month==11) {
        cout << "Nov" << ' ';
    }
    else if(month==12) {
        cout << "Dec" << ' ';
    }
    cout << year;

    return 0;
}
