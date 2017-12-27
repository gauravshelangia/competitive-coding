#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n=0;
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++){
        string line;
        getline(cin,line);
        int deletion=0;
        for(int j=0;j<line.size()-1;j++){
            if(line[j]==line[j+1]){
                deletion++;
            }
        }
        cout<<deletion<<"\n";
    }
    return 0;
}
