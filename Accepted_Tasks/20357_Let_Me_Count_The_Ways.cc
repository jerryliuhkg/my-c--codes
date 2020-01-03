#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;
    int counter = 0;
    for(int a=0; a<=ceil(N/50); a++) {
        for(int b=0; b<=ceil(N/25); b++) {
            for(int c=0; c<=ceil(N/10); c++) {
                for(int d=0; d<=ceil(N/5); d++) {
                    for(int e=0; e<=N; e++) {
                        if (a * 50 + b * 25 + c * 10 + d * 5 + e == N) {
                            counter++;
                        }
                    }
                }
            }
        }
    }
    if(counter==1) {
        cout << "There is only 1 way to produce " << N << " cents change.";
    }
    else {
        cout << "There are " << counter << " ways to produce " << N << " cents change.";
    }
	return 0;
}
