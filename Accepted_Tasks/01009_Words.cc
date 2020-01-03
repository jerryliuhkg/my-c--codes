#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    int b = 0;
    string a;
    while(true){
        a="";
        if(cin.eof()) break;
        else{
            if(b==0) {
                b = 1;
            }
            else {
                cout << endl;
            }
            getline(cin,a);
            for(int i=0; i<a.length(); i++) {
                if(a[i]==32) {
                    cout << a[i];
                }
                else if(a[i]<91 && a[i]>64) {
                    cout << a[i];
                }
                else if(a[i]>96 && a[i]<123) {
                    cout << a[i];
                }
            }
        }
    }
    return 0;
}
