#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t=0;

    cin>>t;
    cin.ignore();

    for(int k=0;k<t;k++){
        int deletion=0;
        string line;
        getline(cin,line);

        int sizel = line.size();

        if(sizel%2!=0){
            cout<<-1<<"\n";
        }else{
            int count1[26],count2[26];
            for(int i=0;i<26;i++){
                count1[i]=0;
                count2[i]=0;
            }

            int size1 = sizel/2;
            for(int i=0;i<size1;i++){
                count1[line[i]-97]++;
            }

            for(int i=size1;i<sizel;i++){
                count2[line[i]-97]++;
            }

            deletion=0;
            for(int i=0;i<26;i++){
                int x =(count2[i]-count1[i]);
                if(x < 0){
                    deletion+=x;
                }
            }
            cout<<(-deletion)<<"\n";

        }



    }
    return 0;
}
