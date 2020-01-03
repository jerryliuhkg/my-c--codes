#include <iostream>
#include <utility>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    pair<int,int> a[N];
    for(int i=0; i<N; i++) {
        cin >> a[i].second;
        a[i].first = abs(a[i].second - K);
    }
    sort(a, a+N);
    if(a[0].first==a[1].first) {
        cout << a[1].second;
    }
    else{
        cout << a[0].second;
    }
    
    return 0;
}
