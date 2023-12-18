#include<stdio.h>

int main (){
    int a,b,c,s=0;
printf("enter n\n");
scanf("%d",&a);
for (int i=1;i<=a;i++)
{
     s=i+s;
}
printf("answer is %d",s);
for(int i=a;i>=1;i--)
{
    printf("%d\n",i);
}
    return 0;
}