#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    string a;
    cin >> a;
    int odd = 0;
    int even = 0;
    for(int i=0; i<N; i++) {
        if(i%2==0) {
            odd = odd + a[i] - '0';
        }
        else if(i%2==1) {
            even = even + a[i] - '0';
        }
    }
    int ans;
    int difference = (odd-even)%11;
    if(N%2==1) {
        if(difference<=0) {
            ans = 11+difference;
        }
        else{
            ans = difference;
        }
    }
    else{
        if(difference<=0) {
            ans = -difference;
        }
        else{
            ans = 11-difference;
        }
    }
    // ans = 11-difference;
    while(ans>=11) {
        ans = ans%11;
    }
    if(ans==10) {
        cout << "-1";
    }
    else{
        cout << ans;
    }
    return 0;
}
