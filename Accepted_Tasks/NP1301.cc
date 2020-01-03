/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
int main()
{
    fstream fs;
    freopen("count.in","r",stdin);
    fs.open("count.out", fstream::in | fstream::out | fstream::app);
    long long int N;
    cin >> N;
    int base;
    cin >> base;
    int counter = 0;
    for(long long int i=1; i<=N; i++) {
        if(i%10==base) {
            counter++;
        }
        if(i>=10 and (i%100-i%10)/10==base) {
            counter++;
        }
        if(i>=100 and (i%1000-i%100)/100==base) {
            counter++;
        }
        if(i>=1000 and (i%10000-i%1000)/1000==base) {
            counter++;
        }
        if(i>=10000 and (i%100000-i%10000)/10000==base) {
            counter++;
        }
        if(i>=100000 and (i%1000000-i%100000)/100000==base) {
            counter++;
        }
        if(i>=1000000 and (i-i%1000000)/1000000==base) {
            counter++;
        }
    }
    fs << counter;
    fs.close();

    return 0;
}
