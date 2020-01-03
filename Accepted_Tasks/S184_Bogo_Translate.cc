#include <iostream>
#include <sstream>
#include <string>
#include <cmath>
#include <iomanip>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    map <string, string> dict;
    string original, translate;
    for(int i=0; i<n; i++) {
        cin >> original >> translate;
        dict[original] = translate;
    }
    int m;
    cin >> m;
    int words = 0;
    string arr[26];
    string input;
    pair <string, char> p[26];
    for(int i=0; i<m; i++) {
        for(int j=0; j<words; j++) {
            p[j].first = "";
            p[j].second = ' ';
            arr[j] = "";
        }
        words = 0;
        getline(cin, input);
        getline(cin, input);
        istringstream iss(input);
        string word;
        while(iss >> word) {
            p[words].first = word;
            words++;
        }
        getline(cin, input);
        int len = input.length();
        for(int j=0; j<len; j++) {
            p[j].second = input[j];
        }
        char order;
        for(int j=0; j<words; j++) {
            cin >> order;
            for(int k=0; k<words; k++) {
                if(order==p[k].second) {
                    arr[j] = p[k].first;
                }
            }
        }
        for(int j=0; j<words; j++) {
            if(dict.count(arr[j])<=0) {
                cout << arr[j] << ' ';
            }
            else {
                cout << dict[arr[j]] << ' ';
            }
        }
        cout << endl;
    }
}
