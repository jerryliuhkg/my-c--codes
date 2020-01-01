#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

int main() {
    string input;
    cin >> input;
    int len = input.length();
    int moves[11][10] = {{0, 1, 2, 3, 2, 3, 4, 3, 4, 5},
        {1, 0, 1, 2, 1, 2, 3, 2, 3, 4},
        {1, 1, 0, 1, 2, 1, 2, 3, 2, 3},
        {2, 2, 1, 0, 3, 2, 1, 4, 3, 2},
        {2, 1, 2, 3, 0, 1, 2, 1, 2, 3},
        {2, 2, 1, 2, 1, 0, 1, 2, 1, 2},
        {3, 3, 2, 1, 2, 1, 0, 3, 2, 1},
        {3, 2, 3, 4, 1, 2, 3, 0, 1, 2},
        {3, 3, 2, 3, 2, 1, 2, 1, 0, 1},
        {4, 4, 3, 2, 3, 2, 1, 2, 1, 0},
        {0, 2, 1, 2, 3, 2, 3, 4, 3, 4}};
    int pos = 5;
    long long int move = 0;
    for(int i=0; i<len; i++) {
        if(input[i]>48 and input[i]<58) {
            move = move + moves[pos][input[i]-48];
            pos = input[i]-48;
        }
        else {
            if(pos==1 or pos==4 or pos==7 or pos==0) {
                move = move + moves[pos][0];
                pos = 0;
            }
            else {
                move = move + moves[pos][0];
                pos = 10;
            }
        }
    }
    cout << move << endl;
}
