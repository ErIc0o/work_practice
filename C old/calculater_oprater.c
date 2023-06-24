#include<stdio.h>
#include<stdlib.h>

void add(float a,float b){
    printf("%f+%f=%f",a,b,a+b);
}

void minus(float a,float b){
    printf("%f-%f=%f",a,b,a-b);
}

void multiply(float a,float b){
    printf("%f*%f=%f",a,b,a*b);
}

void divide(float a,float b){
    printf("%f/%f=%f",a,b,a/b);
}

main(){
    float a,b;
    char operator;
    printf("enter the value of a,b: ");
    scanf("%f%f",&a,&b);
    //scanf("%c",&operator);
    printf("enter the operator");
    scanf("%c",&operator);
    if(operator=='+')
        add(a,b);
    else if(operator=='-')
        minus(a,b);
    else if(operator=='*')
        multiply(a,b);
    else if(operator=='/')
        divide(a,b);
    else
        printf("enter the correct operator");
}