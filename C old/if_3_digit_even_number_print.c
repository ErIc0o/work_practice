#include<stdio.h>
main(){
    int number,count=0,i=2,orgnumber;
    printf("enter the number");
    scanf("%d",&number);
    orgnumber=number;
    while (number>0)
    {
        number=number/10;
        count++;
    }
    //printf("%d",count);
    if(count==3)
    {
        for(i=2;i<orgnumber;i=i+2)
        {
        printf("%d,",i);
        }
    }
    else
    {
        printf("enter the three digit number");
    }
}