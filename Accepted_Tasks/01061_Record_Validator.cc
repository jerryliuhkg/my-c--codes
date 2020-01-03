#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    string N;
    getline(cin, N);
    int len;
    len = N.length();
    bool empty = true;
    int noofcommas = 0;
    int noofempty = 0;
    for(int i=0; i<len; i++) {
        if(N.at(i)==44 and empty == true) {
            noofcommas++;
            noofempty++;
            empty = true;
        }
        else if(N.at(i)==44) {
            noofcommas++;
            empty = true;
        }
        else if(N.at(i)==32) {
            empty = true;
        }
        else{
            empty = false;
        }
    }
    if(N.at(len-1)==44) {
        noofempty++;
    }
    else if(N.at(len-1)==32 and empty == true) {
        noofempty++;
    }
    if(noofcommas!=5) {
        cout << "Invalid";
    }
    else{
        cout << noofempty;
    }
    return 0;
}
