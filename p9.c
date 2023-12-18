#include<stdio.h>
 int main (){
    int marks;
    printf("enter marks of student\n");
    scanf("%d",&marks);
    if (marks>=90 && marks<=100)
    {
        printf("grade is A+");
    }
    else if (marks>=80 && marks<=90)
    {
        printf("grade is A");
    }
    
    return 0;
 }