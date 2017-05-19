#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n=0; 
    scanf("%d",&n);
    long long int a[n];
    long long int sum=0;
    for(int i=0;i<n;i++){
        scanf("%lld",&a[i]);
        sum = sum+a[i];
    }
    printf("%lld",sum);
    return 0;
}

