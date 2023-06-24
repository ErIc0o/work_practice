#include<stdio.h>
main(){
    int number;
    printf("enter the number");
    scanf("%d",&number);
    if((number%5==0)&&(number%11==0))
    {
    printf("number is devisable");
    }
    else
    {
    printf("number is not devisable");
    }
}