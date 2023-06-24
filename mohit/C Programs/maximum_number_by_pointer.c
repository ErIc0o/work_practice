#include<stdio.h>
main(){
    int a=5,b=6,*p,*q;
    p=&a;
    q=&b;
    if(p>q){
        printf("a is maximum number\n");
    }
    else{
        printf("q is maximum number\n");
    }
}