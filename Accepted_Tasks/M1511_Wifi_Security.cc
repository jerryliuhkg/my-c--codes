#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    pair<int, char> p[26];
    for(int i=0; i<26; i++) {
        p[i].first = 0;
        p[i].second = i+97;
    }
    cin >> input;
    int lenin = input.length();
    for(int i=0; i<lenin; i++) {
        p[int(input[i])-97].first++;
    }
    char store;
    int sto;
    for(int i=0; i<26; i++) {
        for(int j=1; j<26; j++) {
            if(p[j].first>p[j-1].first) {
                store = p[j].second;
                sto = p[j].first;
                p[j].second = p[j-1].second;
                p[j].first = p[j-1].first;
                p[j-1].second = store;
                p[j-1].first = sto;
            }
        }
    }
    string ch;
    cin >> ch;
    int lench = ch.length();
    char convert[2][lench];
    for(int i=0; i<lench; i++) {
        convert[0][i] = p[i].second;
        convert[1][i] = ch[i];
    }
    for(int i=0; i<lenin; i++) {
        for(int j=0; j<lench; j++) {
            if(input[i]==convert[0][j]) {
                cout << convert[1][j];
                break;
            }
        }
    }
	return 0;
}
