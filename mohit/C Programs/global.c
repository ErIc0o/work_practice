#include<stdio.h>
int a=20,b=30;
void swap(){
    a=a+b;
    b=a-b;
    a=b-a;
}
main(){
    swap();
    printf("a=%db=%d",a,b);
}