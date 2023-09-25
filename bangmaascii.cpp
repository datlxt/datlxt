#include<stdio.h>
int main(){
	printf("n\ASCII table\n");
//	for(int i=0;i<=127;i++){
int i =0;
    //while(i<=127){
    do{
		printf("%c\t%d\t%o\t%x\n",i,i,i,i);
		i++;
}while (i<=127);
return 0;

}
