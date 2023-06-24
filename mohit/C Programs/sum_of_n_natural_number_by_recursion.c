#include<stdio.h>
int sum(int n){
    int product;
    if(n==1)
    return 1;
    product=n+sum(n-1);
    return product;
}
main(){
    int n=10,ans;
    ans=sum(n);
    printf("sum of first %d number is %d",n,ans);
}