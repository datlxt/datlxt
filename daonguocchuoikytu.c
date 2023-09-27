#include<stdio.h>
#include<string.h>
//7. in chuoi dao nguoc
void reverse(char s[]) {
	char s1[200];
	int size=0;
	int i;
	for(i= strlen(s)-1; i>=0; i--) {
		s1[size++]=s[i];
	}
	s1[size]='\0';

	for(i=0; i<size; i++) {
		s[i]=s1[i];
	}
	printf("%c",s[i]);
}

int main(){
    char s[100];
    printf("Nhap chuoi:");
    scanf("%s",s);
    reverse(s);
    printf("chuoi dao nguoc: %s",s);
    return 0;
}
