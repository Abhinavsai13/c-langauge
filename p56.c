#include<stdio.h>
void main () {
    int a[20],n,i=0,j,sum[20],k=0,flag=0;
    scanf("%d",&n);
    while(n>0){
        a[i]=n%10;
        n=n/10;
        i++;
    }
    for(j=i-1;j>0;j--){
        //printf("%d",a[j]);
        sum[j]=a[j]+a[j-1];
        printf("%d",sum[j]);
        flag++;
    }

}