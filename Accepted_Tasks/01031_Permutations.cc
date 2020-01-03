#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
    int b, n;
    cin >> b >> n;
    string a;
    cin >> a;
    sort(a.begin(), a.end());
    cout << a << endl;
    for(int i=1; i<n; i++) {
        next_permutation(a.begin(), a.end());
        cout << a << endl;
    }
}
