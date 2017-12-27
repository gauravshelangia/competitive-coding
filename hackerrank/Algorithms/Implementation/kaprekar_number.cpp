#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int digits(int64_t number);

int digits(int64_t number){
    int digit=0;
    if(number < 10){
        digit=1;
    }else{
        while(number){
            number /= 10;
            //cout<<number<<"\n";

            digit++;
			//cout<<digit<<"\n";
        }
        //cout<<"\n";
    }
    return digit;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

	int64_t p=0,q=0;
    cin>>p>>q;
	bool valid=false;
    for(int64_t i=p;i<=q;i++){

        int64_t square = i*i;
        int digiti=0;//,digit =0;
        //cout<<square<<"\n";
        //digit = digits(square);
        digiti = digits(i);
		int array[digiti];
        //cout<<digit<<"\n";

        int64_t s = square,j=0;
        while(s){
			array[j]=s%10;
			//cout<<array[j]<<"\n";
			s = s/10;
			j++;
		}

        //cout<<"\n";
        //cout<<digiti<<"and"<<digit<<"\n";

        int64_t left=0,right=0;

		for(int k=0;k<digiti;k++){
			//cout<<k<<"\n";
			right += array[k]*(pow(10,k));
			//cout<<right<<"and"<<array[k]<<"\n";
		}

		int p=0;
		for(int k=digiti;k<j;k++){
			left += array[k]*(pow(10,p));
			p++;
		}

		//cout<<right<<"\n";
		//cout<<left<<"\n";


		//cout<<left+right<<"\n";
		if(i==1){
			cout<<i<<" ";
		}
		if(left == 0 || (left+right) != i){

		}else{
			valid = true;
			cout<<i;
			cout<<" ";
		}
     //cout<<"checking ";
    }

    if(valid == false){
		cout<<"INVALID RANGE";
	}
    return 0;
}
