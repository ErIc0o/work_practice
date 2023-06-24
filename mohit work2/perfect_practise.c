#include<stdio.h>
main(){
    int number,sum=0,i=1;
    printf("enter the number: ");
    scanf("%d",&number);
    for(i=1;i<number;i++){
        if(number%i==0){
            sum=sum+i;
        }
    }
    if(sum==number)
    printf("your numner is perfect number ");
    else
    printf("your number is not perfect number");
}