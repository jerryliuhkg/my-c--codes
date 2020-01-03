#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int arrows;
    cin >> arrows;
    long double width;
    cin >> width;
    long double x, y;
    int points = 0;
    for(int j=0; j<arrows; j++) {
        cin >> x >> y;
        long int cenrad = x*x*10000+y*y*10000;
        long double rad = sqrt(cenrad) - abs(width)*100;
        for(int i=1; i<=10; i++) {
            if(rad<=4000*i) {
                points = points + 11-i;
                break;
            }
        }
    }
    cout << points;
	return 0;
}
