#include<stdio.h>
#include<math.h>

int main(){
int a,b,c;
printf("enter base number");
scanf("%i",&a);
printf("enter power number");
scanf("%i",&b);
int power = pow(a,b);
printf("answer is %i",power);
    return 0;
}