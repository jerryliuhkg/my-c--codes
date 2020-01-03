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
    bool add = false;
    int counter = 0;
    for(int i=0; i<N; i++) {
        add = true;
        for(int j=0; j<i; j++) {
            if(a[i]==a[j]) {
                add = false;
                break;
            }
        }
        if(add==true) {
            counter = counter + a[i];
        }
    }
    cout << counter;
}
