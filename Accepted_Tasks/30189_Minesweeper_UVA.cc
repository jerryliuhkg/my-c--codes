#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    int H, W;
    cin >> H >> W;
    int counter = 1;
    while(H!=0 and W!=0) {
        char a[H][W];
        for(int i=0; i<H; i++) {
            for(int j=0; j<W; j++) {
                cin >> a[i][j];
            }
        }
        int storage = 0;
        if(counter!=1) {
            cout << endl;
        }
        for(int i=0; i<H; i++) {
            for(int j=0; j<W; j++) {
                storage = 0;
                if(a[i][j]=='*') {
                    continue;
                }
                else if(a[i][j]=='.') {
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
        cout << "Field #" << counter << ':' << endl;
        for(int i=0; i<H; i++) {
            for(int j=0; j<W; j++) {
                cout << a[i][j];
            }
            cout << endl;
        }
        cin >> H >> W;
        counter++;
    }
    return 0;
}
