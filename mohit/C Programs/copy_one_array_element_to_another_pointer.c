#include<stdio.h>
main(){
    int n,a[100],b[100],*p,*q,i;
    printf("enter the number: ");
    scanf("%d",&n);
    p=&a[0];
    q=&b[0];
    for(i=0;i<n;i++){
        scanf("\n%d",p+i);
    }
     printf("\n");
    printf("***************************************************\n");
    for(i=0;i<n;i++){
        *(q+i)=*(p+i);
        
    }
    printf("after exchanging elements to another array: ");
    for(i=0;i<n;i++){
    printf("%d,",*(q+i));
    }
    printf("\n");
    printf("\n***************************************************\n");

}