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
    pair <int, int> p[N];
    int a[N];
    int acounter = 0;
    int b[N];
    int bcounter = 0;
    bool ok = true;
    for(int i=0; i<N; i++) {
        cin >> p[i].first;
    }
    for(int i=0; i<N; i++) {
        if(acounter==0) {
            a[0] = p[i].first;
            acounter++;
            p[i].second = 1;
        }
        else if(p[i].first>a[acounter-1]) {
            p[i].second = 1;
            a[acounter] = p[i].first;
            acounter++;
        }
        else if(bcounter==0) {
            p[i].second = 2;
            b[0] = p[i].first;
            bcounter++;
        }
        else if(p[i].first>b[bcounter-1]) {
            p[i].second = 2;
            b[bcounter] = p[i].first;
            bcounter++;
        }
        else{
            ok = false;
            break;
        }
    }
    if(ok==false) {
        cout << "NO";
    }
    else {
        cout << "YES" << endl;
        for(int i=0; i<N; i++) {
            cout << p[i].second << ' ';
        }
    }

    return 0;
}
