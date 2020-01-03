#include <iostream>
#include <string>
using namespace std;
int main() {
    string original, check;
    getline(cin, original);
    getline(cin, check);
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
}
