#include<stdio.h>
main(){
    int n,i,sum=1,*f;
    printf("enter the number: ");
    scanf("%d",&n);
    f=&sum;
    for(i=1;i<=n;i++){
    *f=*f*i;
    }
    printf("factorial of %d is =%d.\n",n,sum);

}