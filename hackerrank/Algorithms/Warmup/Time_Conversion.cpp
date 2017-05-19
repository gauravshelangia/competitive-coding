#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int hh=0,mm=0,ss=0;
    char sp1,sp2;
    string me;
    //takeinput for all these thing
    cin>>hh>>sp1>>mm>>sp2>>ss>>me;
    cout.fill('0');

    if(me =="AM"){
        if(hh==12){
            hh = 0;
            cout<<setw(2)<<hh;
            cout<<sp1;
            cout<<setw(2)<<mm;
            cout<<sp2;
            cout<<setw(2)<<ss;
        }else{
            cout<<setw(2)<<hh;
            cout<<sp1;
            cout<<setw(2)<<mm;
            cout<<sp2;
            cout<<setw(2)<<ss;
        }
    }else{
        if(hh==12){
            cout<<setw(2)<<hh;
            cout<<sp1;
            cout<<setw(2)<<mm;
            cout<<sp2;
            cout<<setw(2)<<ss;

        }else{
            hh=hh+12;
            cout<<setw(2)<<hh;
            cout<<sp1;
            cout<<setw(2)<<mm;
            cout<<sp2;
            cout<<setw(2)<<ss;

        }

    }
    return 0;
}
