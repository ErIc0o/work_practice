#include<stdio.h>
int is_perfect_number(number){
    int sum=0,i=1;
    for(i=1;i<number;i++)
    {
    if(number%i==0)
    sum=sum+i;
    }
if(sum==number)
 return 1;
else
 return 0;
}
main(){
    int number,n_number,i,answer;
    printf("enter the number:");
    scanf("%d",&number);
    for(i=1;i<=number;i++)
        {printf("enter the n_number %d :",i);
        scanf("%d",&n_number);
        answer=is_perfect_number(n_number);
        if(answer==1)
             printf("your number %d is perfect number\n",n_number);
        else
            printf("your number %d is not perfect number\n",n_number);

    }
 }