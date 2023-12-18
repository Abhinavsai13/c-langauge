#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char word[20],i;
    scanf("%s",word);
    for(i=0;i<9;i++)
         a[i]=0;
    for (i=0;i<strlen(word);i++)
    {
        if (word[i]==1){
            a[i]++;
        }
        else if(word[i]==2)
          a[i]++;
        
    }
    
    return 0;
}
