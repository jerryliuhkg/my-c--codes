#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;

char maze_solve(vector<vector<char> > maze, int x, int y) {
    if(x>y) {
        if(maze[y+1][x]=='#') {
            return 'E';
        }
        else {
            return 'S';
        }
    }
    else {
        if(maze[y][x+1]=='#') {
            return 'S';
        }
        else {
            return 'E';
        }
    }
}

int main() {
    int N;
    cin >> N;
    int M;
    cin >> M;
    vector <vector <char> > maze;
    maze.resize(N);
    for(int i=0; i<N; i++) {
        maze[i].resize(N);
        for(int j=0; j<N; j++) {
            maze[i][j] = '.';
        }
    }
    int x, y;
    for(int i=0; i<M; i++) {
        cin >> x >> y;
        maze[x-1][y-1] = '#';
    }
    cout << (N-1)*2 << endl;
    x = 0;
    y = 0;
    while(x!=N-1 || y!=N-1) {
        if(maze_solve(maze, x, y)=='E') {
            cout << 'E' << endl;
            x++;
        }
        else {
            cout << 'S' << endl;
            y++;
        }
        //for(int i=0; i<N; i++) {
        //    for(int j=0; j<N; j++) {
        //        if(i==y && j==x) {
        //            cout << '0';
        //        }
        //        else {
        //            cout << maze[i][j];
        //        }
        //    }
        //    cout << endl;
        //}
    }
}
