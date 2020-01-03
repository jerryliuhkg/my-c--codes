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
    int a[N];
    for(int i=0; i<N; i++) {
        cin >> a[i];
    }
    sort(a, a+N);
    int L, R, m, t;
    L=0;
    R=N-1;
    for(int i=0; i<M; i++) {
        L=0;
        R=N-1;
        int ind=0;
        cin >> t;
        while(L<=R) { 
            m=floor((L+R)/2);
            if(a[m]<t) {
                L=m+1;
            }
            else if(a[m]>t) {
                R=m-1;
            }
            else{
                cout << "Yes" << endl;
                ind = 1;
                break;
            }
        }
        if(ind ==0) cout << "No" << endl;
    }
    
    return 0;
}
