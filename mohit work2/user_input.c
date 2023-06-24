#include<stdio.h>
main(){
    float principal,rate,time,si,amount;
    printf("enter princpale:");
    scanf("%f",&principal);
    printf("enter rate of intrest:");
    scanf("%f",&rate);
    printf("enter time:");
    scanf("%f",&time);
    si=(principal*rate*time)/100;
    amount=principal+si;
    printf("simple interest is%f\n amount is%f",si,amount);
    getch();
}