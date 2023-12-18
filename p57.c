#include<stdio.h>
#include<stdlib.h>
 void main(){
    FILE *p1,*p2,*p3;
    char ch;
    p1=fopen("file1.txt","r");
    p2=fopen("file2.txt","r");
    p3=fopen("merge.txt","w");
    if(p1==NULL||p2==NULL){
        exit(0);
        printf("error");
    }
    printf("The contents of merged file are:\n");
    
        while((ch=fgetc(p1))!=EOF){
            fprintf(p3,"%c",ch);
        }
        while((ch=fgetc(p2))!=EOF){
            fprintf(p3,"%c",ch);
        }
    
    fclose(p1);
    fclose(p2);
    fclose(p3);
    p3=fopen("merge.txt","r");
    while ((ch=fgetc(p3))!=EOF)
    {
        printf("%c",ch);
    }
    
    fclose(p3);
    }
 
 