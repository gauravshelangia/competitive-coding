#include <cmath>
#include <cstdio>
#include <set>
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N=0,T=0;
    cin>>N;
    cin>>T;
    int width[N];
    for(int i=0;i<N;i++){
		cin>>width[i];
	}
	int entry=0,exit=0;
	for(int j=0;j<T;j++){

		cin>>entry;
		cin>>exit;
		int max=3;

		for(int i=entry;i<=exit;i++){
			if(width[i]<max){
				max=width[i];
			}

			if(max==1){
				cout<<max<<"\n";
				break;
			}
		}
		if(max==2 || max==3)
		cout<<max<<"\n";
	}
    return 0;
}
