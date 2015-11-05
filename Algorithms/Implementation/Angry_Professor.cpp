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
        int N=0,K=0;
        cin>>N>>K;
        int count=0;
        for(int j=0;j<N;j++){
            int y=0;
            cin>>y;
            if(y<=0){
                count++;
            }
        }
        if(count >= K){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }
    return 0;
}
