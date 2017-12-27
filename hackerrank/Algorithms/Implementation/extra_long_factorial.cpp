#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int multiply(int x,int res[],int res_size);

int multiply(int x, int res[],int res_size){

    int carry = 0;

    for(int i=0;i<res_size;i++){
        int mult = res[i]*x + carry;
        res[i] = mult%10;
        carry = mult/10;

    }

    while(carry){
        res[res_size] = carry%10;
        carry = carry/10;
        res_size++;
    }
    return res_size;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int x =0;
    cin>>x;
    int res[1000],res_size=1;
    res[0]=1;
    for(int i=2;i<=x;i++){
        res_size = multiply(i,res,res_size);
    }

    for (int i=res_size-1; i>=0; i--)
        cout << res[i];

    return 0;
}
