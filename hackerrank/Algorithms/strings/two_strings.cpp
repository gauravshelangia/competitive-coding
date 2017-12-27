#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    cin.tie(0);
    int t=0;
    cin>>t;
    cin.ignore();
    for(int k=0;k<t;k++){
        string line1,line2;
        getline(cin,line1);
        getline(cin,line2);
        int count[26];
        for(int i=0;i<26;i++){
            count[i]=0;

        }

        int line1size= line1.size();
        int line2size = line2.size();
        bool flag = false;
        for(int i=0;i<line1size;i++){
            count[line1[i]-97]++;
        }
        //cout<<count[8]<<count[7]<<" \n";
        for(int i=0;i<line2size;i++){
            if(count[line2[i]-97] !=0 ){
                flag = true;
                break;
            }
        }

        if(flag){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
 }
