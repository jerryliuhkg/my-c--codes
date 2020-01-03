/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    pair<int, int> p[6];
    for(int i=0; i<6; i++) {
        cin >> p[i].first;
    }
    for(int i=0; i<6; i++) {
        cin >> p[i].second;
    }
    int N;
    cin >> N;
    int number;
    bool yesno = false;
    for(int i=0; i<N; i++) {
        cin >> number;
        yesno = false;
        for(int j=0; j<6; j++) {
            if(int((number-number%10)/10)==p[j].first) {
                for(int k=0; k<6; k++) {
                    if(number%10==p[k].second) {
                        yesno = true;
                        break;
                    }
                    else if(number%10==6 && p[k].second==9) {
                        yesno = true;
                        break;
                    }
                    else if(number%10==9 && p[k].second==6) {
                        yesno = true;
                        break;
                    }
                }
            }
            if(int((number-number%10)/10)==6 && p[j].first==9) {
                for(int k=0; k<6; k++) {
                    if(number%10==p[k].second) {
                        yesno = true;
                        break;
                    }
                    else if(number%10==6 && p[k].second==9) {
                        yesno = true;
                        break;
                    }
                    else if(number%10==9 && p[k].second==6) {
                        yesno = true;
                        break;
                    }
                }
            }
            if(int((number-number%10)/10)==9 && p[j].first==6) {
                for(int k=0; k<6; k++) {
                    if(number%10==p[k].second) {
                        yesno = true;
                        break;
                    }
                    else if(number%10==6 && p[k].second==9) {
                        yesno = true;
                        break;
                    }
                    else if(number%10==9 && p[k].second==6) {
                        yesno = true;
                        break;
                    }
                }
            }
        }
        if(yesno==false) {
            for(int j=0; j<6; j++) {
                if(int((number-number%10)/10)==p[j].second) {
                    for(int k=0; k<6; k++) {
                        if(number%10==p[k].first) {
                            yesno = true;
                            break;
                        }
                        else if(number%10==6 && p[k].first==9) {
                            yesno = true;
                            break;
                        }
                        else if(number%10==9 && p[k].first==6) {
                            yesno = true;
                            break;
                        }
                    }
                }
                else if(int((number-number%10)/10)==6 && p[j].second == 9) {
                    for(int k=0; k<6; k++) {
                        if(number%10==p[k].first) {
                            yesno = true;
                            break;
                        }
                        else if(number%10==6 && p[k].first==9) {
                            yesno = true;
                            break;
                        }
                        else if(number%10==9 && p[k].first==6) {
                            yesno = true;
                            break;
                        }
                    }
                }
                else if(int((number-number%10)/10)==9 && p[j].second == 6) {
                    for(int k=0; k<6; k++) {
                        if(number%10==p[k].first) {
                            yesno = true;
                            break;
                        }
                        else if(number%10==6 && p[k].first==9) {
                            yesno = true;
                            break;
                        }
                        else if(number%10==9 && p[k].first==6) {
                            yesno = true;
                            break;
                        }
                    }
                }
            }
        }
        if(yesno==true) {
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    
    
    return 0;
}
