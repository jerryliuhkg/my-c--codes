#include <bits/stdc++.h>

using namespace std;

int gcd(int a,int b) {
    if(a>b) {
        if(a%b==0) {
            return b;
        }
        else {
            return gcd(b, a%b);
        }
    }
    else {
        if(b%a==0) {
            return a;
        }
        else{
            return gcd(a, b%a);
        }
    }
}

int main()
{
    int N;
    cin >> N;
    long long int a[3][N];
    for(int i=0; i<N; i++) {
        cin >> a[0][i];
        cin >> a[1][i];
        a[2][i] = a[0][i] + a[1][i];
    }
    for(int i=1; i<N; i++){
        a[2][i] = (a[2][i-1]/gcd(a[2][i-1], a[2][i]))*a[2][i];
    }
    cout << a[2][N-1];
    return 0;
}
