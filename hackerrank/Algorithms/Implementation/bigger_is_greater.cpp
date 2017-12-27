#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int main() {
  int t;
  cin>>t;
  for(int i=0;i<t;i++){
    string line;
    cin>>line;
    //int n = line.size();
    //cout<<n;
    if(next_permutation(line.begin(),line.end())){
      cout<<line<<"\n";
    }else{
      cout<<"no answer"<<"\n";
    }
  }
  return 0;
}
