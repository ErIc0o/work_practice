#include<stdio.h>
main(){
    int number,remainder,sum=0,orgnumber;
    printf("enter the number");
    scanf("%d",&number);
    orgnumber=number;
    while (number>0)
    {
        remainder=number%10;
        sum=sum+(remainder*remainder*remainder);
        number=number/10;
    }
    if(sum==orgnumber)
         printf("%dis armstrong number",orgnumber);
    else
        printf("%dis not armstrong number",orgnumber );     
}   