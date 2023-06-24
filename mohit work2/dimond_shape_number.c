#include<stdio.h>
main(){
    int i,j,k,l,n,half,temp;
    printf("enter the number: ");
    scanf("%d",&n);
    half=(n+1)/2;
    //j=half-1;
   // k=(2*temp)-1;
    for(i=1;i<=n;i++){
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
                printf("%d",k);
            else
            {
                printf("%d",l);
                l--;
            }
        }
        printf("\n");
    }

}
