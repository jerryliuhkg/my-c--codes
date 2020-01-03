#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    long long int n;
    cin >> n;
    long long int counter = 0;
    long long int inter = 0;
    bool square = false;
    for(long long int i=1; i<=floor(sqrt(n)); i++) {
        if(n%i==0 && i*i!=n) {
            counter = counter + 2;
        }
        if((n-i)%(2*i-1)==0 && i>1 && square==false) {
            if(i*i+(i-1)*(i-1)==n) {
                inter++;
                square==true;
            }
            else {
                if(i<(n-i)/(2*i-1)+1) {
                    inter = inter + 2;
                }
            }
        }
    }
    if(ceil(sqrt(n))*ceil(sqrt(n))==n) {
        counter++;
    }
    // if((n-int(floor(sqrt(n))+1))%(2*int(floor(sqrt(n))))==0) {
    //     inter++;
    // }
    cout << counter << ' ' << inter;
}
