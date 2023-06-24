#include<stdio.h>
main(){
    int number,temp,i,sum=0,remainder;
    printf("enter the number: ");
    scanf("%d",&number);
    temp=number;
    while(temp>0)
    {
        sum=0;
        while(temp>0)
        {
            remainder=temp%10;
            temp/=10;
            sum+=remainder;
        }
        // printf("sum=%d",sum);
        if(sum>=10){
            temp=sum;
        }
        else
        {
            printf("sum of number is %d",sum);
            break;
        }
    }
}