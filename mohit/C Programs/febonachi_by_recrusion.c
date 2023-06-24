#include<stdio.h>
void fibo(int a,int b,int count,int n){
    int c;
    c=a+b;
    if(n==count)
    return 0;
    printf("%d,",c);
    count++;
    fibo(b,c,count,n);
}
main(){
    int a=0,b=1,n,count=2;
    printf("enter the nth term :");
    scanf("%d",&n);
    printf("%d,%d,",a,b);
    fibo(a,b,count,n);
    printf("\n");
}