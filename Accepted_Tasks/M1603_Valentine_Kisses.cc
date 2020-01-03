#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main() {
    int N;
    cin >> N;
    string a;
    int len;
    bool in;
    int count = 0;
    int counter = 0;
    for(int i=0; i<=N; i++) {
        counter = 0;
        getline(cin, a);
        len = a.length();
        in = false;
        for(int j=0; j<len; j++) {
            if(a[j]=='<') {
                in = false;
                count = count + counter;
                counter = 0;
            }
            else if(a[j]=='>') {
                in = true;
                counter = 0;
            }
            else if(in==true and a[j]=='3') {
                counter++;
            }else{
                in =false;
                counter=0;
            }
        }
    }
    cout << count;
}
