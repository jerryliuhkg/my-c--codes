#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int arr[3][N];
    int d, y;
    string m;
    char com;
    for(int i=0; i<N; i++) {
        cin >> d >> com >> m >> y;
        arr[0][i] = d;
        // cout << d << ' ' << m << ' ' << y << endl;
        if(m=="January") {
            arr[1][i] = 1;
        }
        if(m=="February") {
            arr[1][i] = 2;
        }
        if(m=="March") {
            arr[1][i] = 3;
        }
        if(m=="April") {
            arr[1][i] = 4;
        }
        if(m=="May") {
            arr[1][i] = 5;
        }
        if(m=="June") {
            arr[1][i] = 6;
        }
        if(m=="July") {
            arr[1][i] = 7;
        }
        if(m=="August") {
            arr[1][i] = 8;
        }
        if(m=="September") {
            arr[1][i] = 9;
        }
        if(m=="October") {
            arr[1][i] = 10;
        }
        if(m=="November") {
            arr[1][i] = 11;
        }
        if(m=="December") {
            arr[1][i] = 12;
        }
        arr[2][i] = y;
    }
    int day, month, year;
    for(int k=0; k<N; k++) {
        for(int j=1; j<N; j++) {
            if(arr[2][j]<arr[2][j-1]) {
                day = arr[0][j];
                month = arr[1][j];
                year = arr[2][j];
                arr[0][j] = arr[0][j-1];
                arr[1][j] = arr[1][j-1];
                arr[2][j] = arr[2][j-1];
                arr[0][j-1] = day;
                arr[1][j-1] = month;
                arr[2][j-1] = year;
            }
            else if(arr[2][j]==arr[2][j-1]) {
                if(arr[1][j]<arr[1][j-1]) {
                    day = arr[0][j];
                    month = arr[1][j];
                    year = arr[2][j];
                    arr[0][j] = arr[0][j-1];
                    arr[1][j] = arr[1][j-1];
                    arr[2][j] = arr[2][j-1];
                    arr[0][j-1] = day;
                    arr[1][j-1] = month;
                    arr[2][j-1] = year;
                }
                else if(arr[1][j]==arr[1][j-1]) {
                    if(arr[0][j]<arr[0][j-1]) {
                        day = arr[0][j];
                        month = arr[1][j];
                        year = arr[2][j];
                        arr[0][j] = arr[0][j-1];
                        arr[1][j] = arr[1][j-1];
                        arr[2][j] = arr[2][j-1];
                        arr[0][j-1] = day;
                        arr[1][j-1] = month;
                        arr[2][j-1] = year;
                    }
                }
            }
        }
    }
    for(int i=0; i<N; i++) {
        cout << arr[0][i] << ", ";
        if(arr[1][i]==1) {
            cout << "January";
        }
        else if(arr[1][i]==2) {
            cout << "February";
        }
        else if(arr[1][i]==3) {
            cout << "March";
        }
        else if(arr[1][i]==4) {
            cout << "April";
        }
        else if(arr[1][i]==5) {
            cout << "May";
        }
        else if(arr[1][i]==6) {
            cout << "June";
        }
        else if(arr[1][i]==7) {
            cout << "July";
        }
        else if(arr[1][i]==8) {
            cout << "August";
        }
        else if(arr[1][i]==9) {
            cout << "September";
        }
        else if(arr[1][i]==10) {
            cout << "October";
        }
        else if(arr[1][i]==11) {
            cout << "November";
        }
        else if(arr[1][i]==12) {
            cout << "December";
        }
        cout << ' ' << arr[2][i] << endl;
    }
	return 0;
}
