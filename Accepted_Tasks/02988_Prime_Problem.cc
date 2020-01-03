#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int low, high, base;
    cin >> low >> high >> base;
    bool yesno = false;
    int digitalroot = 0;
    if(low==1) {
        low = 2;
    }
    int a[high-low+1];
    int counter = 0;
    for(int i=low; i<=high; i++) {
        yesno = true;
        if(i==2) {
            a[counter] = 2;
            counter++;
        }
        for(int j=2; j<=ceil(sqrt(i)); j++) {
            if(i%j==0) {
                yesno = false;
                break;
            }
        }
        if(yesno==true) {
            a[counter] = i;
            counter++;
        }
    }
    for(int i=0; i<counter; i++) {
        digitalroot = a[i]%10+((a[i]%100-a[i]%10)/10)+((a[i]%1000-a[i]%100)/100)+((a[i]%10000-a[i]%1000)/1000)+((a[i]%100000-a[i]%10000)/10000);
        if(digitalroot==base) cout << a[i] << endl;
    }
    cout << "Finish!";
}
