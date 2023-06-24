#include<stdio.h>
main(){
    int n,number,max,min,i;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",number);
        if(i==0)
        {
            max=number;
            min=number;
        }
        else
        {
            if(number>max)
            max=number;
            if(number<min)
            min=number;
        }
    }
    printf("max=%d&&min=%d",max,min);
}