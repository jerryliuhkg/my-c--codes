/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int a[N];
    for(int i=0; i<N; i++) {
        a[i] = i+1;
    }
    int counter = -1;
    for(int i=0; i<N-1; i++) {
        counter++;
        if(counter>=N) {
            counter = counter - N;
        }
        while(a[counter] == 0) {
            counter++;
            if(counter>=N) {
                counter = counter - N;
            }
        }
        counter++;
        if(counter>=N) {
            counter = counter - N;
        }
        while(a[counter] == 0) {
            counter++;
            if(counter>=N) {
                counter = counter - N;
            }
        }
        if(counter>=N) {
            counter=-N;
        }
        cout << a[counter] << ' ';
        a[counter] = 0;
    }
    cout << endl;
    for(int i=0; i<N; i++) {
        if(a[i] != 0) {
            cout << a[i];
            break;
        }
    }

    return 0;
}
