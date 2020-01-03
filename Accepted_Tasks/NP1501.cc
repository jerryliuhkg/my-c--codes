/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    freopen("coin.in", "r", stdin);
    fstream fs;
    fs.open("coin.out", fstream::in | fstream::out | fstream::app);
    int N, total = 0;
    cin >> N;
    int add = 1;
    int counter = 0;
    for(int i=0; i<N; i++) {
        total = total + add;
        counter++;
        if(counter==add) {
            counter = 0;
            add++;
        }
    }
    
    fs << total;
    fs.close();
}
