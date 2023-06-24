#include<stdio.h>
#include<math.h>
main(){
double principal,rate,time,ci,amount,x;
    printf("enter principal");
    scanf("%lf",&principal);
    printf("enter rate of intrest");
    scanf("%lf",&rate);
    printf("enter time");
    scanf("%lf",&time);
    x=1+(rate/100);
  //  printf("%lf",pow(x,time));
    amount=principal*pow(x,time);
    ci=amount-principal;
    printf("principal is %lf\n rate is%lf\n time is%lf\n ci is%lf\n amount is%lf\n",principal,rate,time,ci,amount);
getch();
    }