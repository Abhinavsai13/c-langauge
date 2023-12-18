#include<stdio.h>
void main () {
    int a,n,sum=0,m;
    printf("Enter number\n");
    scanf("%d",&a);
    m=a;
    while (a>0){    
        n=a%10;
        sum=n+(sum*10);
        a=a/10;
    }
    printf("%d ",sum);
    if(m==sum){
        printf("is a palindrome number");
    }
    else{
        printf("is not a palindrome number");
    }
}