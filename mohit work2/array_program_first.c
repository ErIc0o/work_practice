#include<stdio.h>
main(){
    int a[8],i;

    //asking user to enter 8 number;
    printf("enter 8 number");
    
    //reading 8 number;
    for(i=0;i<8;i++)
        scanf("%d",&a[i]);
    
    //printing those 8 number;
    for(i=0;i<8;i++)
        printf("%d, ",a[i]);
}