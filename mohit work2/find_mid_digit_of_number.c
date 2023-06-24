#include<stdio.h>
int length(int number)
{ int count=0;
    while(number>0)
    {
        number=number/10;
        count++;
    }
    return count;
}
int middle(int number,int count)
{
    int half,i=1,remainder;
    half=(count+1)/2;
    for(i=1;i<=half;i++)
    {
        remainder=number%10;
        number=number/10;    
    }
    return remainder;
}
main(){
    int number,count,answer;
    printf("enter the number");
    scanf("%d",&number);

    count=length(number);

    if(count%2!=0){
        answer=middle(number,count);
        printf("number%d middle numberis%d ",number,answer);
    }
    else
        printf("plese enter the odd number length digit number");
}