#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
	cin.tie(0);

    int T=0,R=0,C=0,r=0,c=0;
    cin>>T;
    for(int i=0;i<T;i++){
		cin>>R>>C;
		string grid[R];
		cin.ignore();

		for(int j=0;j<R;j++){
			getline(cin,grid[j]);

		}

		cin>>r>>c;
		string pattern[r];
		cin.ignore();
		for(int j=0;j<r;j++){
			getline(cin,pattern[j]);
		}

		bool pexist = false;
		//find pattern in the grid
		for(int j=0;j<R;j++){
			pexist = false;
			//exist = grid[j].find(pattern[0]);
			//cout<<grid[j]<<"\n";
			if(grid[j].find(pattern[0])!=std::string::npos){
				//cout<<"j value "<<j<<"\n";
				pexist = true;
				if((j+r)<R){
					int x=j;
					size_t found = grid[j].find(pattern[0]) ;
					//cout<<found;
					for(int k =0;k<r;k++){
						pexist = false;
						size_t pfound = grid[x].find(pattern[k]);
						//cout<<pfound<<"\n";
						if(grid[x].find(pattern[k])!=std::string::npos && found==pfound ){
							//cout<<pexist<<"k value"<<x<<k<<"\n";
							pexist=true;
							if(k==r-1){
								j=R;
								break;
							}
							x++;
						}else{
							k=r;
							break;
						}
					}
				}
			}
		}
		if(pexist){
				cout<<"YES"<<endl;

			}else{
				cout<<"NO"<<endl;
			}
	}

    return 0;
}
