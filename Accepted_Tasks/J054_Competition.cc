#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    int b[n];
    int storage;
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++) cin >> b[i];
    for(int i=0; i<n; i++) {
        for(int j=1; j<n; j++) {
            if(a[j]>a[j-1]) {
                storage = a[j];
                a[j] = a[j-1];
                a[j-1] = storage;
            }
        }
    }
    // sort(b, b+n);
    // for(int i=0; i<n; i++) cout << a[i] << ' ';
    // cout << endl;
    int wins = 0;
    int max = 0;
    int pos = 0;
    for(int i=0; i<n; i++) {
        max = -1;
        pos = -1;
        for(int j=0; j<n; j++) {
            if(b[j]>max && b[j]<a[i]) {
                max = b[j];
                pos = j;
            }
        }
        if(max==-1) {
            // cout << "Broke at " << a[i] << endl;
            break;
        }
        else{
            wins++;
            // cout << a[i] << " won to " << b[pos] << endl;
            b[pos] = -1;
        }
    }
    cout << wins << endl;
}
