#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int min(vector<int> v);

int min(vector<int> v){
	int key = v[0];
	int size = v.size();
	for(int i=0;i<size;i++){
		if(v[i]<key){
			key=v[i];
		}
	}
	return key;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
	vector<int> sticks;
	vector<int> :: iterator it;

	int N=0;
	cin>>N;
	//enter the array
	for(int j = 0;j<N;j++){
		int x=0;
		cin>>x;
		sticks.push_back(x);
	}

	while(sticks.size()>0){

		for (it = sticks.begin(); it != sticks.end(); ++it){
			if(*it==0){
				sticks.erase(it);
				it--;
			}
		}
		if(sticks.size()==0){exit(1);}
		cout<<sticks.size()<<"\n";
		int m = min(sticks);
		for (it = sticks.begin(); it != sticks.end(); ++it){
			*it = *it-m;
		}
	}




    return 0;
}
