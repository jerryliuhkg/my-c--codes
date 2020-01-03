/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;

int func(int N, int K) {
    if(N==1) return 1;
    else{
        return (func(N-1, K)+K-1)%N+1;
    }
} 

int main()
{
    int N, K;
    cin >> N >> K;
    cout << func(N, K)-1;

    return 0;
}
