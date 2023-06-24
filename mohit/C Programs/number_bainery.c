#include<stdio.h>
main(){
    int i ,num;
    printf("enter the number: ");
    scanf("%d",&num);
    while(num<0){
        i=num%10;
        if((i==0)&&(i==1))
        printf("your number is bainary: ");
        break;
        num=num/10;
    }
    if(num!=0)
    printf("your number is bainary");
}