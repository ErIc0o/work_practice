#include<stdio.h>
main(){
    int n,i,j,k,l,half,temp;
    printf("enter the number: ");
    scanf("%d",&n);
    half=(n+1)/2;
    for(i=half;i>=1;i--){
        if(i<=half)
            temp=i;
        else
         temp=(n+1)-i;
        for(j=1;j<=half-temp;j++){
            printf(" ");
        }
        l=temp-1;
        for(k=1;k<=(2*temp)-1;k++){
            if(k<=temp)
            {
                printf("%d",k);
            }
            else
            {
                printf("%d",l);
                l--;
            }
        }
        printf("\n");
    }
}