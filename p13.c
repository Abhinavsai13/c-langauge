#include<stdio.h>

int main (){
int a,b;
char op;
printf("enter number1 oeprator then second number\n");
scanf("%d %c %d",&a,&op,&b);

switch (op)
{
case'+':
printf("sum is%d", a + b ); 
    break;
case'-':
printf("sum is%d", a - b ); 
    break;
    case'*':
printf("sum is%d", a * b ); 
    break;
    case'/':
printf("sum is%d", a / b ); 
    break;
default:
printf("error");
    break;
}
    return 0;
}