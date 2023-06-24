#include<stdio.h>
#include<stdlib.h>
main(){
    int *p,i,n;
    printf("enter the number: ");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
    if(p==NULL){
        printf("error");
        exit(0);
    }
    printf("enter the elemnt in array: ");
    for(i=0;i<n;i++){
        scanf("%d",p+i);
    }
     printf("elemnt in array: ");
    for(i=0;i<n;i++){
        printf("%3d",*(p+i));
    }
}