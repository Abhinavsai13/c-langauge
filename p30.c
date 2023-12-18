#include<stdio.h>
int factN(int n);
int main (){
    printf("%d",factN(5));
    return 0 ;
}
int factN(int n){
    if (n==1){
        return 1;
    }
    int ftn = factN(n-1);
    int ft = ftn * n;
    
}