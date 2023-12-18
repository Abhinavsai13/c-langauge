#include<stdio.h>
void areaofsquare(int a);

int main () {
int a,b,c;
scanf("%d",&a);
areaofsquare(a);
    return 0;
}
void areaofsquare(int a){
int sum ;
sum = a * a;
printf("%d",sum);
}