#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main() {
system("cls");
//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
char a[256];
int i;
scanf("%s", a);
int length = strlen(a);
int k = length - 5;
// Fixed Do not edit anything here.
printf("\nOUTPUT:\n");
//@STUDENT: WRITE YOUR OUTPUT HERE:
for(i=k/2; i<k/2 + 5; i++){
printf("%c", a[i]);
}
//--FIXED PART - DO NOT EDIT ANY THINGS HERE
printf("\n");
system ("pause");
return(0);
}
