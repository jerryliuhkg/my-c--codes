#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
char maze(vector < vector < char > > a, int H, int W, int x, int y, bool b) {
    if(b==true) {
        if(a[y][x]=='!') {
            return 't';
        }
        else if(x==W-1 && y==H-1) {
            return 'y';
        }
        else if(a[y][x]=='E') {
            return maze(a, H, W, x+1, y, true);
        }
        else if(a[y][x]=='S') {
            return maze(a, H, W, x, y+1, true);
        }
        else if(a[y][x]=='?') {
            if(maze(a, H, W, x+1, y, true)=='y') {
                return 'y';
            }
            else if(maze(a, H, W, x, y+1, true)=='y') {
                return 'y';
            }
            else{
                return 't';
            }
        }
    }
    
    if(a[y][x]=='!') {
        return 't';
    }
    else if(x==W-1 && y==H-1) {
        return 'y';
    }
    else if(a[y][x]=='E') {
        return 'E';
    }
    else if(a[y][x]=='S') {\
        return 'S';
    }
    else if(a[y][x]=='?') {
//        while(maze(a, H, W, x+1, y)!='t' or maze(a, H, W, x+1, y)!='y') {
//            if(a[y][x]=='?') {
//                char east = maze(a, H, W, x+1, y);
//                char west = maze(a, H, W, x, y+1);
//            } 
        if(maze(a, H, W, x+1, y, true)=='y') {
            return 'E';
        }
        else {
            return 'S';
        }
    }
}
int main() {
    int H, W;
    cin >> H >> W;
    vector < vector < char > > a;
    a.resize(H);
    for(int i=0; i<H; i++) {
        a[i].resize(W);
    }
    for(int i=0; i<H; i++) {
        for(int j=0; j<W; j++) {
            cin >> a[i][j];
        }
    }
    for(int i=0; i<H; i++) {
        for(int j=0; j<W; j++) {
            if(i==H-1 && j==W-1) {
                a[i][j] = 'N';
            }
            else if(i==H-1 && a[i][j]=='.') {
                if(a[i][j+1]=='#') {
                    a[i][j] = '!';
                }
                else{
                    a[i][j] = 'E';
                }
            }
            else if(j==W-1 && a[i][j]=='.') {
                if(a[i+1][j]=='#') {
                    a[i][j] = '!';
                }
                else {
                    a[i][j] = 'S';
                }
            }
            else if(a[i][j]=='.' && a[i][j+1]=='#' && a[i+1][j]!='#') {
                a[i][j] = 'S';
            }
            else if(a[i][j]=='.' && a[i][j+1]!='#'&& a[i+1][j]=='#') {
                a[i][j] = 'E';
            }
            else if(a[i][j]=='.' && a[i][j+1]=='#' && a[i+1][j]=='#') {
                a[i][j] = '!';
            }
            else if(a[i][j]=='.' && a[i][j+1]!='#' && a[i+1][j]!='#') {
                a[i][j] = '?';
            }
        }
    }
    //cout << endl;
    //for(int i=0; i<H; i++) {
        //for(int j=0; j<W; j++) {
            //cout << a[i][j];
        //}
        //cout << endl;
    //}
    int x=0, y=0;
    while(x!=W-1 or y!=H-1) {
        char c = maze(a, H, W, x, y, false);
        if(c=='E') {
            cout << 'E';
            x = x+1;
        }
        else if(c=='S') {
            cout << 'S';
            y = y+1;
        }
    }
}#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
char maze(vector < vector < char > > a, int H, int W, int x, int y, bool b) {
    if(b==true) {
        if(a[y][x]=='!') {
            return 't';
        }
        else if(x==W-1 && y==H-1) {
            return 'y';
        }
        else if(a[y][x]=='E') {
            return maze(a, H, W, x+1, y, true);
        }
        else if(a[y][x]=='S') {
            return maze(a, H, W, x, y+1, true);
        }
        else if(a[y][x]=='?') {
            if(maze(a, H, W, x+1, y, true)=='y') {
                return 'y';
            }
            else if(maze(a, H, W, x, y+1, true)=='y') {
                return 'y';
            }
            else{
                return 't';
            }
        }
    }
    
    if(a[y][x]=='!') {
        return 't';
    }
    else if(x==W-1 && y==H-1) {
        return 'y';
    }
    else if(a[y][x]=='E') {
        return 'E';
    }
    else if(a[y][x]=='S') {\
        return 'S';
    }
    else if(a[y][x]=='?') {
//        while(maze(a, H, W, x+1, y)!='t' or maze(a, H, W, x+1, y)!='y') {
//            if(a[y][x]=='?') {
//                char east = maze(a, H, W, x+1, y);
//                char west = maze(a, H, W, x, y+1);
//            } 
        if(maze(a, H, W, x+1, y, true)=='y') {
            return 'E';
        }
        else {
            return 'S';
        }
    }
}
int main() {
    int H, W;
    cin >> H >> W;
    vector < vector < char > > a;
    a.resize(H);
    for(int i=0; i<H; i++) {
        a[i].resize(W);
    }
    for(int i=0; i<H; i++) {
        for(int j=0; j<W; j++) {
            cin >> a[i][j];
        }
    }
    for(int i=0; i<H; i++) {
        for(int j=0; j<W; j++) {
            if(i==H-1 && j==W-1) {
                a[i][j] = 'N';
            }
            else if(i==H-1 && a[i][j]=='.') {
                if(a[i][j+1]=='#') {
                    a[i][j] = '!';
                }
                else{
                    a[i][j] = 'E';
                }
            }
            else if(j==W-1 && a[i][j]=='.') {
                if(a[i+1][j]=='#') {
                    a[i][j] = '!';
                }
                else {
                    a[i][j] = 'S';
                }
            }
            else if(a[i][j]=='.' && a[i][j+1]=='#' && a[i+1][j]!='#') {
                a[i][j] = 'S';
            }
            else if(a[i][j]=='.' && a[i][j+1]!='#'&& a[i+1][j]=='#') {
                a[i][j] = 'E';
            }
            else if(a[i][j]=='.' && a[i][j+1]=='#' && a[i+1][j]=='#') {
                a[i][j] = '!';
            }
            else if(a[i][j]=='.' && a[i][j+1]!='#' && a[i+1][j]!='#') {
                a[i][j] = '?';
            }
        }
    }
    //cout << endl;
    //for(int i=0; i<H; i++) {
        //for(int j=0; j<W; j++) {
            //cout << a[i][j];
        //}
        //cout << endl;
    //}
    int x=0, y=0;
    while(x!=W-1 or y!=H-1) {
        char c = maze(a, H, W, x, y, false);
        if(c=='E') {
            cout << 'E';
            x = x+1;
        }
        else if(c=='S') {
            cout << 'S';
            y = y+1;
        }
    }
}#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
char maze(vector < vector < char > > a, int H, int W, int x, int y, bool b) {
    if(b==true) {
        if(a[y][x]=='!') {
            return 't';
        }
        else if(x==W-1 && y==H-1) {
            return 'y';
        }
        else if(a[y][x]=='E') {
            return maze(a, H, W, x+1, y, true);
        }
        else if(a[y][x]=='S') {
            return maze(a, H, W, x, y+1, true);
        }
        else if(a[y][x]=='?') {
            if(maze(a, H, W, x+1, y, true)=='y') {
                return 'y';
            }
            else if(maze(a, H, W, x, y+1, true)=='y') {
                return 'y';
            }
            else{
                return 't';
            }
        }
    }
    
    if(a[y][x]=='!') {
        return 't';
    }
    else if(x==W-1 && y==H-1) {
        return 'y';
    }
    else if(a[y][x]=='E') {
        return 'E';
    }
    else if(a[y][x]=='S') {\
        return 'S';
    }
    else if(a[y][x]=='?') {
//        while(maze(a, H, W, x+1, y)!='t' or maze(a, H, W, x+1, y)!='y') {
//            if(a[y][x]=='?') {
//                char east = maze(a, H, W, x+1, y);
//                char west = maze(a, H, W, x, y+1);
//            } 
        if(maze(a, H, W, x+1, y, true)=='y') {
            return 'E';
        }
        else {
            return 'S';
        }
    }
}
int main() {
    int H, W;
    cin >> H >> W;
    vector < vector < char > > a;
    a.resize(H);
    for(int i=0; i<H; i++) {
        a[i].resize(W);
    }
    for(int i=0; i<H; i++) {
        for(int j=0; j<W; j++) {
            cin >> a[i][j];
        }
    }
    for(int i=0; i<H; i++) {
        for(int j=0; j<W; j++) {
            if(i==H-1 && j==W-1) {
                a[i][j] = 'N';
            }
            else if(i==H-1 && a[i][j]=='.') {
                if(a[i][j+1]=='#') {
                    a[i][j] = '!';
                }
                else{
                    a[i][j] = 'E';
                }
            }
            else if(j==W-1 && a[i][j]=='.') {
                if(a[i+1][j]=='#') {
                    a[i][j] = '!';
                }
                else {
                    a[i][j] = 'S';
                }
            }
            else if(a[i][j]=='.' && a[i][j+1]=='#' && a[i+1][j]!='#') {
                a[i][j] = 'S';
            }
            else if(a[i][j]=='.' && a[i][j+1]!='#'&& a[i+1][j]=='#') {
                a[i][j] = 'E';
            }
            else if(a[i][j]=='.' && a[i][j+1]=='#' && a[i+1][j]=='#') {
                a[i][j] = '!';
            }
            else if(a[i][j]=='.' && a[i][j+1]!='#' && a[i+1][j]!='#') {
                a[i][j] = '?';
            }
        }
    }
    //cout << endl;
    //for(int i=0; i<H; i++) {
        //for(int j=0; j<W; j++) {
            //cout << a[i][j];
        //}
        //cout << endl;
    //}
    int x=0, y=0;
    while(x!=W-1 or y!=H-1) {
        char c = maze(a, H, W, x, y, false);
        if(c=='E') {
            cout << 'E';
            x = x+1;
        }
        else if(c=='S') {
            cout << 'S';
            y = y+1;
        }
    }
}
