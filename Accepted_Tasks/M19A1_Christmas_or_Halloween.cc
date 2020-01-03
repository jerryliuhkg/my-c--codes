#include <iostream>
using namespace std;

int main() {
    int o, d;
    string oct, dec;
    cin >> oct >> o >> dec >> d;
    if((o%10+(o-o%10)/10*8)==d) {
        cout << "April's Fool";
    }
    else if((o%10+(o-o%10)/10*8)<d) {
        cout << "Christmas";
    }
    else {
        cout << "Halloween";
    }
	return 0;
}
