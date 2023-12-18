#include<stdio.h>
void occur(char *ptr,char b){
    int count=0;
    int i=0;
    while (1)
    {
        if (ptr[i]==b)
        {
            count = count + 1;
        }
        if (ptr[i]=='\0')
        {
            break;
        }
        
        i++;
        
    }
    printf("%d",count);
    
}
void main () {
    char word[]="abhinav is great";
    occur(word,'i');
}