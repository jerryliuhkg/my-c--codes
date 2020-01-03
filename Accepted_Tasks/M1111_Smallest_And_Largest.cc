#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cin >> str;
    int a[str.length()];
    for (int i=0; i<str.length(); i++) {
        a[i] = str.at(i) - '0';
    }
    sort(a, a+str.length());
    for(int i=str.length()-1; i>=0; i--) {
        cout << a[i];
    }
    cout << endl;
    int pos = 0;
    if(a[pos]==0) {
        while(a[pos]==0) {
            pos = pos+1;
        }
        a[0] = a[pos];
        a[pos] = 0;
    }
    for(int i=0; i<str.length(); i++) {
        cout << a[i];
    }
}
