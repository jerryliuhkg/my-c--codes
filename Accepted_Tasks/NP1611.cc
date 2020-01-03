#include <iostream>
#include <fstream>
using namespace std;
int main(){
    freopen("toy.in", "r", stdin);
    fstream fs;
    fs.open("toy.out", fstream::in | fstream::out | fstream::app);
    int a, b;
    cin >> a >> b;
    pair<int, string> p[a];
    for(int i=0; i<a; i++) {
        cin >> p[i].first >> p[i].second;
    }
    int position = 0;
    int direction, amount;
    for(int i=0; i<b; i++) {
        cin >> direction >> amount;
        if(direction==0 && p[position].first==0) {
            position = position - amount;
            while(position<0) {
                position = position + a;
            }
        }
        else if(direction==0 && p[position].first==1) {
            position = position + amount;
            while(position>=a) {
                position = position - a;
            }
        }
        else if(direction==1 && p[position].first==0) {
            position = position + amount;
            while(position>=a) {
                position = position - a;
            }
        }
        else if(direction==1 && p[position].first==1) {
            position = position - amount;
            while(position<0) {
                position = position + a;
            }
        }
    }
    fs << p[position].second;
}
