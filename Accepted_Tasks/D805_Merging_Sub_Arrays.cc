/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int M;
    cin >> M;
    long long int a[N];
    for(int i=0; i<N; i++) {
        cin >> a[i];
    }
    int len;
    int l1, l2, r1, r2;
    for(int i=0; i<M; i++) {
        cin >> l1 >> r1 >> l2 >> r2;
        len = r2 - l1 + 1;
        long long b[len];
        int counter = 0;
        for(int j=l1-1; j<r2; j++) {
            b[counter] = a[j];
            counter++;
        }
        sort(b, b+len);
        for(int j=0; j<len; j++) {
            cout << b[j] << ' ';
        }
        cout << endl;
    }

    return 0;
}
