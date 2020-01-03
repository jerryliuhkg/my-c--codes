#include <iostream>
using namespace std;
void sort(int l, int r) {
    if(l!=r) {
        if((r-l+1)%2==0) {
            if(l!=1) {
                sort(l, (r/2)+(l/2));
                sort((r/2)+(l/2)+1, r);
                cout << l << ' ' << (r/2)+(l/2) << ' ' << (r/2)+(l/2)+1 << ' ' << r << endl;
                return;
            }
            else{
                sort(l, r/2);
                sort((r/2)+1, r);
                cout << l << ' ' << r/2 << ' ' << (r/2)+1 << ' ' << r << endl;
                return;
            }
        }
        else{
            if(l%2==1) {
                sort(l, (r/2)+(l/2)+1);
                sort((r/2)+(l/2)+2, r);
                cout << l << ' ' << (r/2)+(l/2)+1 << ' ' << (r/2)+(l/2)+2 << ' ' << r << endl;
                return;
            }
            else {
                sort(l, (r/2)+(l/2));
                sort((r/2)+(l/2)+1, r);
                cout << l << ' ' << (r/2)+(l/2) << ' ' << (r/2)+(l/2)+1 << ' ' << r << endl;
            }
        }
    }
    else {
        return;
    }
}

int main() {
    int N;
    cin >> N;
    int l = 1, r = N;
    sort(l, r);
    
	return 0;
}
