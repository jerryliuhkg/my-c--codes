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
    long long int N;
    cin >> N;
    long long int a[N];
    for(int i=0; i<N; i++) {
        cin >> a[i];
    }
    long long int storage;
    sort(a, a+N);
    long long int position = int(ceil(N/2));
    cout << a[position];

    return 0;
}
