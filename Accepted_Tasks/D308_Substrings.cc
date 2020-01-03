#include <iostream>
#include <string>
using namespace std;
int main() {
    string original, check;
    cin >> original >> check;
    int lenoriginal = original.length();
    int lencheck = check.length();
    int times = 0;
    bool ok = false;
    for(int i=0; i<lenoriginal; i++) {
        ok = false;
        for(int j=0; j<lencheck; j++) {
            if(i+j==lenoriginal) {
                ok = false;
                break;
            }
            else if(original.at(i+j)==check.at(j)) {
                ok = true;
            }
            else{
                ok = false;
                break;
            }
        }
        if(ok==true) {
            times++;
        }
    }
    cout << times << endl;
    int pos = 0;
    times = 0;    
    for(int i=0; i<lenoriginal; i++) {
        if(original.at(i)==check.at(pos)) {
            pos++;
        }
        else if(original.at(i)==check.at(0) and pos == 1) {
            pos = 1;
        }
        else{
            pos = 0;
        }
        if(pos==lencheck) {
            times++;
            pos = 0;
        }
    }
    cout << times;
}
