#include <iostream>
#include <string>
using namespace std;
int main() {
	string a;
	cin >> a;
	int lena = a.length();
	int N;
	cin >> N;
	string test;
	int lentest;
	getline(cin, test);
	for(int i=0; i<N; i++) {
		getline(cin, test);
		lentest = test.length();
		int counter = 0;
		bool boo = false;
		bool word = false;
		for(int j=0; j<lentest; j++) {
			if(test.at(j)==' ') {
				word = false;
			}
			else if(word==false && (test.at(j)==a.at(counter) || test.at(j)==a.at(counter)+32)) {
				counter++;
				word = true;
			}
			else if(word==false && !(test.at(j)==a.at(counter) || test.at(j)==a.at(counter)+32)) {
			    word = true;
			}
			if(counter==lena) {
				boo = true;
				break;
			}
		}
		counter = 0;
		if(boo==true) {
			for(int j=0; j<lentest; j++) {
			    if(counter>=lena) {
			        if(test.at(j)==' ') {
				        cout << ' ';
				    }
					else if(test.at(j)<95) {
						cout << char(test.at(j) + 32);
					}
					else{
						cout << test.at(j);
					}
			    }
				else if((j==0 || test.at(j-1)==' ') && (test.at(j)==a.at(counter) || test.at(j)==a.at(counter)+32) && counter<lena) {
					if(test.at(j)<95) {
						cout << test.at(j);
						counter++;
					}
					else{
						cout << char(test.at(j)-32);
						counter++;
					}
				}
				else{
				    if(test.at(j)==' ') {
				        cout << ' ';
				    }
					else if(test.at(j)<95) {
						cout << char(test.at(j) + 32);
					}
					else{
						cout << test.at(j);
					}
				}
			}
		}
		else{
			cout << "No :(";
		}
		cout << endl;
	}
}
