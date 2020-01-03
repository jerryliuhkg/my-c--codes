#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    string input;
    int N;
    cin >> input >> N;
    int ans;
    if(input=="OCT") {
        if(N%10>=8) {
            cout << "No solution";
        }
        else{
            ans = ((N-(N%10))/10*8)+(N%10);
            if(ans>31) {
                cout << "No solution";
            }
            else if(ans<10) {
                cout << "DEC 0" << ans;
            }
            else{
                cout << "DEC " << ans;
            }
        }
    }
    else if(input=="DEC") {
        ans = (N/8)*10+(N%8);
        if(ans%10>=8) {
            cout << "No solution";
        }
        else if(ans>31) {
            cout << "No solution";
        }
        else if(ans<10) {
            cout << "OCT 0" << ans;
        }
        else{
            cout << "OCT " << ans;
        }
    }
    
    
    
    return 0;
}
