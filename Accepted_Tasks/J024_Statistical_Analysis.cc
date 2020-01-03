#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <map>
#include <algorithm>
using namespace std;
int main()
{
    cout << fixed << setprecision(3);
    int N;
    cin >> N;
    int a[N];
    for(int i=0; i<N; i++) {
        cin >> a[i];
    }
    sort(a, a+N);
    double total = 0;
    for(int i=0; i<N; i++) {
        total = total + a[i];
    }
    cout << total/N << endl;
    if(N%2==1) {
        cout << a[(N-1)/2] << endl;
    }
    else{
        cout << setprecision(1);
        if ((a[N/2]+a[(N/2)-1])%2==1) {
            cout << (double(a[N/2])+double(a[(N/2)-1]))/2 << endl;
        }
        else{
            cout << int((a[N/2]+a[(N/2)-1])/2) << endl;
        }
    }
    map<int, int> map;
    for(int i=0; i<N; i++) {
        if(map.count(a[i])==0) {
            map[a[i]]=1;
        }
        else{
            map[a[i]] = map[a[i]] + 1;
            a[i] = 0;
        }
    }
    pair<int, int> pair[map.size()];
    int counter = 0;
    for(int i=0; i<map.size(); i++) {
        while(a[counter]==0) {
            counter++;
        }
        pair[i].first = map[a[counter]];
        pair[i].second = a[counter];
        counter++;
    }
    sort(pair, pair+map.size());
    cout << pair[map.size()-1].second;
    return 0;
}
