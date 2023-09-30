#include<stdio.h>
#include<conio.h>
// hinh vuong rong
int main()
{
    int i,j,side;
   printf("\nEnter the side of square:");scanf("%d",&side);
   for(i=1;i<=side;i++)
   {
       for(j=1;j<=side;j++)
      {
          if(i==1||i==side||j==1||j==side)
             printf("*");
         else
             printf(" ");
      }
      printf("\n");
   }
   getch();
}
// hinh vuong dac
#include <stdio.h>
int main()
{
    int n;
    printf("Nhap do dai canh: ");
    scanf("%d", &n);
    int i, j;
    for(i = 0; i<n; i++){
        for(j = 0; j<n; j++){
            printf("* ");
        }
        printf("\n");
    }
}
