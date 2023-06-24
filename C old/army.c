#include<stdio.h>
main(){
    int age;
    printf("enter the age");
    scanf("%d",&age);
    if((age>=18)&&(age<=25))
    {
        printf("you are eligible");
    }
    else 
    {
        printf("you are not eligible");
    }
}