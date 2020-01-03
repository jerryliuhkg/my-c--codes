/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main()
{
    fstream fs;
    freopen("title.in",  "r", stdin);
    fs.open("title.out", fstream::in | fstream::out | fstream::app);
    int times = 0, len;
    string N;
    getline(cin, N);
    len = N.length();
    for(int i=0; i<len; i++) {
        if(N[i]==32) {
            continue;
        }
        else if(N[i]==10) {
            continue;
        }
        else{
            times++;
        }
    }
    fs << times;
    fs.close();
}
