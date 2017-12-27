#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {

    string s;
    cin>>s;

    int flag = 1;
    int counta[26];
    for(int i=0;i<26;i++){
        counta[i] =0;
    }
    for(int i=0;i<s.size();i++){
        int pos= (int)s[i]-97;
        //cout<<pos<<"\n";
        counta[pos]++;
        //cout<<counta[pos]<<"\n";
    }
    int odd=0;
    for(int i=0;i<26;i++){
        //cout<<counta[i];
        if(counta[i]%2==0){
            //do nothing
        }else{
            if(odd ==1){
                flag=0;
                break;
            }
            odd++;
        }

    }
    // Assign Flag a value of 0 or 1 depending on whether or not you find what you are looking for, in the given string
    if(flag==0)
        cout<<"NO";
    else
        cout<<"YES";

    return 0;
}
