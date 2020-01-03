#include <iostream>
using namespace std;

int main() {
    string a, b, c;
    cin >> a >> b >> c;
    int diffb = 0, diffc = 0;
    for(int i=0; i<6; i++) {
        if(a[i]>=b[i]) {
            diffb = diffb + a[i] - b[i];
        }
        else{
            diffb = diffb + b[i] - a[i];
        }
    }
    for(int i=0; i<6; i++) {
        if(a[i]>=c[i]) {
            diffc = diffc + a[i] - c[i];
        }
        else{
            diffc = diffc + c[i] - a[i];
        }
    }
    if(diffb<diffc) {
        cout << b;
    }
    else if(diffc<diffb) {
        cout << c;
    }
    else {
        cout << b << ' ' << c;
    }
	return 0;
}
