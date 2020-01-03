/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    string N, M;
    cin >> N >> M;
    int lenn, lenm;
    lenn=N.length();
    lenm=M.length();
    char n[lenn];
    char m[lenm];
    for(int i=0; i<lenn; i++) {
        if(N.at(i)<96) {
            n[i] = N.at(i) + 32;
        }
        else{
            n[i] = N.at(i);
        }
    }
    for(int i=0; i<lenm; i++) {
        if(M.at(i)<96) {
            m[i] = M.at(i) + 32;
        }
        else{
            m[i] = M.at(i);
        }
    }
    int i=0;
    while(i<min(lenn,lenm)){
        if(n[i]<m[i]) {
            cout << "Smaller";
            return 0;
        }
        else if(n[i]>m[i]) {
            cout << "Greater";
            return 0;
        }
        i++;
    }
    if(lenn<lenm) {
        cout << "Smaller";
        return 0;
    }
    else if(lenn > lenm) {
        cout << "Greater";
        return 0;
    }
    cout << "Equal";
    
    

    return 0;
}
