#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int counter = 1;
    if(N%2==1) {
        cout << M << ' ';
        for(int i=0; i<(N-1)/2; i++) {
            if(counter==M || -(counter)==M) {
                i--;
                counter++;
                continue;
            }
            else {
                cout << counter << ' ' << -(counter) << ' ';
                counter++;
            }
        }
    }
    else if(N%2==0) {
        if(M!=0) {
            cout << M << ' ' << '0' << ' ';
            for(int i=0; i<(N/2)-1; i++) {
                if(counter==M || -(counter)==M) {
                    i--;
                    counter++;
                    continue;
                }
                else {
                    cout << counter << ' ' << -(counter) << ' ';
                    counter++;
                }
            }
        }
        else if(M==0) {
            for(int i=0; i<N/2; i++) {
                cout << counter << ' ' << -(counter) << ' ';
                counter++;
            }
        }
    }
    
	return 0;
}
