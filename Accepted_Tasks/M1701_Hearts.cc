#include <bits/stdc++.h>
using namespace std;

int main()
{
    long double a, b, c, d;
    cin >> a >> b >> c >> d;
    a-=d*2;
    if(a<0) a=0;
    long long int person = ceil(a/2)+b+c+d*2;
    cout << person;
    
    return 0;
}
