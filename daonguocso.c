#include <stdio.h>
#include <math.h>
#include<string.h>

void reverse( int n) {
	int m=0;
	int du, tmp;
	for( tmp=n ; tmp>0 ; tmp=tmp/10 ) {
		du=tmp%10;
		m=m*10+du;
	}
	printf("\nThe reverse number of  %d is: %d", n, m);
}
int main(){
	int n, x;
	scanf("%d", &n);
	reverse(n);
}
