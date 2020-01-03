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
    int N, M;
    cin >> N >> M;
    int c[N+M];
    for(int i=0; i<N; i++) {
        cin >> c[i];
    }
    for(int i=0; i<M; i++) {
        cin >> c[i+N];
    }
    sort(c, c+M+N);
    for(int i=0; i<M+N; i++) {
        cout << c[i] << ' ';
    }
    

    return 0;
}
