#include <iostream>
using namespace std;

int main() {
	int N, M, Q;
	cin >> N >> M >> Q;
	bool a[M][N];
	for(int i=0; i<N; i++) {
	    for(int j=0; j<M; j++) {
	        a[j][i] = false;
	    }
	}
	for(int i=0; i<N; i++) {
	    a[0][i] = true;
	}
	int o, d, p;
	int pn;
	for(int i=0; i<Q; i++) {
	    cin >> o >> d >> p;
	    for(int j=0; j<p; j++) {
	       cin >> pn;
	       if(a[o-1][pn-1]==true) {
	           a[d-1][pn-1] = true;
	       }
	    }
	}
	bool all = true;
	for(int i=0; i<M; i++) {
	    all = true;
	    for(int j=0; j<N; j++) {
	        if(a[i][j]==false) {
	            all = false;
	            break;
	        }
	    }
	    if(all==true) {
	        cout << i+1 << endl;
	    }
	}
}
