/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main()
{   
    int n;
    cin >> n;
    int total = 0;
    string a;
    int len;
    for(int i=0; i<n; i++) {
        cin >> a;
        len = a.length();
        for(int j=0; j<len; j++) {
            if(a.at(j)==46) {
                total = total + 2;
            }
            else if(a.at(j)==45) {
                total = total - 1;
            }
        }
    }
    cout << total;

    return 0;
}
