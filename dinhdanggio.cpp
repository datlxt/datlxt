#include<stdio.h>
int main(){
	int N,h,m,s;
	printf("So giay :");
	scanf("%d",&N);
	h= N/3600;
	m= (N-h*3600)/60;
	s= N-h*3600-m*60;
	printf("\nOUTPUT:\n");
	printf("N = %d, m = %d, s = %d",h,m,s);
	
return 0;
}

