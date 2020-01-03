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
    freopen("magic.in","r",stdin);
    fs.open("magic.out", fstream::in | fstream::out | fstream::app);
    int N;
    cin >> N;
    int a[N][N];
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            a[i][j] = 0;
        }
    }
    a[0][int(floor(N/2))] = 1;
    int xloc, yloc;
    xloc = int(floor(N/2));
    yloc = 0;
    for(int i=2; i<=N*N; i++) {
        if(yloc==0 and xloc!=N-1) {
            a[N-1][xloc+1] = i;
            xloc = xloc + 1;
            yloc = N-1;
        }
        else if(xloc==N-1 and yloc!=0) {
            a[yloc-1][0] = i;
            yloc = yloc-1;
            xloc = 0;
        }
        else if(xloc==N-1 and yloc==0) {
            a[1][xloc] = i;
            yloc = 1;
        }
        else{
            if(a[yloc-1][xloc+1]==0) {
                a[yloc-1][xloc+1] = i;
                yloc = yloc-1;
                xloc = xloc+1;
            }
            else{
                a[yloc+1][xloc] = i;
                yloc = yloc + 1;
            }
        }
    }
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            fs << a[i][j] << ' ';
        }
        fs << endl;
    }
    fs.close();

    return 0;
}
