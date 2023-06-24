#include<stdio.h>
#include<math.h>
main(){
    double a,b,c,s,area,d;
    printf("enter the value of a,b,c");
    scanf("%lf%lf%lf",&a,&b,&c);
    s=(a+b+c)/2;
    d=s*(s-a)*(s-b)*(s-c);
    area=sqrt(d);
    printf("value of a%lf\n value of b%lf\n value ofc%lf\n d is%lf\n s is%f\n area is%lf\n",a,b,c,d,s,area);
}