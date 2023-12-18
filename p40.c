#include<stdio.h>

void main (){
    int array[2][3][5];
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<3;j++)
        {
            for (int k=0;k<5;k++)
            {
                printf("adress of array [%d] [%d] [%d] is %u\n",i+1,j+1,k+1,&array[i][j][k]);
            }
            
        }
        
    }
    
}