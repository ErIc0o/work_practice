#include<stdio.h>

int my_function(){
    int static a;
    a++;
    printf("%d",a);
}

void main(){
    my_function();
    my_function();
    my_function();
}