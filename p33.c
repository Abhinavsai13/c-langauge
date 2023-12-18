#include<stdio.h>

void main (){
    int marks[5];
    for(int i=1;i<=5;i++){
        scanf("%d",&marks[i]);
    }
    for (int i=1;i<=5;i++)
    {
        printf("marks are %d\n",marks[i]);
    }
    
}