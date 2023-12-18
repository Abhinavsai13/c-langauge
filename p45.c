#include<stdio.h>
#include<string.h> 
void main (){
    char st1[35];
    char st2[40];
    gets(st1);
    for (int i=0;1;i++)
    {
        scanf("%c",&st2[i]);
        if(st2='\n'){
            break;
        }
    }
    printf("%s",st2);
}