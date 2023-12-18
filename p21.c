#include<stdio.h>

int main () {
int a,b=10,c,d;
printf("enter tabel number\n");
scanf("%d",&d);
for(int i=10;i>=1;i--){
    c = i * d;
    printf("%d X %d = %d\n",d,i,c);
}
    return 0;
}