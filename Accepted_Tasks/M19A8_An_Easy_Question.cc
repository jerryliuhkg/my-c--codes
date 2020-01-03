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
    string a;
    getline(cin, a);
    int len = a.length();
    for(int i=0; i<len; i++) {
        if(a.at(i)=='x') {
            cout << i+1;
            break;
        }
    }

    return 0;
}
