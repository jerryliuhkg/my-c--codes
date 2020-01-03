/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;
    cout << N;
    cout << '=';
    int k=0;
    int f;
    while(N>1) {
        for(int i=2;i<=ceil(sqrt(N));i++) {
            while(N%i==0){
                if(k==0) {
                    k++;
                }
                else{
                    cout << '*';
                }
                f=i;
                N = N/i;
                cout << i;
            }
        }
        if(N!=1&&k!=1){
            cout << N;
            return 0;
        }
        else if(N!=1&&k!=0) {
            cout << '*' << N;
            return 0;
        }
    }

    return 0;
}
