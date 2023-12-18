#include<stdio.h>
void strelen(char *ptr){
    int sum = 0;
    while (1)
    {
        if (*ptr=='\0'){
            break;
        }
        sum = sum + 1;
        ptr++;
    }
    printf("%d",sum);
    
}

void main (){
    char test[]="abhinav";
    strelen(test);
}