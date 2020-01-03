#include <iostream>
using namespace std;

int main() {
    long long int N;
    cin >> N;
    long long int p = 0;
    long long int i;
    for(i = N; i>=0; i--) {
        p = i;
        if(p%3==0) {
            p /= 3;
        }
        while(p%2==0) {
            p /= 2;
        }
        if(p==1) {
            p = i;
            break;
        }
    }
    if(i%3==0) {
        cout << '3';
        i /=3;
    }
    while(i!=1) {
        cout << '2';
        i /=2;
    }
}
