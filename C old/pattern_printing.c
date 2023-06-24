#include<stdio.h>
main(){
    int number,i,j;
    // printf("enter the number: ");
    // scanf("%d",&number);
    for(i=1;i<=5;i++){
        for(j=1;j<=(6-i);j++)
        {
            if(j<=i)
                printf("*");
            else
                printf(" ");    
        }
        printf("\n"); 
    }
}