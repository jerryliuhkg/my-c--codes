/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(8);
    double hour, min, sec;
    char colon;
    cin >> hour >> colon >> min >> colon >> sec;
    if(hour >= 12) {
        hour = hour - 12;
    }
    double hourangle, minangle;
    hourangle = (hour*30)+(min/2)+(sec/120);
    minangle = (min*6)+(sec/10);
    double ans;
    ans = hourangle - minangle;
    if(ans<0) {
        ans = 0-ans;
    }
    if(ans>180) {
        ans = ans - ((ans-180)*2);
    }
    cout << ans;

    return 0;
}
