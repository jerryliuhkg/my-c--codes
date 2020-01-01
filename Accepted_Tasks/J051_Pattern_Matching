#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int orig[n][n];
    long long int orito = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin >> orig[i][j];
            orito = orito + orig[i][j];
        }
    }
    int phot[m][m];
    for(int i=0; i<m; i++) {
        for(int j=0; j<m; j++) {
            cin >> phot[i][j];
        }
    }
    int x, y;
    long long int photo=0, diff, minDiff=100000000000;
    for(int i=0; i<=m-n; i++) {
        for(int j=0; j<=m-n; j++) {
            photo = 0;
            for(int k=i; k<i+n; k++) {
                for(int l=j; l<j+n; l++) {
                    photo = photo + phot[k][l];
                }
            }
            diff = abs(orito-photo);
            if(diff<minDiff) {
                minDiff = diff;
                x = j+1;
                y = i+1;
            }
        }
    }
    cout << y << ' ' << x;
	return 0;
}
