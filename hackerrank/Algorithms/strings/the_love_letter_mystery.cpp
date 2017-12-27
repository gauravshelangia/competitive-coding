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

    for(int i=0;i<t;i++){
        string line;
        getline(cin,line);

        int length = line.size();
        int fhalf=length/2;
        int operations=0;

        for(int j=0;j<fhalf;j++){
            operations += abs(line[j]-line[length-1-j]);
        }
        cout<<operations<<endl;
    }
    return 0;
}
