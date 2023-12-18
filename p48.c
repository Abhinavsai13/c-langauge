#include<stdio.h>

void main (){
    int n;
    printf("enter how many numbers");
    scanf("%d",&n);
    int rev[n];
    int Rev[n];
    printf("enter numbers");
    for (int i=1;i<=n;i++) {
        scanf("%d",&rev[i]);
    }
    for (int i=0;i<=n;i++)
    {
        Rev[n+i]=rev[n-i];
        printf("%d ",Rev[n+i]);
    }
    
}