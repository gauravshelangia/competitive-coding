#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int p=0,t=0,maxtopic=0;
    cin>>p>>t;
    int matrix[p][t];
    for(int i=0;i<p;i++){
        for(int j=0;j<t;j++){
        scanf("%1d",&matrix[i][j]);
        }
    }

    for(int i=0;i<p-1;i++){
        for(int j=i+1;j<p;j++){
            int topics=0;
            for(int k=0;k<t;k++){
                if(matrix[i][k] || matrix[j][k]){
                    topics++;
                    if(topics > maxtopic){
						maxtopic=topics;
					}
                    if(maxtopic==t){
                        break;
                    }
                }
            }
        }
    }

    //count the number of teams which knows the maxtopic
    int maxteam = 0,ttopic=0;
    for(int i=0;i<p-1;i++){
        for(int j=i+1;j<p;j++){
			ttopic=0;
            for(int k=0;k<t;k++){
                if(matrix[i][k] || matrix[j][k]){
                    ttopic++;
                    if(ttopic == maxtopic){
                        maxteam++;
                    }
                }
            }
        }
    }

    cout<<maxtopic<<"\n";
    cout<<maxteam<<"\n";
    return 0;
}
