#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    int pos; 
    char key;
    string input;
    cin >> pos >> key;
    getline(cin, input);
    getline(cin, input);
    // cout << input.length() << endl;
    pair <int, char> p[26];
    for(int i=0; i<26; i++) {
        p[i].first = 0;
        p[i].second = char(i+97);
    }
    int len = input.length();
    for(int i=0; i<len; i++) {
        if(64<int(input[i]) and int(input[i])<91) {
            p[int(input[i])-65].first++;
            // cout << int(input[i]) << endl;
        }
        else if(96<int(input[i]) and int(input[i])<123) {
            p[int(input[i])-97].first++;
            // cout << int(input[i]) << endl;
        }
    }
    int swapv;
    char swapc;
    for(int i=0; i<26; i++) {
        for(int j=1; j<26; j++) {
            if(p[j].first>p[j-1].first) {
                swapv = p[j].first;
                swapc = p[j].second;
                p[j].first = p[j-1].first;
                p[j].second = p[j-1].second;
                p[j-1].first = swapv;
                p[j-1].second = swapc;
            }
        }
    }
    for(int i=0; i<26; i++) {
        // cout << p[i].second << ' ' << p[i].first << endl;
    }
    int posnew = int(p[pos-1].second)-96;
    // cout << posnew << ' ';
    int posold = int(key)-96;
    // cout << posold << endl;
    int diff;
    if(posnew==posold) {
        cout << input;
        return 0;
    }
    else if(posold>posnew) {
        diff = posold-posnew;
    }
    else {
        diff = 26-posnew + posold;
    }
    // cout << diff << endl;
    char str[len];
    for(int i=0; i<len; i++) {
        str[i] = input[i];
    }
    for(int j=0; j<diff; j++) {
        for(int i=0; i<len; i++) {
            if(int(str[i])>64 and int(str[i])<90) {
                str[i] = char(int(str[i]) + 1);
            }
            else if(int(str[i])==90) {
                str[i] = 'A';
            }
            else if(int(str[i])>96 and int(str[i])<122) {
                str[i] = char(int(str[i]) + 1);
            }
            else if(int(str[i])==122) {
                str[i] = 'a';
            }
        }
    }
    for(int i=0; i<len; i++) {
        cout << str[i];
    }
	return 0;
}
