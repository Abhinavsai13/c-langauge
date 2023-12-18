#include<stdio.h>
void main () {
    int a[10],n,i=0,j;
    scanf("%d",&n);
    while(n>0){
        if(n%2==0){
            a[i]=0;
        }
        else{
            a[i]=1;
        }
        n=n/2;
        i++;
    }
    for(j=0;j<i;j++){
        printf("%d",a[j]);
    }
}