#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int da=0,ma=0,ya=0,de=0,me=0,ye=0;
    cin>>da>>ma>>ya>>de>>me>>ye;
    int dd=0,md=0,yd=0,fine=0;

	dd=da-de;
	md=ma-me;
	yd=ya-ye;
	//cout<<md<<"\n";
	if(yd>0){
		fine=10000;
	}else
	if(yd==0){
		if(md>0){
			fine = (md)*500;
		}else if(md==0){
			fine=dd*15;
		}else{
			fine = 0;
		}

	}else {
		fine=0;
	}
	if(fine>=0){
	cout<<fine;
	}else{
	cout<<0;
	}

    return 0;
}
