#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
	string line;
	getline(cin,line);
	std::string::iterator it;

	for(int i=0;i<(int)line.size();i++){
		char l=line[i];
		if(isspace(l)){
			line.erase(line.begin()+i); //find how to remove any space from the stri
		}
	}


	int size_n = line.size();

	int rows = floor(sqrt(size_n));
	int col = ceil(sqrt(size_n));
	if(rows*col < size_n){
		rows=rows+1;
	}

	char matrix[rows][col];

	for(int i=0;i<rows;i++){
		for(int j=0;j<col;j++){

			matrix[i][j] = ' ';
		}
	}

	it=line.begin();
	for(int i=0;i<rows;i++){
		for(int j=0;j<col;j++){

			matrix[i][j] = *it;
			if(it==line.end()){
				matrix[i][j] = ' ';
				break;
				}
			it++;
		}
	}
	//cout<<matrix[2][2];
	for(int i=0;i<col;i++){
		for(int j=0;j<rows;j++){
			//cout<<i<<"i and j"<<j<<"\n";
			if(isspace(matrix[j][i])){
				//cout<<"space";
				break;
			}else{
				cout<<matrix[j][i];
			}
		}
		cout<<" ";
	}


	return 0;
}
