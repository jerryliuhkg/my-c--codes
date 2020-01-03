#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int N;
    cin >> N;
    int a[N];
    int b[N];
    int c[N];
    int d[N];
    for(int i=0; i<N; i++) {
        cin >> a[i];
        c[i] = a[i];
    }
    for(int i=0; i<N; i++) {
        cin >> b[i];
        d[i] = b[i];
    }
    int counter = 0;
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            if(c[i]==d[j]) {
                d[j] = 0;
                break;
            }
        }
        counter = counter + c[i];
    }
    for(int i=0; i<N; i++) {
        counter = counter + d[i];
    }
    cout << counter << ' ';
    int total = 0;
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            total = total + min(a[i], b[j]);        
        }
    }
    cout << total << endl;
}
