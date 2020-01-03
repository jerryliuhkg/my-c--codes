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
#include <map>

using namespace std;

int main() {
    int N;
    cin >> N;
    map<int, bool> m;
    int noofvariables = 0;
    int input;
    for(int i=0; i<N; i++) {
        cin >> input;
        if(m.count(input)<=0) {
            m[input] = true;
            cout << "in" << endl;
        }
        else if(m[input]==true) {
            m[input] = false;
            cout << "out" << endl;
        }
        else if(m[input]==false) {
            m[input] = true;
            cout << "in" << endl;
        }
    }
    return 0;
}
