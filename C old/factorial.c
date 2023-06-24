#include<stdio.h>
main(){
    double number,product=1,i;
    printf("enter the number");
    scanf("%lf",&number);
    
    for(i=number;i>0;i--)
    {
        product=product*i;
       // printf("answar of product",product);
    }
    printf("factrorail of %lf is %lf",number,product);
}