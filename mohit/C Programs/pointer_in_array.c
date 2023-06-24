#include<stdio.h>
main(){
    int a[5],*p,i;
    p=&a[0];
    printf("enter the 5 element:\n");
    for(i=0;i<5;i++){
        printf("enter the element %d: ",i+1);
        scanf("%d",p+i);
    }
    printf("\n");
    for(i=0;i<5;i++){
        printf("%d,",*(p+i));
    }
    printf("\n");
    printf("\n***************************************************\n");

}