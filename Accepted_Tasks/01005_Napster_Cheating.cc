/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int a[N];
    for(int i=0; i<N; i++) {
        a[i] = i+1;
    }
    a[0] = 0;
    for(int i=0; i<=ceil(sqrt(N)); i++) {
        if(a[i]==0) {
            continue;
        }
        else{
            for(int j=0; j<N; j++) {
                if(a[j] == a[i]) {
                    continue;
                }
                else if(a[j]%a[i]==0) {
                    a[j] = 0;
                }
            }
        }
    }
    for(int i=0; i<N; i++) {
        if(a[i]==0) {
            continue;
        }
        else{
            cout << a[i] << endl;
        }
    }

    return 0;
}
