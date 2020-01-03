/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int N;
    cin >> N;
    char o[25][80];
    char letter;
    int e, f, g, h;
    for(int i=0; i<25; i++) {
        for(int j=0; j<80; j++) {
            o[i][j] = ' ';
        }
    }
    string a;
    getline(cin, a);
    for(int i=0; i<N; i++) {
        getline(cin, a);
        int pos = 0;
        letter = a[0];
        pos = pos + 2;
        int len = a.length();
        if(a[pos+1]==' ') {
            e = a[pos] - '0';
            pos = pos + 2;
        } else{
            e = 10*(a[pos] - '0') + a[pos+1] - '0';
            pos = pos + 3;
        }
        if(a[pos+1]==' ') {
            f = a[pos] - '0';
            pos = pos + 2;
        } else{
            f = 10*(a[pos] - '0') + a[pos+1] - '0';
            pos = pos + 3;
        }
        if(a[pos+1]==' ') {
            g = a[pos] - '0';
            pos = pos + 2;
        } else{
            g = 10*(a[pos] - '0') + a[pos+1] - '0';
            pos = pos + 3;
        }
        if(pos+1==len) {
            h = a[pos] - '0';
            pos = pos + 2;
        } else{
            h = 10*(a[pos] - '0') + a[pos+1] - '0';
            pos = pos + 3;
        }
        for(int y=f; y<=h; y++) {
            for(int x=e; x<=g; x++) {
                if(y==f || y==h || x==e || x==g) {
                    o[y][x] = letter;
                }
                else{
                    o[y][x] = ' ';
                }
            }
        }
    }
    for(int i=0; i<25; i++) {
        for(int j=0; j<80; j++) {
            cout << o[i][j];
        }
        cout << endl;
    }

    return 0;
}
