#include<stdio.h>

int main (){
    char ch;
    char s[500];
    char sen[500];
    scanf("%c\n%s\n%[^\n]s",&ch,&s,&sen);
    printf("%c\n%s\n%s\n",ch,s,sen);
    return 0;
}
