/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

bool check(char a[], int len, string ntc) {
    bool b = false;
    int leninput = ntc.length();
    
    for(int i=0; i<leninput; i++) {
        b = false;
        for(int j=0; j<len; j++) {
            if(ntc.at(i)==a[j]) {
                b = true;
                a[j] = ' ';
                break;
            }
        }
        if(b == false) {
            return false;
        }
    }
    return true;
}

int main()
{
    string N;
    cin >> N;
    int len = N.length();
    int M;
    cin >> M;
    string input;
    char a[len];
    for(int i=0; i<M; i++) {
        for(int i=0; i<len; i++) {
            a[i] = N.at(i);
        }
        cin >> input;
        if(check(a, len, input) == true) {
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}
