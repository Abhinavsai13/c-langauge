#include<stdio.h>

int main (){
    int a=3,b=8;
    int *ptr ;
    ptr = &a;

    printf("%d",*(&ptr));
    printf("%d",&a);
    return 0;
}