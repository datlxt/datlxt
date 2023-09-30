#include <conio.h>
#include <stdio.h>


//NHAP MANG
void input(int &n, int a[]) {
	scanf("%d",&n);
	int i;
	for(i=0; i<n; i++) {
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
}
//XUAT MANG
void display(int n, int a[]) {
	int i;
	for(i=0; i<n; i++) {
		printf("%-5d",a[i]);
	}
}
// XOA TAI VI TRI TRONG MANG
void xoaMangTaiViTRi(int a[100],int &n, int vi_tri){
	for(int i= vi_tri;i<n-1;i++){
		a[i] = a[i+1];
	}
	n--;
}
//XOA MOT PHAN TU TRONG MANG
void xoaMangTheoGiaTri( int a[],int &n) {
	int gt;
	printf("Enter position = ");
	scanf("%d",&gt);
	for(int i=0; i<n; i++) {
		if (a[i]==gt)
		xoaMangTaiViTRi(a,n,i);
	}
}
int main() {
 int a[100];
 int n;
	input(n,a);
	display(n,a);
	printf("\n");
	xoaMangTheoGiaTri(a,n);
	printf("\n");
	display(n,a);
	

}
/* void xoaMangTaiViTRi(int a[100],int &n, int vi_tri){
//	scanf("%d",&vi_tri);
	for(int i= vi_tri;i<n-1;i++){
		a[i] = a[i+1];
	}
	
	display(--n,a);
}
int main() {
 int a[100];
 int n,
 //int vi_tri;
	input(n,a);
	display(n,a);
	printf("\n");
//	xoaMangTaiViTRi(a,n,vi_tri);
	printf("\n");
	display(n,a);
