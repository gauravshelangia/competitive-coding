#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T=0;
    cin>>T;

    for(int i=0;i<T;i++){
        int N=0;
        cin>>N;

        bool print3 = true;

        int x = N/3;
        int y = N%3;

       	while(y%5 !=0){
            y=y+3;
            x--;
            if(y>N){
                print3 = false;
                cout<<-1;
                break;
            }
        }


    for(int j=0;j<x*3;j++){
			cout<<5;
    }
    if(print3==true){
        for(int j=0;j<y;j++){
	   	   cout<<3;
	   }

    }
    cout<<"\n";
}
    return 0;
}
