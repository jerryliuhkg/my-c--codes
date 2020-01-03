#include <iostream>
#include <fstream>
using namespace std;

int main() {
    freopen("rps.in", "r", stdin);
    freopen("rps.out", "w", stdout);
    char result[5][5] = {{'d', 'a', 'b', 'b', 'a'}, {'b', 'd', 'a', 'b', 'a'}, {'a', 'b', 'd', 'a', 'b'}, {'a', 'a', 'b', 'd', 'b'}, {'b', 'b', 'a', 'a', 'd'}};
    int N;
    cin >> N;
    int al, bl;
    cin >> al >> bl;
    int a[al];
    int b[bl];
    for(int i=0; i<al; i++) {
        cin >> a[i];
    }
    for(int i=0; i<bl; i++) {
        cin >> b[i];
    }
    int apos = 0, bpos = 0;
    int awin = 0, bwin = 0;
    for(int i=0; i<N; i++) {
        if(result[a[apos]][b[bpos]]=='a') {
            awin++;
        }
        else if(result[a[apos]][b[bpos]]=='b') {
            bwin++;
        }
        apos++;
        bpos++;
        if(apos==al) {
            apos = 0;
        }
        if(bpos==bl) {
            bpos = 0;
        }
    }
    cout << bwin << ' ' << awin;
	return 0;
}
