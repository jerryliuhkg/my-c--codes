#include <iostream>
using namespace std;

int main() {
    int a = 0; // num of stones game given and always used
    int b = 0; // num of stones game given and was latter used
    int c = 0; // num of stones bought and always used
    int d = 0; // num of stones bought and was latter used
    int e;
    cin >> e;
    int command, storage, left;
    for(int i=0; i<e; i++) {
        cin >> command;
        if(command==1) {
            cin >> storage;
            c=c+storage;
            d=d+storage;
        }
        else if(command==2) {
            cin >> storage;
            a=a+storage;
            b=b+storage;
        }
        else if(command==3) {
            cin >> storage;
            left = storage;
            while(a>0) {
                if(left==0) {
                    break;
                }
                else {
                    a--;
                    left--;
                }
            }
            d=d-left;
            left = storage;
            while(c>0) {
                if(left==0) {
                    break;
                }
                else {
                    c--;
                    left--;
                }
            }
            b=b-left;
        }
        else if(command==4) {
            cout << d << ' ' << c << endl;
        }
    }
	return 0;
}
