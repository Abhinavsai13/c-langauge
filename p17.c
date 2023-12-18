#include<stdio.h>

int main (){
int a,b=0;
printf("enter number to end\n");
scanf("%d",&a);
for(int i=1;i<=a;i++){
    b=b+i;
}
printf("%d",b);
    return 0;
}
