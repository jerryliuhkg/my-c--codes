/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int day = 1;
    for(int i=2000;i<N;i++){
        if(i%400==0) {
            day+=366;
        }
        else if(i%100==0) {
            day+=365;
        }
        else if(i%4==0) {
            day+=366;
        }
        else {
            day+=365;
        }
        day = day%7;
    }
    if(day==0) {
        cout << "Sunday";
    }
    if(day==1) {
        cout << "Monday";
    }
    if(day==2) {
        cout << "Tuesday";
    }
    if(day==3) {
        cout << "Wednesday";
    }
    if(day==4) {
        cout << "Thursday";
    }
    if(day==5) {
        cout << "Friday";
    }
    if(day==6) {
        cout << "Saturday";
    }

    return 0;
}
