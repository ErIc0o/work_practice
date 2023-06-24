#include<stdio.h>
main(){
    int i,j,n,k;
    printf("enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=i;
        for(j=1;j<=i;j++){
            printf("%d",k);
            k++;
        }
        printf("\n");
    }
}