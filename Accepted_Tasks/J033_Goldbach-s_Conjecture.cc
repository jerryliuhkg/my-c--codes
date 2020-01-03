#include <iostream>
#include <cmath>
using namespace std;
int main() {
    long long int N;
    cin >> N;
    if(N==4) {
        cout << "2 2";
    }
    else if(N%2==1) {
        int n1 = N-2;
        bool prime = true;
        for(int i=2; i<=ceil(sqrt(n1)); i++) {
            if(n1%i==0) {
                prime = false;
                break;
            }
        }
        if(prime==true) {
            cout << "2 " << n1;
        }
        else{
            cout << "Impossible";
        }
    }
    else{
        bool prime = true;
        for(int i=ceil(N/2); i>2; i = i - 2) {
            if(i==1) {
                cout << "Impossible";
                break;
            }
            if(i%2==0) {
                i++;
            }
            bool prime = true;
            for(int j=2; j<=ceil(sqrt(i)); j++) {
                if(i%j==0) {
                    prime = false;
                    break;
                }   
            }   
            if(prime==false) {
                continue;
            }   
            int n2 = N-i;
            for(int j=2; j<=ceil(sqrt(n2)); j++) {
                if(n2%j==0) {
                    prime = false;
                    break;
                }   
            }   
            if(prime==false) {
                continue;
            }   
            else{
                if(n2>=i) {
                    cout << i << ' ' << n2; 
                }   
                else{
                    cout << n2 << ' ' << i;
                }   
                break;
            }   
        }   
    }   
}
