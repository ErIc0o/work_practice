#include<stdio.h>
main(){
    double number,i=1;
    printf("enter the number: ");
    scanf("%lf",&number);
    for(i=1;i<=10;i++)
    printf("%lf*%lf=%lf\n",number,i,number*i);
}