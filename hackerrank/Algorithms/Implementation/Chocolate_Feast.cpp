#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,n,c,m;
    cin>>t;
    while(t--){
        cin>>n>>c>>m;
        int answer=n/c;
        // Computer answer
        int wrapper= answer;
        int x= answer;

        while(wrapper>=m){
				x=ceil(wrapper/m);
				wrapper = wrapper%m + x;
				answer = answer+x;
		}
        cout<<answer<<endl;
    }
    return 0;
}
