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
    int loa;
    loa = 0;
    int counter;
    for(int i = 0; i<input; i++) {
        cin >> command;
        if(command == "PUSH") {
            cin >> details;
            if(loa == 0) {
                list[0] = details;
                loa++;
            }
            else if(loa == 1) {
                list[1] = list[0];
                list[0] = details;
                loa++;
            }
            else{
                counter = loa;
                for(int i = 1; i<=loa; i++) {
                    list[counter] = list[counter-1];
                    counter--;
                }
                list[0] = details;
                loa++;
            }
        }
        else if(command == "SIZE") {
            cout << loa << endl;
        }
        else if(command == "TOP") {
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
