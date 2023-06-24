#include<stdio.h>
#include<math.h>
main(){
    double principal=10000,rate=8,time=2,amount,ci,x;
    x=1+(rate/100);
    amount=principal*pow(x,time);
   // printf("%lf",amount);
    ci=amount-principal;
   // printf("%f",x);

    printf("principal is%lf\nrate of intrest is%lf\ntime period is%lf\namount%lf\nci%lfrate\n", principal,rate,time,amount,ci);
    
}