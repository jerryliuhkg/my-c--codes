/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <queue>
#include <list>
using namespace std;

int main()
{
    int N;
    cin >> N;
    queue<int> q;
    string command;
    int details;
    for(int i=0; i<N; i++) {
        cin >> command;
        if(command=="PUSH") {
            cin >> details;
            q.push(details);
        }
        else if(command=="FRONT") {
            if(q.empty()==true) {
                cout << "Empty" << endl;
            }
            else{
                cout << q.front() << endl;
            }
        }
        else if(command=="POP") {
            if(q.empty()==true) {
                cout << "Cannot pop" << endl;
            }
            else{
                q.pop();
            }
        }
        else if(command=="SIZE") {
            cout << q.size() << endl;
        }
    }
    return 0;
}
