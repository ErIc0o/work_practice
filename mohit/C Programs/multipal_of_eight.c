#include<stdio.h>
main(){
    int i,j,k,l=1,n,half,temp;
    printf("enter the number: ");
    scanf("%d",&n);
    half=(n+1)/2;
    for(i=1;i<=n;i++){
        if(i<=half)
        temp=i;
        else
        temp=(n+1)-i;
        for(j=1;j<=half-temp;j++){
            printf(" ");
        }
        for(k=1;k<=(2*temp)-1;k++){
            printf("%d",8*l);
            l++;
            //printf("*");
        }
        printf("\n");

    }
}