#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    int a[N];
    for(int i=0; i<N; i++) {
        cin >> a[i];
    }
    sort(a, a+N);
    int counter = 0;
    for(int i=0; i<N-1; i++) {
        a[0] = a[0] + a[1];
        counter = counter + a[0];
        for(int j=1; j<N-i-1; j++) {
            a[j] = a[j+1];
        }
        sort(a, a+N-i-1);
    }
    cout << counter;
    
}
