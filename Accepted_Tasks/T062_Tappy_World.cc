#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    long long int N;
    cin >> N;
    long long int a[N];
    for(long long int i=0; i<N; i++) {
        a[i] = 0;
    }
    long long int M;
    cin >> M;
    long long int left, right;
    long long int change;
    for(long long int i=0; i<M; i++) {
        cin >> change >> left >> right;
        a[left-1] += change;
        a[right] -= change;
    }
    long long int value = 0;
    for(long long int i=0; i<N; i++) {
        value = value + a[i];
        cout << value << endl;
    }
    return 0;
}
