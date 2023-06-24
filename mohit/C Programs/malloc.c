#include<stdio.h>
#include<stdlib.h>
main(){
    int n,*p,sum=0,i,**q;
    printf("enter the number: ");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));//(typecasting)malloc(number of element*(size data type))
    q=&p;//void*malloc(size_t size)
    if(p==NULL){//for checking if memory is allocated or not by the help of "NULL" pointer
        printf("ERROR out of memory");
        exit(0);
    }
    printf("enter the elemnts in array: ");
    for(i=0;i<n;i++){
        scanf("%d",p+i);
        sum=sum+*(p+i);
        
    }
    printf("array elemnt:");
    for(i=0;i<n;i++){
        printf("%u", *(*q+i));
    }
    printf("addition is%d",sum);


   
}