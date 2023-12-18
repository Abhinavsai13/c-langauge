#include<stdio.h>

int main (){
int a;
printf("ENTER YOUR AGE\n");
scanf("%d",&a); 
if (a>=18 && a<=49){
    printf("ADULT");
}
else if (a>=50){
    printf("SENIOR CITIZEN");
}
else {
    printf("ERROR");
}

    return 0;
}