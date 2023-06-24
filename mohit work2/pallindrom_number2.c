#include<stdio.h>
main(){
    int number,sum=0,remainder,orgnumber;
orgnumber=number;
printf("enter the number");
scanf("%d",&number);
 for(number;number>0;number/=10) 
 {
  remainder=number%10;
  sum=sum*10+remainder;
 }
 if(sum==orgnumber)
    printf("your number is pallindrom number");
 else
    printf("yuor number is not pallindrom number");
}