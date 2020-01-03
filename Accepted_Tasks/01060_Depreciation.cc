/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    cout << fixed << setprecision(2);
    long double amount, rate;
    int days;
    cin >> amount >> rate >> days;
    long double loss = 0.0;
    for(int i=0; i<days; i++) {
        loss = amount*(rate/100.0);
        loss = loss*100;
        loss = floor(loss);
        loss = loss/100;
        amount = amount - loss;
        loss = 0.0;
    }
    cout << amount;
    
    return 0;
}
