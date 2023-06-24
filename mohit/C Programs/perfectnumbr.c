#include<stdio.h>
main(){
    int number,i,sum=0;
    printf("enter the number: ");
    scanf("%d",&number);
    for(i=1;i<number;i++){
        if(number%i==0)
        sum=sum+i;
    }
    if(sum==number)
    printf("your number is perfect number");
    else
    printf("your number is not perfect number\n");
    printf("\n");
    printf("so please enter other number");
    printf("\n__________________________________________________________________\n");
}