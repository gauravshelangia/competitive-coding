#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n=0;
    cin>>n;
    char s ='a';
    vector<char> alpha;
    vector<char> :: iterator it;
    for(int i=0;i<26;i++){
        alpha.push_back(s);
        s++;
    }

    for(int i=0;i<n;i++){
        string s;
        cin>>s;
		int j=0;
        while(j < alpha.size()){

			if( s.find(alpha[j]) == std::string::npos){
                alpha.erase(alpha.begin()+j);
			}else{
				j++;
			}
        }
    }
    cout<<alpha.size();
    return 0;
}
