#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

	int N=0,K=0;
	string line;

	cin>>N;
	std:: getline(std::cin,line);

	getline(cin,line);
	cin>>K;
	while(K>26){
		K=K-26;
	}
	//cout<<K;

	for(int i=0;i<N;i++){

		if(isalpha(line[i])){
			if(islower(line[i])){
				//cout<<line[i];
				int sum = line[i]+K;
				if(sum>122){
					int d = sum-122;
					line[i] = (char)(96+d);
				}else{
					line[i] = sum;
				}
				//cout<<sum;
				//cout<<line[i];
			}else{
				int sum = line[i]+K;
				//cout<<sum;

				if(sum>90){
					int d = sum-90;
					line[i] = (char)(64+d);
				}else{
					line[i] = sum;
				}

			}
		//	cout<<line[i];
		}
		cout<<line[i];
	}

    return 0;
}
