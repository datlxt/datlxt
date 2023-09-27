#include<stdio.h>
//	
//tim so 3 ,so 10
//	int size =10;
//	int s3=3, found3=0, s10=10, found10=0;
//	for(i=0; i<size; i++){
//		if(a[i]==s3)
//		found3=1;
//		
//		if(a[i]==s10)
//		found10=1;	
//	}
//	if (found3 ==1){
//		printf("\nSeach %d: Found",s3);
//	} else 
//	printf("\nseach %d : Not found",s3);
//	
//	if (found10 ==1){
//		printf("\nSeach %d: Found",s10);
//	} else 
//	printf("\nseach %d : Not found",s10);
	

void inPut(int a[], int n){
	int i;
	for (i=0;i<n;i++){
		printf("a[%d]: ",i);
		scanf("%d",&a[i]);	
	}	
}
void outPut(int a[], int n ){
	printf("Array: ");
	int i;
	printf("%d",a[0]);
	for (i=1;i<n;i++){
		printf(", %d", a[i]);
	}
	printf("\n");
}

void sort(int a[], int n){
	int i,j;
	for (i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int temp;
				temp =a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nNew array:");
		printf("%d",a[0]);
	for (i=1;i<n;i++){
		printf(", %d", a[i]);
	}
	
}

void min_max(int a[], int n){
	int i;
	int max=a[0];
	int min =a[0];
	
	for(i=0;i<n;i++){
		if(max < a[i]){	
			max=a[i];
		}
		if(min > a[i]){
			min =a[i];	
		}
	}
	printf("\nMax = %d\n", max);
	printf("\nMin = %d\n", min);
}
void computer(int a[], int n){
	int i;
	int sum =0;
	double average=0;
	
	for (i=0;i<n;i++)
 		sum+=a[i];
		average =(double)sum/n;	
		printf("\nTong cua day= %d\n", sum);
		printf("\nTrung binh ca day = %.3lf\n",average);			
}

void lietKe(int a[], int n){
	int count =0;
	int i;
	for(i=0; i<n;i++){
		if (a[i]%2==1){
			printf("\nSo le: %d" ,a[i]);
			count ++;
		}
	}
	printf("\nSo so le =%d", count);
	
}

int main (){
	int a[]={0}, n;
	printf("Enter n: ");
	scanf("%d",&n);
	
	inPut(a,n);
	outPut(a,n);
	sort(a,n);
	min_max(a,n);
	computer(a,n);
	lietKe(a,n);
return 0;
}
