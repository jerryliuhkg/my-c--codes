/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string N;
    cin >> N;
    int len = N.length();
    char a[2][len];
    for(int i=0; i<len; i++) {
        a[0][i] = N.at(i);
        a[1][i] = 'n';
    }
    char details;
    bool yesno = false;
    while(true) {
        for(int i=0; i<len; i++) {
            if(a[1][i]=='y') {
                yesno = true;
            }
            else{
                yesno = false;
                break;
            }
        }
        if(yesno == true) {
            break;
        }
        cin >> details;
        for(int i=0; i<len; i++) {
            if(a[0][i]==details) {
                a[1][i] = 'y';
            }
        }
        for(int i=0; i<len; i++) {
            if(a[1][i]=='y') {
                cout << a[0][i];
            }
            else{
                cout << '_';
            }
        }
        cout << endl;
    }
    
    
    return 0;
}
