#include <stdio.h>
#include <string.h>

int main(){
	char s[100];
	fgets(s, 100, stdin);
	int n = strlen(s);
	for (int i=0; i<n; i++){
        if(s[i]<'A' || (s[i]>'Z' && s[i]<'a') || s[i]>'z'){
            for(int j=i; j<n-1; j++){
                s[j] = s[j+1];
            }
            n--;
            i--;
        }
    }
    printf("OUTPUT: %s ", s);
}

