#include<stdio.h>

void main (){
	FILE *p1;
	char c;
	int i=0;
	p1=fopen("file1.txt","r");
	while((c=fgetc(p1))!=EOF){
		i++;
	}
	printf("Number of characters = %d",i);
}