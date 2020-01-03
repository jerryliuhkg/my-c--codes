#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    int a[N];
    for(int i=0; i<N; i++) {
        cin >> a[i];
    }
    long long int counter = 0;
    int storage;
    sort(a, a+N);
    for(int i=1; i<N; i++) {
        storage = a[i] + a[i-1];
        a[i] = 0;
        a[i-1] = 0;
        counter = counter + storage;
        for(int j=i+1; j<N; j++) {
            if(j==N-1) {
                if(a[j]>storage) {
                    a[j-1] = storage;
                }
                else {
                    a[j-1] = a[j];
                    a[j] = storage;
                }
                break;
            }
            else if(a[j]>storage) {
                a[j-1] = storage;
                break;
            }
            else{
                a[j-1] = a[j];
                a[j] = 0;
            }
        }
    }
    cout << counter;
	return 0;
}
