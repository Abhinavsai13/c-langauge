#include <stdio.h>
#include <stdlib.h>
int main (){
    int i,a[10][10],n,j,sum1=0,sum2=0,k,ans;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(k=0;k<n;k++){
        sum1=sum1+a[k][k];
        //printf("%d\n",a[k][k]);
        sum2=sum2+a[k][n-k-1];
    }
    
    ans=sum1+sum2;
    ans=abs(ans);
    printf("%d",ans);
    return 0;
}
