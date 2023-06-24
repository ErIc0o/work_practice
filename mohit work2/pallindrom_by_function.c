#include<stdio.h>
int is_pallindrom_number(number){
    int tampnum,i,remainder,sum=0;
    tampnum=number;
    for(i=number;i>0;i/=10){
        remainder=i%10;
        sum=sum*10+remainder;
    }
    if(sum==tampnum)
     return 1;
     else
     return 0;
}  
main(){
    int number,n_number,answer,i;
    printf("enter the number: ");
    scanf("%d",&number);
    for(i=1;i<=number;i++)
    {
        printf("enter the number %d:",i);
        scanf("%d",&n_number);
        answer=is_pallindrom_number(n_number);  
        if(answer==1)
             printf("your number %d is pallindrom number\n",n_number);
        else
            printf("your number %d is not pallindrom number\n",n_number);
    }

}