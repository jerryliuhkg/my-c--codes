/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    string a[N];
    int counter = 0;
    while(counter<N) {
        char d1, d2, d3, sn1, sn2, s1, s2, s3, s4;
        string message;
        cin >> d1 >> d2 >> d3 >> sn1 >> sn2 >> s1 >> s2 >> s3 >> s4;
        getline(cin, message);
        int lenmessage = message.length();
        int ascii = 0;
        for(int i=0; i<lenmessage; i++) {
            ascii = ascii + message.at(i);
        }
        int pos = (sn1-'0')*10 + (sn2-'0');
        int asciitotal = (s1-'0')*1000 + (s2-'0')*100 + (s3-'0')*10 + (s4-'0');
        if(ascii==asciitotal) {
            a[pos-1] = message;
            counter++;
        }
    }
    for(int i=0; i<N; i++) {
        cout << a[i];
    }
    
    return 0;
}
