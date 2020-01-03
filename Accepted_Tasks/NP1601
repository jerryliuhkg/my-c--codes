/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
#include <algorithm>

using namespace std;

int main()
{
    fstream fs;
    freopen("pencil.in","r",stdin);
    fs.open("pencil.out", fstream::in | fstream::out | fstream::app);
    double N;
    cin >> N;
    double a[2][3];
    int b[3];
    int times = 0;
    for(int i=0; i<3; i++) {
        times = 0;
        cin >> a[0][i];
        cin >> a[1][i];
        times = ceil(N/a[0][i]);
        b[i] = a[1][i]*times;
    }
    sort(b, b+3);
    fs << b[0];
    fs.close();

    return 0;
}
