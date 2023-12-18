#include<stdio.h>
void ten(int *x){
    printf("value is %d",*x * 10);
}
int main (){
    int a=6;
    ten(&a);
    return 0;
}
