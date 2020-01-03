#include <iostream>
#include <utility>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    long long int N;
    cin >> N;
    long long int a[2][N];
    pair<long long int, long long int> p[N];
    for(long long int i=0; i<N; i++) {
        cin >> a[0][i];
        cin >> a[1][i];
        p[i].first = (a[0][i]*a[0][i]) + (a[1][i]*a[1][i]);
        p[i].second = i;
    }
    sort(p, p+N);
    for(long long int i=0; i<N; i++) {
        cout << a[0][p[i].second] << ' ' << a[1][p[i].second] << endl;
    }
    
    
    return 0;
}
