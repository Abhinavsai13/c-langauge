#include<stdio.h>

int main(){
    int a,i,b;
printf("enter starting number and ending number");
scanf("%d %d",&a,&b);
for (a; a < b ; a+=1)
{
    printf("%d\n",a);
}

    return 0;
}