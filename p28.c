#include<stdio.h>

float areaofsquare(float a);
float areaofcirle(float a);
float areaofrectangle(float a, float b);

int main (){
    int a = 6;
    int b = 7;
    printf("%f",areaofsquare(a) );
    printf("%f",areaofrectangle(a,b));
    return 0;
}
float areaofsquare(float a){
    return a*a;
}
float areaofcirle (float a){
    return 3.14 * a * a;
}
float areaofrectangle (float a,float b){
    return a*b;
}