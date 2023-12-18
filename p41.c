#include<stdio.h>

void main (){
    char name[]= "abhinav";
    char *ptr = name;
    for (int i=0;i<=7; i++)
    {
        printf("%c",*ptr);
    ptr++;
    }
    
}