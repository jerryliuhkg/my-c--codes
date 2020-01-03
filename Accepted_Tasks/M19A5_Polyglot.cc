#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
	string str;
	getline(cin, str);
	int strl = str.length();
	for (int i = 0;i < strl;i++) {
	    char c = str[i];
	    if (c == 97 || c == 107 || c == 117) {
	        cout << '0';
	    }
	    if (c == 98 || c == 108 || c == 118) {
	        cout << '1';
	    }
	    if (c == 99 || c == 109 || c == 119) {
	        cout << '2';
	    }
	    if (c == 100 || c == 110 || c == 120) {
	        cout << '3';
	    }
	    if (c == 101 || c == 111 || c == 121) {
	        cout << '4';
	    }
	    if (c == 102 || c == 112 || c == 122) cout << '5';
	    if (c == 103 || c == 113) cout << '6';
	    if (c == 104 || c == 114) cout << '7';
	    if (c == 105 || c == 115) cout << '8';
	    if (c == 106 || c == 116) cout << '9';
	    if (c == 32) cout << ' ';
	    if (c == 45) cout << '0';
	    if (c == 48) cout << 'a';
	    if (c == 49) cout << 'b';
	    if (c == 50) cout << 'c';
	    if (c == 51) cout << 'd';
	    if (c == 52) cout << 'e';
	    if (c == 53) cout << 'f';
	    if (c == 54) cout << 'g';
	    if (c == 55) cout << 'h';
	    if (c == 56) cout << 'i';
	    if (c == 57) cout << 'j';
	}
}
