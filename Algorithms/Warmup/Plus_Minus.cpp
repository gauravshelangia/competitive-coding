#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//std::ios::sync_with_stdio(false);
//std::setprecision(3);

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n=0;
    std::cin>>n;
    int a[n],countpos=0,countneg=0,countzero=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>0){
            countpos++;
        }else
            if(a[i]<0){
                countneg++;
            }else{
                countzero++;           
        }
    }
    std::cout.precision(3);
    cout<<(float)(countpos/(float)n)<<"\n";
    cout<<((float)countneg/(float)n)<<"\n";
    cout<<((float)countzero/(float)n)<<"\n";
    return 0;
}

