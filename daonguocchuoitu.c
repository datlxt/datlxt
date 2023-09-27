#include<stdio.h>
#include<string.h>
//dao nguoc cac tu trong chuoi 
int string_length(char s[]) {
	int i=0;
	while(s[i]!='\0')
		i++;
	return i;
}
void string_reverse(char str[]) {
	int i, j, len;
	char ch;
	j = len = string_length(str) - 1;
	i = 0;
	while(i < j) {
		ch = str[j];
		str[j] = str[i];
		str[i] = ch;
		i++;
		j--;
	}
}
int main (void) {
	char s1[100];
	printf("Enter a string s1:\n");
	fflush(stdin);
	gets(s1);
	char reverse[100] = "";
	char temp[50];
	int i, j, n;
	n = string_length(s1);
	for(i = n-1; i >= 0; --i) {
		for(j = 0; i >= 0 && s1[i] != ' '; --i,++j)
			temp[j] = s1[i];
		temp[j] = '\0';
		string_reverse(temp);
		strcat(reverse, temp);
		strcat(reverse, " ");
	}
	printf("Chuoi ban dau: %s", s1);
	printf("\nChuoi sau khi da duoc dao nguoc: %s",reverse);
	return 0;
}

