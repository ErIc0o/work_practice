#include<stdio.h>
int factorial(int n){
    int product=1;
    if(n==1)
    return 1;
    product=n*factorial(n-1);
    return product;
}
main(){
    int n=5,ans;
    ans=factorial(n);
    printf("factorial of %d is %d",n,ans);
}