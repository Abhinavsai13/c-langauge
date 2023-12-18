#include<stdio.h>
void REV(int n,int ptr[]){
    int temp;
    for(int i=0;i=n/2;i++){
     temp = ptr[i];
     ptr[i] = ptr[n-1-i];
     ptr[n-1-i]=ptr[i]; 
}
}
void main (){
    int a,b;
    int reverse[]={3,2,9,8,5};
    REV(5,reverse);
    for (int i=0;i<5;i++)
    {
    printf("%d",reverse[i]);
    }
    
}