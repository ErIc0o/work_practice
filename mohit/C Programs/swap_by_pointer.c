#include<stdio.h>
void swap(int *a,int *b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
main(){
    int a,b;
    printf("enter the number: ");
    scanf("%d,%d",&a,&b);
    swap(&a,&b);
    printf("%d,%d",a,b);
}