#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    long long int N;
    long long int ans = 0;
    long long int counter = 1;
    cin >> N;
    for(int i=0; i<=58; i++) {
        ans = ans + (N/(2*counter)*counter);
        if(N%(2*counter)>=counter) {
            ans = ans + (N%counter) + 1;
        }
        counter = counter * 2;
    }
    cout << ans;
}
