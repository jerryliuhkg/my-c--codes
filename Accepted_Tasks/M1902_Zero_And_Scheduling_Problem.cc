#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    bool a[1440];
    int n, m;
    cin >> n;
    char h11, h12, m11, m12, h21, h22, m21, m22, extra;
    string more;
    for(int i=0; i<1440; i++) {
        if(i<420) {
            a[i] = false;
        }
        else if(i>1380) {
            a[i] = false;
        }
        else {
            a[i] = true;
        }
    }
    for(int i=0; i<n; i++) {
        cin >> h11 >> h12 >> extra >> m11 >> m12 >> extra >> h21 >> h22 >> extra >> m21 >> m22;
        getline(cin, more);
        for(int i=(((h11-'0')*10 + (h12-'0'))*60 + ((m11-'0')*10 + (m12-'0'))); i<(((h21-'0')*10 + (h22-'0'))*60 + ((m21-'0')*10 + (m22-'0'))); i++) {
            a[i] = false;
        }
    }
    cin >> m;
    for(int i=0; i<m; i++) {
        cin >> h11 >> h12 >> extra >> m11 >> m12 >> extra >> h21 >> h22 >> extra >> m21 >> m22;
        getline(cin, more);
        for(int i=(((h11-'0')*10 + (h12-'0'))*60 + ((m11-'0')*10 + (m12-'0'))); i<(((h21-'0')*10 + (h22-'0'))*60 + ((m21-'0')*10 + (m22-'0'))); i++) {
            a[i] = false;
        }
    }
    int counter = 0;
    int longest = 0;
    int pos = 0;
    int end = 0;
    for(int i=0; i<1440; i++) {
        if(a[i]==true) {
            counter++;
        }
        else if(counter > 1 && counter > longest) {
            longest = counter;
            end = i;
            pos = i-counter;
            counter = 0;
        }
        else {
            counter = 0;
        }
    }
    if(pos==0) {
        cout << "SAD";
    }
    else {
        int h1, h2, m1, m2;
        h1 = (pos-(pos%60))/60;
        h2 = (end-(end%60))/60;
        m1 = (pos)%60;
        m2 = end%60;
        if(h1*60 + m1 <= 419) {
            h1 = 7;
            m1 = 0;
        }
        if(h2*60 + m2 > 1380) {
            h2 = 23;
            m2 = 0;
        }
        if(h1<10) {
            cout << '0' << h1;
        }
        else {
            cout << h1;
        }
        cout << ':';
        if(m1<10) {
            cout << '0' << m1;
        }
        else {
            cout << m1;
        }
        cout << '-';
        if(h2<10) {
            cout << '0' << h2;
        }
        else {
            cout << h2;
        }
        cout << ':';
        if(m2<10) {
            cout << '0' << m2;
        }
        else {
            cout << m2;
        }
        cout << " Being an autistic friend" << endl;
    }
	return 0;
}
