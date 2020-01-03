#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    if(a*e - b*d !=0) {
        cout << (c*e - b*f)/(a*e - b*d) << ' ';
        cout << (a*f - d*c)/(a*e - b*d);
        return 0;
    }
    if((a==0 and b==0 and c!=0) || (d==0 and e==0 and f!=0)) {
        cout << "no solution";
        return 0;
    }
    if((a==0 && b==0 && c==0) || (d==0 && e==0 && f==0)) {
        cout << "many solutions";
        return 0;
    }
    if((c*e - b*f != 0) || (a*f - d*c != 0)) {
        cout << "no solution";
    }
    else {
        cout << "many solutions";
    }
    

    return 0;
}
