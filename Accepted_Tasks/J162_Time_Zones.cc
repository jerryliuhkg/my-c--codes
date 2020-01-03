#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    pair<string, double> p[10];
    p[0].first="PST";
    p[0].second=-8;
    p[1].first="MST";
    p[1].second=-7;
    p[2].first="EST";
    p[2].second=-5;
    p[3].first="GMT";
    p[3].second=0;
    p[4].first="MSK";
    p[4].second=3;
    p[5].first="IST";
    p[5].second=5.5;
    p[6].first="NPT";
    p[6].second=5.75;
    p[7].first="HKT";
    p[7].second=8;
    p[8].first="JST";
    p[8].second=9;
    p[9].first="ACDT";
    p[9].second=10.5;
    string start, end;
    int hour, min;
    cin >> hour >> min >> start >> end;
    int times = hour*60+min;
    for(int i=0;i<10;i++){
        if(start==p[i].first) {
            times -= p[i].second*60;
        }
        if(end==p[i].first) {
            times+= p[i].second*60;
        }
    }
    while(times<=0) {
        times+=1440;
    }
    while(times>3600) {
        times-=1440;
    }
    min = times%60;
    hour = (times-times%60)/60;
    while(hour>=24) {
        hour = hour - 24;
    }
    while(hour<0) {
        hour = hour + 24;
    }
    if(hour<10) {
        cout << '0' << hour;
    }
    else{
        cout << hour;
    }
    cout << ' ';
    if(min<10) {
        cout << '0' << min;
    }
    else{
        cout << min;
    }
    return 0;
}
