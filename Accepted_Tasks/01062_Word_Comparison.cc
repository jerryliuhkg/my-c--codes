#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    string N, M;
    cin >> N >> M;
    int lenn, lenm;
    lenn=N.length();
    lenm=M.length();
    char n[lenn];
    char m[lenm];
    int nempty=0, mempty=0;
    for(int i=0; i<lenn; i++) {
        if(64<N.at(i) and N.at(i)<91) {
            n[i] = N.at(i) + 32;
        }
        else if(96<N.at(i) and N.at(i)<123) {
            n[i] = N.at(i);
        }
        else{
            n[i] = ' ';
            nempty++;
        }
    }
    for(int i=0; i<lenm; i++) {
        if(64<M.at(i) and M.at(i)<91) {
            m[i] = M.at(i) + 32;
        }
        else if(96<M.at(i) and M.at(i)<123) {
            m[i] = M.at(i);
        }
        else{
            m[i] = ' ';
            mempty++;
        }
    }
    int lenofn = lenn-nempty, lenofm = lenm-mempty;
    char finaln[lenofn];
    char finalm[lenofm];
    int counter = 0;
    for(int i=0; i<lenn; i++) {
        if(n[i]!=' ') {
            finaln[counter] = n[i];
            counter++;
        }
    }
    counter = 0;
    for(int i=0; i<lenm; i++) {
        if(m[i]!=' ') {
            finalm[counter] = m[i];
            counter++;
        }
    }
    for(int i=0; i<min(lenofn,lenofm); i++){
        if(finaln[i]<finalm[i]) {
            cout << N << " is less than " << M;
            return 0;
        }
        else if(finaln[i]>finalm[i]) {
            cout << N << " is greater than " << M;
            return 0;
        }
    }
    if(lenofn<lenofm) {
        cout << N << " is less than " << M;
        return 0;
    }
    else if(lenofn > lenofm) {
        cout << N << " is greater than " << M;
        return 0;
    }
    cout << N << " is equal to " << M;
    return 0;
}
