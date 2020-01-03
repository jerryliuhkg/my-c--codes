#include <iostream>
using namespace std;
int main()
{
    int a[5][5];
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            cin >> a[i][j];
        }
    }
    double moves = 0;
    if(a[0][0]!=1) {
        moves = moves + 0.5;
    }
    if(a[0][1]!=1) {
        moves = moves + 0.5;
    }
    if(a[0][2]!=1) {
        moves = moves + 0.5;
    }
    if(a[0][3]!=1) {
        moves = moves + 0.5;
    }
    if(a[0][4]!=1) {
        moves = moves + 0.5;
    }
    if(a[1][0]!=1) {
        moves = moves + 0.5;
    }
    if(a[1][1]!=2) {
        moves = moves + 0.5;
    }
    if(a[1][2]!=2) {
        moves = moves + 0.5;
    }
    if(a[1][3]!=2) {
        moves = moves + 0.5;
    }
    if(a[1][4]!=1) {
        moves = moves + 0.5;
    }
    if(a[2][0]!=1) {
        moves = moves + 0.5;
    }
    if(a[2][1]!=2) {
        moves = moves + 0.5;
    }
    if(a[2][2]!=3) {
        moves = moves + 0.5;
    }
    if(a[2][3]!=2) {
        moves = moves + 0.5;
    }
    if(a[2][4]!=1) {
        moves = moves + 0.5;
    }
    if(a[3][0]!=1) {
        moves = moves + 0.5;
    }
    if(a[3][1]!=2) {
        moves = moves + 0.5;
    }
    if(a[3][2]!=2) {
        moves = moves + 0.5;
    }
    if(a[3][3]!=2) {
        moves = moves + 0.5;
    }
    if(a[3][4]!=1) {
        moves = moves + 0.5;
    }
    if(a[4][0]!=1) {
        moves = moves + 0.5;
    }
    if(a[4][1]!=1) {
        moves = moves + 0.5;
    }
    if(a[4][2]!=1) {
        moves = moves + 0.5;
    }
    if(a[4][3]!=1) {
        moves = moves + 0.5;
    }
    if(a[4][4]!=1) {
        moves = moves + 0.5;
    }
    if(int(moves*10)%10==5) {
        moves = moves + 0.5;
    }
    cout << moves;
}
