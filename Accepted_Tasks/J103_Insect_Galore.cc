/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
//a, odd nums
//b, 2011, 2014, 2017
//c, 2010, 2013, 2014, 2017, 2018, 2021
//d 2***; while *** is a triangular num
//b and d cannot exist together
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a==0 and b==0 and c==0 and d==0) {
        cout << "2010 0";
    }
    else if(a!=0 && b==0 && c==0 && d==0) {
        cout << "2011 " << a;
    }
    else if(a==0 && b!=0 and c==0 and d==0) {
        cout << "2011 " << b;
    }
    else if(a==0 and b==0 and c!=0 and d==0) {
        cout << "2010 " << c;
    }
    else if(a==0 and b==0 and c==0 and d!=0) {
        cout << "2010 " << d;
    }
    else if(a!=0 and b!=0 and c==0 and d==0) {
        cout << "2011 " << a+b;
    }
    else if(a!=0 and b==0 and c!=0 and d==0) {
        cout << "2013 " << a+c;
    }
    else if(a!=0 and b==0 and c==0 and d!=0) {
        cout << "2015 " << a+d;
    }
    else if(a==0 and b!=0 and c!=0 and d==0) {
        cout << "2014 " << b+c;
    }
    else if(a==0 and b!=0 and c==0 and d!=0) {
        if(b>d) {
            cout << "2011 " << b;
        }
        else{
            cout << "2010 " << d;
        }
    }
    else if(a==0 and b==0 and c!=0 and d!=0) {
        cout << "2010 " << c+d;
    }
    else if(a!=0 and b!=0 and c!=0 and d==0) {
        cout << "2017 " << a+b+c;
    }
    else if(a!=0 and b!=0 and c==0 and d!=0) {
        if(d>b) {
            cout << "2015 " << a+d;
        }
        else{
            cout << "2011 " << a+b;
        }
    }
    else if(a!=0 and b==0 and c!=0 and d!=0) {
        cout << "2021 " << a+c+d;
    }
    else if(a==0 and b!=0 and c!=0 and d!=0) {
        if(d>=b) {
            cout << "2010 " << c+d;
        }
        else{
            cout << "2014 " << b+c;
        }
    }
    else{
        if(b>=d) {
            cout << "2017 " << a+b+c;
        }
        else{
            cout << "2021 " << a+c+d;
        }
    }
}
