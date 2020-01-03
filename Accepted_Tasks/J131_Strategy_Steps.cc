#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int noofplayers;
    cin >> noofplayers;
    int a[noofplayers];
    int storage;
    int one, three, five;
    int end = 0;
    for(int i=0; i<noofplayers; i++) {
        a[i] = 0;
    }
    for(int i=1; i<=100; i++) {
        one = -2;
        three = -2;
        five = -2;
        for(int j=0; j<noofplayers; j++) {
            cin >> storage;
            if(storage==1 && one==-2) {
                one = j;
            }
            else if(storage==1 && one!=-2) {
                one = -1;
            }
            else if(storage==3 && three==-2) {
                three = j;
            }
            else if(storage==3 && three!=-2) {
                three = -1;
            }
            else if(storage==5 && five==-2) {
                five = j;
            }
            else if(storage==5 && five!=-2) {
                five = -1;
            }
        }
        if(one!=-1) {
            a[one] = a[one] + 1;
        }
        if(three!=-1) {
            a[three] = a[three] + 3;
        }
        if(five!=-1) {
            a[five] = a[five] + 5;
        }
        
        for(int j=0; j<noofplayers; j++) {
            if(a[j]>=N) {
                end = i;
                break;
            }
        }
        if(end!=0) {
            break;
        }
    }
    for(int j=0; j<noofplayers; j++) {
        if(a[j]>=N) {
            a[j] = N;
        }
    }
    cout << end << endl;
    for(int i=0; i<noofplayers; i++) {
        cout << a[i] << ' ';
    }
    return 0;
}
