#include <cmath>
#include <cstdio>
#include <set>
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

int main() {
	//cin.tie(0);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T=0;

    cin>>T;


    while(T>=0){

		string line,reverse;
		std::getline(std::cin,line);

		int f = line.size();

		/*for(int j=f-1;j>=0;j--){

			reverse[f-j-1]=line[j];
		}*/

		bool funny = false;
		for(int i=1;i<f;i++){
			funny = false;

			if(abs(line[i]-line[i-1]) != abs(line[f-i-1]-line[f-i]) ){
				cout<<"Not Funny\n";
				break;
			}else{
				funny=true;
			}

		}
		if(funny){
			cout<<"Funny\n";
		}
		T--;
	}

    return 0;
}
