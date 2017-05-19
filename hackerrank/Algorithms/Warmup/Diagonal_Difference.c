#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n=0;
    scanf("%d",&n);
    int a[n][n],ms=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",& a[i][j]);
            if(i==j){
                ms=ms+a[i][j];
            }
            
        }
    }
    int ss=0;
    for(int i=0;i<n;i++){	
    ss=ss+a[n-1-i][i];
    }
    printf("%d",abs(ms-ss));
    return 0;
}

