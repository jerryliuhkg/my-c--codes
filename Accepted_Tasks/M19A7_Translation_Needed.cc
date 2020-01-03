#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans, storage;
    cin >> ans;
    for(int i=1; i<n; i++) {
        cin >> storage;
        ans = ans ^ storage;
    }
    cout << (ans * ans);
    return 0;
}
