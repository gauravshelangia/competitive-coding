#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N=0;
    cin>>N;
    string matrix[N];
    cin.ignore();

    for(int i=0;i<N;i++){
		std::getline(std::cin,matrix[i]);
	}

	for(int i=1;i<N-1;i++){
		for(int j=1;j<N-1;j++){
			if((matrix[i][j] > matrix[i-1][j])&& (matrix[i][j] > matrix[i+1][j]) &&
			(matrix[i][j] > matrix[i][j-1]) && (matrix[i][j] > matrix[i][j+1])){

			matrix[i][j]='X';
			}
		}

	}
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			cout<<matrix[i][j];
		}
		cout<<"\n";
	}

    return 0;
}
