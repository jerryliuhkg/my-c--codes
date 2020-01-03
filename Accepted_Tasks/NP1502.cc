/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    fstream fs;
    freopen("mine.in","r",stdin);
    fs.open("mine.out", fstream::in | fstream::out | fstream::app);
    int H, W;
    cin >> H >> W;
    char a[H][W];
    for(int i=0; i<H; i++) {
        for(int j=0; j<W; j++) {
            cin >> a[i][j];
        }
    }
    int storage = 0;
    for(int i=0; i<H; i++) {
        for(int j=0; j<W; j++) {
            storage = 0;
            if(a[i][j]=='*') {
                continue;
            }
            else if(a[i][j]=='?') {
                a[i][j] = '0';
                if(i-1>=0 and j+1<W and a[i-1][j+1]=='*') {
                    a[i][j] = a[i][j] + 1;
                }
                if(j+1<W and a[i][j+1]=='*') {
                    a[i][j] = a[i][j] + 1;
                }
                if(j+1<W and i+1<H and a[i+1][j+1]=='*') {
                    a[i][j] = a[i][j] + 1;
                }
                if(i+1<H and a[i+1][j]=='*') {
                    a[i][j] = a[i][j] + 1;
                }
                if(i+1<H and j-1>=0 and a[i+1][j-1]=='*') {
                    a[i][j] = a[i][j] + 1;
                }
                if(j-1>=0 and a[i][j-1]=='*') {
                    a[i][j] = a[i][j] + 1;
                }
                if(j-1>=0 and i-1>=0 and a[i-1][j-1]=='*') {
                    a[i][j] = a[i][j] + 1;
                }
                if(i-1>=0 and a[i-1][j]=='*') {
                    a[i][j] = a[i][j] + 1;
                }
            }
        }
    }
    for(int i=0; i<H; i++) {
        for(int j=0; j<W; j++) {
            fs << a[i][j];
        }
        fs << endl;
    }
    fs.close();
    
    
    return 0;
}
