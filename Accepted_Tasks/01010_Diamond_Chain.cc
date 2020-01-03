#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    int b[n];
    int len = 0;
    bool nega = false;
    int start = 0;
    while(a[start]<0) {
        start++;
    }
    int total=0;
    for(int i=start; i<n; i++) {
        if(nega==true) {
            if(a[i]<=0) {
                total = total + a[i];
            }
            else {
                b[len] = total;
                total = a[i];
                len++;
                nega = false;
            }
        }
        else if(nega==false) {
            if(a[i]>=0) {
                total = total + a[i];
            }
            else {
                b[len] = total;
                total = a[i];
                len++;
                nega = true;
            }
        }
//        cout << total << ' ';
    }
  //  cout << endl;
    if(total>0) {
        b[len] = total;
        len++;
    }
    // for(int i=0; i<len; i++) cout << b[i] << ' ';
    // cout << endl;
    int g_max = 0, l_max = 0;
    for(int i=0; i<len; i = i+2) {
        l_max = l_max + b[i];
        if(b[i]>g_max) {
            g_max = b[i];
        }
        if(l_max>g_max) {
            g_max = l_max;
        }
        if(i+1==len) {
            break;
        }
        l_max = l_max + b[i+1];
        if(l_max<0) {
            l_max = 0;
        }
    }
    cout << g_max << endl;
}
