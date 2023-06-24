#include<stdio.h>
main(){
    int number,i,j;
    printf("enter the number: ");
    scanf("%d",&number);
    for(i=1;i<=number;i++)
    {
        for(j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }
}
