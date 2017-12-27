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
        long long int B=0,W=0,X=0,Y=0,Z=0;
        long long int black=0,white = 0;
        cin>>B>>W>>X>>Y>>Z;

        int bw = X+Z;
        int wb = Y+Z;

        if(X<wb){
            black = B*X;
        }else{
            black = B*wb;
        }

        if(Y<bw){
            white = Y*W;
        }else{
            white = W*bw;
        }
        long long int cost = white+black;
        cout<<cost<<endl;

    }
    return 0;
}
