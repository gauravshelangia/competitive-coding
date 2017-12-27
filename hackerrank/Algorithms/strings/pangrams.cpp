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
	std::set<std::string> alpha;
	std::set<string> :: iterator it;

	string line;
	getline(cin,line);
    int size = line.size();

    for(int i=0;i<size;i++){
		char l = line[i];
		if(isspace(l)){

		}else{

			char K = tolower(l);
			string add (1,K);
			alpha.insert(add);
		}
			if(alpha.size() == 26){
				cout<<"pangram";
				break;
			}


	}

    if(alpha.size()!=26){
		cout<<"not pangram";
	}

    return 0;
}
