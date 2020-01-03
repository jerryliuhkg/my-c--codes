#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int last[N];
    int c[3][N]; // c[0][i] = cost, c[1][i] = start, c[2][i] = end, 
    int total=0;
    int thatweek=0;
    int a, b;
    for(int i=0; i<N; i++) {
        cin >> c[0][i];
        cin >> c[1][i];
        cin >> c[2][i];
        last[i] = c[2][i];
    }
    sort(last, last+N);
    int highest = last[N-1];
    for(int i=1; i<=highest; i++) {
        thatweek = 0;
        for(int j=0; j<N; j++) {
            if(c[1][j]<=i and c[2][j]>=i) {
                thatweek  = thatweek + c[0][j];
            }
        }
        if(thatweek>total) {
            total = thatweek;
        }
    }
    cout << total;
    return 0;
}
