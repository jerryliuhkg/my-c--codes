/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    cout << fixed << setprecision(8);
    int N, M;
    cin >> N >> M;
    double a, b;
    a = (N/2);
    b = (N/4);
    if(N%4==1) {
        a = a + 0.5;
        b = b + 0.25;
    }
    else if(N%4==2) {
        b = b + 0.5;
    }
    else if(N%4==3) {
        a = a + 0.5;
        b = b + 0.75;
    }
    a = a*M;
    b = b*b*3.14159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214808651328230664709384460955058223172535940812848111745028410270193852110555964462294895493038196442881097566593344612847564823378678316527120;
    cout << (a+b);

    return 0;
}
