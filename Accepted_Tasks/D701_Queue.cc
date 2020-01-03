#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main() {
    int input, details;
    cin >> input;
    string command;
    int list[input];
    for(int j=0; j<input; j++) {
        list[j] = 0;
    }
    int loa;
    loa = 0;
    for(int i = 0; i<input; i++) {
        cin >> command;
        if(command == "PUSH") {
            cin >> details;
            list[loa] = details;
            loa++;
        }
        else if(command == "SIZE") {
            cout << loa << endl;
        }
        else if(command == "FRONT") {
            if(loa==0) {
                cout << "Empty" << endl;
            }
            else{
                cout << list[0] << endl;
            }
        }
        else if(command == "POP") {
            if(loa==0) {
                cout << "Cannot pop" << endl;
            }
            else if(loa==1) {
                list[0] = 0;
                loa--;
            }
            else{
                for(int i = 0; i<loa-1; i++) {
                    list[i] = list[i+1];
                }
                list[loa] = 0;
                loa--;
            }
        }
    }
}
