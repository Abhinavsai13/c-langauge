#include<stdio.h>
void main () {
    int a[10],n,key,i;
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&key);
    int low=0,mid,high=n-1;
    while (low<=high)
    {
    mid =(low +high)/2;
        if(a[mid]==key){
            printf("found at %d",mid+1);
        }
        if(a[mid]>key){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    } 
}