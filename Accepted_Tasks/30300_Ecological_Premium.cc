/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << fixed << setprecision(0);
    int N, K;
    cin >> N;
    int S, A, E;
    double ans;
    double total = 0;
    for(int i=0; i<N; i++) {
        total = 0;
        cin >> K;
        for(int i=0; i<K; i++) {
            cin >> S >> A >> E;
            ans = (double(S)/double(A)*double(E))*A;
            total = total + ans;
        }
        cout << total << endl;
    }

    return 0;
}
