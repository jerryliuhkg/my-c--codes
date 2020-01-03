/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int a[N];
    for(int i=0; i<N; i++) {
        int details;
        cin >> details;
        for(int j=0; j<=N; j++) {
            if(a[j]>details) {
                for(int k=N; k>j; k--) {
                    a[k] = a[k-1];
                }
                a[j] = details;
                break;
            }
            else if(j==i) {
                a[j] = details;
                break;
            }
        }
        for(int j=0; j<=i; j++) {
            cout << a[j] << ' ';
        } 
        cout << endl;
    }

    return 0;
}
