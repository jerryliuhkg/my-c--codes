#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int a[N];
    for(int i=0; i<N; i++) {
        a[i] = 0;
    }
    int M, m, n;
    cin >> M;
    for(int i=0; i<M; i++) {
        cin >> m >> n;
        a[m-1] = n;
    }
    int Q;
    cin >> Q;
    int pos;
    int b[N+1];
    int counter = 0;
    bool br;
    for(int i=0; i<Q; i++) {
        for(int j=0; j<counter; j++) {
            b[j] = 0;
        }
        counter = 0;
        cin >> pos;
        br = false;
        while(true) {
            if(a[pos-1]==N+1) {
                cout << "Error" << endl;
                for(int k=0; k<counter; k++) {
                    a[b[k]-1] = N+1;
                }
                break;
            }
            if(a[pos-1]==0) {
                cout << pos << endl;
                for(int k=0; k<counter; k++) {
                    a[b[k]-1] = pos;
                }
                break;
            }
            if(a[pos-1]==pos) {
                cout << "Error" << endl;
                for(int k=0; k<counter; k++) {
                    a[b[k]-1] = N+1;
                }
                break;
            }
            for(int k=0; k<counter; k++) {
                if(pos==b[k]) {
                    for(int j=0; j<counter; j++) {
                        a[b[j]-1] = N+1;
                    }
                    br = true;
                }
            }
            // if(j==N) {
            //     cout << "Error" << endl;
            //     for(int k=0; k<counter; k++) {
            //         a[b[k]-1] = N+1;
            //     }
            //     break;
            // }
            if(br==true) {
                cout << "Error" << endl;
                break;
            }
            b[counter] = pos;
            counter++;
            pos = a[pos-1];
        }
    }
    return 0;
}
