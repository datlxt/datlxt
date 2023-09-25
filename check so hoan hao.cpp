#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int main() {
system("cls");
//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
int i, Number, Sum = 0 ;
scanf("%d", &Number) ;
// Fixed Do not edit anything here.
printf("\nOUTPUT:\n");
//@STUDENT: WRITE YOUR OUTPUT HERE:
for(i = 1 ; i < Number ; i++)
{
if(Number % i == 0)
Sum = Sum + i ;
}
if (Sum == Number)
printf("\n%d is a Perfect Number", Number) ;
else
printf("\n%d is not a Perfect Number", Number) ;
return 0 ;
//--FIXED PART - DO NOT EDIT ANY THINGS HERE
}
