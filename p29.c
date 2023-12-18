#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    int sum=0,a;
    scanf("%d", &n);
    while(n>0){
        sum = sum + (n%10);
        n = n / 10;
        if (n<1){
            break;
        }
    }
    printf("%d",sum);
    return 0;
}