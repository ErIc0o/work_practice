#include<stdio.h>
int sum_of_digts( int number)
{
    int sum=0,i,remainder;
    for(i=number;i>0;i/=10){
        remainder=i%10;
        sum=sum+remainder;
    }
    return sum;
}

main(){
    int number,n_number,answar,i;
    printf("enter the number: ");
    scanf("%d",&number);
    printf("enter the n_number: ");
    for(i=1;i<=number;i++)
    {
        scanf("%d",&n_number);
        answar=sum_of_digts(n_number);
        printf("sum of digits of %d is %d\n",n_number,answar);

    }

}