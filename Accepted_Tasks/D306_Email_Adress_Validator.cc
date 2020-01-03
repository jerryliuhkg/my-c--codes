/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    string N;
    cin >> N;
    int len;
    len = N.length();
    bool yesno = false;
    int atplace;
    for(int i=0; i<len; i++) {
        if(N.at(i)=='@'&&yesno==true) {
            yesno = false;
            break;
        }
        else if(N.at(i)=='@'&&i!=0&&i!=len-1) {
            yesno = true;
            atplace = i;
        }
    }
    if(yesno == false) {
        cout << "Invalid";
        return 0;
    }
    int counter = 0;
    bool dotcheck = false;
    char check;
    yesno = true;
    while(N.at(counter)!='@') {
        check = N.at(counter);
        if(check==43) {
            yesno = true;
            dotcheck = false;
        }
        else if(check==46) {
            if(counter==0) {
                yesno = false;
                break;
            }
            else if(counter==atplace-1) {
                yesno = false;
                break;
            }
            else if(dotcheck == false) {
                dotcheck = true;
                yesno = true;
            }
            else{
                yesno = false;
                break;
            }
        }
        else if(check>96 and check<123) {
            yesno = true;
            dotcheck = false;
        }
        else if(check>64 and check <91) {
            yesno = true;
            dotcheck = false;
        }
        else if(check>47 and check<58) {
            yesno = true;
            dotcheck = false;
        }
        else {
            yesno = false;
            break;
        }
        counter++;
    }
    if(yesno == false) {
        cout << "Invalid";
        return 0;
    }
    counter++;
    dotcheck = false;
    bool havedot = false;
    bool dashcheck = false;
    for(int i=counter; i<len; i++) {
        check = N.at(i);
        if(check>96 and check<123) {
            yesno = true;
            dashcheck = false;
            dotcheck = false;
            continue;
        }
        else if(check>64 and check <91) {
            yesno = true;
            dashcheck = false;
            dotcheck = false;
            continue;
        }
        else if(check>47 and check<58) {
            yesno = true;
            dashcheck = false;
            dotcheck = false;
            continue;
        }
        else if(check==46) {
            havedot = true;
            if(i==counter) {
                yesno = false;
                break;
            }
            else if(i==len-1) {
                yesno = false;
                break;
            }
            else if(dashcheck==true) {
                yesno = false;
                break;
            }
            else if(dotcheck == false) {
                dotcheck = true;
                yesno = true;
                dashcheck = true;
                continue;
            }
            else if(dotcheck == true){
                yesno = false;
                break;
            }
            
        }
        else if(check == 45) {
            if(dotcheck==true) {
                yesno = false;
                break;
            }
            dashcheck = true;
            continue;
        }
        else {
            yesno = false;
            break;
        }
    }
    if(havedot==false) {
        cout << "Invalid";
        return 0;
    }
    else if(yesno==false) {
        cout << "Invalid";
    }
    else{
        cout << "Valid";
    }
    
    return 0;
}
