#include<stdio.h>
void slice(char *slc,int a, int b){
    char dope[50];
    for (int i = 0; i < b; i++)
    {   
        dope[i]=slc[a+i];
        if (a==b){
            break;
        }
    }
    dope[b+1]='\0';
    printf("%s",dope);
    
    
    
}
void main () {
    char stln[]="abhinavisgreat";
    slice(stln,4,8);
}