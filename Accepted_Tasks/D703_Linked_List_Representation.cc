/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int first;
    cin >> first;
    pair<int, int> p[N];
    for(int i=0; i<N; i++) {
        cin >> p[i].first;
    }
    for(int i=0; i<N; i++) {
        cin >> p[i].second;
    }
    while(first!=0) {
        cout << p[first-1].first << endl;
        first = p[first-1].second;
    }
    cout << "End";

    return 0;
}
