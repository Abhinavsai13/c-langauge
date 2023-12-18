
#include<stdio.h>

void main (){
    int  n;
    printf("enter tabel no\n");
    scanf("%d",&n);
    int tabel[10];
    for(int i=0;i<10;i++){
        tabel[i]= n * (i+1);
    }
    for(int i=0;i<10;i++){
        printf("%d X %d = %d\n",n,i+1,tabel[i]);
    }
}