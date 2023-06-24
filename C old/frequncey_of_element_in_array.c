#include<stdio.h>
main(){
    int number,a[100],i,count=0,k;
    printf("enter the number: ");
    scanf("%d",&number);
    for(i=0;i<number;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the number to count the frequency: ");
    scanf("%d",&k);
    for(i=0;i<number;i++)
    {
        if(a[i]==k)
        count++;
    }
    printf("the frequency of element%d is %d ",k,count);
}