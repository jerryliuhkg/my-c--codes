#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int a[N];
    for(int i=0; i<N; i++) {
        cin >> a[i];
    }
    int piviot = a[N-1];
    int piviotPosition = 0;
    for(int i=0; i<N-1; i++) {
        if(a[i]<=piviot) {
            piviotPosition++;
        }
    }
    int j=0;
    int storage = 0;
    for(int i=0; i<N-1; i++) {
        if(a[i]<=piviot) {
            storage = a[i];
            a[i] = a[j];
            a[j] = storage;
            j++;
        }
    }
    a[N-1] = a[piviotPosition];
    a[piviotPosition] = piviot;
    for(int i=0; i<N; i++) {
        cout << a[i] << ' ';
    }
}
