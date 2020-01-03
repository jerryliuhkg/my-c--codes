#include <iostream>
#include <utility>
#include <cmath>
#include <algorithm>
#include <fstream>

using namespace std;

int main()
{
    fstream fs;
    freopen("math.in","r",stdin);
    fs.open("math.out", fstream::in | fstream::out | fstream::app);
    long long int N, M;
    cin >> N >> M;
    long long int ans;
    ans = N*M-N-M;
    fs << ans;
    fs.close();
    
    return 0;
}
