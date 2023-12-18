#include<stdio.h>
void nam();
void bon();

int main(){
    char ab;
    printf("enter namtonality f for french i for indian\n");
    scanf("%c\n",&ab);
    if (ab =='f')
    {
        bon();
    }
    else (ab == 'i'){
    nam();
    }
    return 0;
}
void nam () {
    printf("namaste");
}
void bon () {
    printf("bonjur");
}
