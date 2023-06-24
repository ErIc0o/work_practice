#include<stdio.h>
main(){
    int number,a[100],i;
 printf("enter the number: ");
scanf("%d",&number);
for(i=0;i<number;i++)
{
    scanf("%d",&a[i]);
}

printf("the allernate of array: ");
for(i=0;i<number;i=i+2)
printf("%d, ",a[i]);
}