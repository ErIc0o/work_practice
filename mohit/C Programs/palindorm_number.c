#include<stdio.h>
main(){
    int number,i,remainder,sum=0;
    printf("enter the  number : ");
    scanf("%d",&number);
    for(i=number;i>0;i/=10){
        remainder=i%10;
        sum=sum*10+remainder;   
    }
    if(sum==number)
    printf("your nuembr %d's palindrom number is = %d.",number,sum);
    else
    printf("please enter correct number");
    printf("\n");
    printf("\n___________________________________________________________________\n");
}