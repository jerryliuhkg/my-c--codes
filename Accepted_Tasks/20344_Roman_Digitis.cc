#include <iostream>
using namespace std;
int main() {
    int N, storage;
    int i=0, v=0, x=0, l=0, c=0;
    while(1) {
        i=0;
        v=0;
        x=0;
        l=0;
        c=0;
        cin >> storage;
        N = storage;
        if(storage==0) {
            break;
        }
        for(int j=1; j<=storage; j++) {
            N = j;
            if(N==100) {
                c++;
                N = N - 100;
            }
            if(N>=90) {
                x++;
                c++;
                N = N - 90;
            }
            if(N>=50) {
                l++;
                N=N-50;
            }
            if(N>=40) {
                x++;
                l++;
                N = N - 40;
            }
            while(N>=10) {
                x++;
                N = N - 10;
            }
            if(N>=9) {
                i++;
                x++;
                N = N - 9;
            }
            while(N>=5) {
                v++;
                N = N - 5;
            }
            if(N>=4) {
                i++;
                v++;
                N = N - 4;
            }
            while(N>=1) {
                i++;
                N = N - 1;
            }
        }
        cout << storage << ": " << i << " i, " << v << " v, " << x << " x, " << l << " l, " << c << " c" << endl;
    }
}
