#include<stdio.h>
main(){
    int n,a[100],*p,i,sum=0;
    printf("enter the number: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    p=&a[0];
    for(i=0;i<n;i++){
        sum=sum+*(p+i);
    }
    printf("sum of all element in array is %d",sum);
    printf("\n");
    printf("\n**************************************\n");
}