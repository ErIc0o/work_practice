#include<stdio.h>
main(){
    int a[100],*p,i,n;
    printf("enter the number: ");
    scanf("%d",&n);
    p=&a[i];
    for(i=0;i<n;i++){
        scanf("%d",p+i);
    }
    printf("before reversing array:\n ");
    for(i=0;i<n;i++){
        printf("%d,",*(p+i));
    }
    printf("\n");

    printf("after reversing array:\n ");
    for(i=n;i>0;i--){
        printf("%d,",*(p+i-1));
    }
    printf("\n");
    printf("\n******************************************\n");
}