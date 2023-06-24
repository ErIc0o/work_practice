#include<stdio.h>
main(){
    float basicsalry,da,hra,totalsalry;
    printf("enter the value of basicsalry,da,hra");
    scanf("%f%f%f",&basicsalry,&da,&hra);
    da=(basicsalry*da)/100;
    hra=(basicsalry*hra)/100;
    totalsalry=basicsalry+da+hra;
    printf("da is%f\n hra is%f\n totalsaly%f\n",da,hra,totalsalry);
}