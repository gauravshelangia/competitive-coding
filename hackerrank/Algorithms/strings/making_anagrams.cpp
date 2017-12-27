#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string line1,line2;
    getline(cin,line1);
    getline(cin,line2);

    int count1[26],count2[26];
    for(int i=0;i<26;i++){
		count1[i]=0;
		count2[i]=0;
	}
    for(int i=0;i<(int)line1.size();i++){
        int pos = (int)line1[i]-97;
        count1[pos]++;
    }
    for(int i=0;i<(int)line2.size();i++){
        int pos = (int)line2[i]-97;
        //cout<<pos<<" ";
        count2[pos]++;
        //cout<<count2[pos]<<" \n";
    }
    int deletions=0;
    for(int i=0;i<26;i++){
		//cout<<abs(count1[i]-count2[i])<<" ";
        deletions += abs(count1[i]-count2[i]);
    }
    cout<<deletions;
    return 0;
}
