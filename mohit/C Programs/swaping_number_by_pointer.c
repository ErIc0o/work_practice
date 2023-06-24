#include<stdio.h>
void swap(int*,int*);
main(){
    int a,b;
    printf("enter the number: ");
    scanf("%d,%d",&a,&b);
    swap(&a,&b);
    printf("a=%d,b=%d",a,b);
}
void swap(int*x,int*y){
    int c;
    c=*x;
    *x=*y;
    *y=c;
}