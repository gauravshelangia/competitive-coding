#include <cmath>
#include <cstdio>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int T=0;
	cin>>T;

	for(int i=0;i<T;i++){
		int n=0,a=0,b=0;
		set<int> series;
		set<int>::iterator it;
		cin>>n;
		cin>>a;
		cin>>b;
		cin.ignore();

		if(a>b){
			int temp=0;
			temp=a;
			a=b;
			b=temp;
		}
		for(int j=0;j<n;j++){
			int x=0;
			x=a*(n-1-j)+(b*j);
			series.insert(x);
		}
		it = series.begin();
		while(it != series.end()){
			cout<<*it<<" ";
			it++;
		}
		cout<<"\n";

	}


    return 0;
}
