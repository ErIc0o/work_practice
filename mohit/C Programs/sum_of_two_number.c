#include<stdio.h>
int sum(int *s,int *q);
main(){
    int a,b,*p,*q,ans;
    printf("enter the value of a: ");
    scanf("%d",&a);
    printf("enter the value of b: ");
    scanf("%d",&b);
    p=&a;
    q=&b;
    ans=sum(&a,&b);
    printf("sum of entring number is%d",ans);
}
int sum(int *s,int *t){
    int ans;
    ans=*s+*t;
    return ans;
}