#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("weather.txt", "r", stdin);
    string a;
    int pos;
    bool singledigit = true;
    getline(cin, a);
    int maxi = 0, mini = 100, storage;
    while(true) {
        if(cin.eof()) break;
        else{
            getline(cin, a);
            for(int i=0; i<a.length(); i++) {
                if(47<a[i] && a[i]<58) {
                    pos = i;
                    if(47<a[i+1] && a[i+1]<58) {
                        singledigit = false;
                    }
                    else{
                        singledigit = true;
                    }
                    break;
                }
            }
            if(singledigit==true) {
                storage = (a[pos] - '0');
            }
            else{
                storage = (a[pos]-'0')*10 + (a[pos+1]-'0');
            }
            if(storage>maxi) {
                maxi = storage;
            }
            if(storage<mini) {
                mini = storage;
            }
        }
    }
    cout << mini << ' ' << maxi;
    return 0;
}
