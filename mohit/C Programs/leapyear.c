#include<stdio.h>
main(){
    int year;
    printf("enter the year: ");
    scanf("%d",&year);
    if((year%400==0)||((year%4==0)&&(year%100)))
    printf("the entering year is leap year");
    else
    printf("entering year is not leap year");
}