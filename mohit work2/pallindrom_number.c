#include<stdio.h>
#include<math.h>
main()
{int number,i,count=0,sum=0,r;
printf("enter the value of number");
scanf("%d",&number);
for(i=number;i>0;i/=10)
{
   count++ ;
}
//printf("%d",count);
count=count-1;
for(i=number;i>0;i/=10)
{
   r=i%10;
   sum=sum+r*pow(10,count);
   count--;
}
if(sum==number)
printf("your number is pallindrom number");
else
printf("your number is not pallindrom number");
}
