#include<stdio.h>
void posint(int Pos[],int *sum){
    *sum=0;
    for (int i=0;i<10;i++)
    {
        if(Pos[i]>0){
            *sum = *sum + 1;
        }
        
    }
    
    
}
void main (){
    int a,b,sum;
    int pos[]={4,7,-7,-2,-67,-4,9,-4,9,-8};
    posint(pos,&sum);
    printf("there are %d",sum);
}