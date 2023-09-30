#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include<stdio.h>

#include<stdio.h>

int main() {
    int n;
    int arr[100];
    int sum=0;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for ( i=0;i<n;i++){
        if(arr[i]%2!=0 && arr[i]>0){
            sum+=arr[i];
        }
    }
    printf("%d",sum);
    return 0;
}

