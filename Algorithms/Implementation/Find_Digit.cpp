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

        int rem=N,carry=-1,count=0;
        while(rem != 0){
			//cout<<"yes";
            carry=rem%10;

            if(carry==0){
				//do nothing
			}else if((N%carry)==0){
                count++;
            }

            rem=rem/10;
        }

        cout<<count<<"\n";
    }
    return 0;
}
