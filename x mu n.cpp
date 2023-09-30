#include <stdio.h>
#include<string.h>

int main() {
	int x, n;
	int	i=1 ;
	unsigned long long x0 = 1;
	printf("Nhap x:");
	scanf("%d", &x); fflush(stdin);
	printf("Nhap n:");
	scanf("%d", &n); fflush(stdin);
	while (i<=n) {
		x0 = x0 * x;
		i++;
	}
	printf("%d^%d=%llu",x,n, x0);

	return 0;
}
