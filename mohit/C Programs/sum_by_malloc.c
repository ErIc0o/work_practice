#include<stdio.h>
#include<stdlib.h>
main(){
    int n,*p,m,i;
    printf("enter the number: ");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    if(p==NULL){
        printf("error");
        exit(0);
    }
    for(i=0;i<n;i++){
    printf("enter the number%d=",i+1);
    scanf("%d",p+i);
    }
   
    // for(i=0;i<n;i++)
    // printf("%d",*(p+i));
    printf("enter the number of resize: ");
    scanf("%d",&m);
    p=(int*)realloc(p,m*sizeof(int));
    if(p==NULL){
        printf("error");
    }
    for(i=n;i<n+m;i++){
    printf("enter more number%d=",i+1);
    scanf("%d",p+i);
    }
    for(i=0;i<n+m;i++){
    printf("%3d",*(p+i));
    }
    free(p);
    for(i=0;i<n+m;i++){
    printf("%3d",*(p+i));
    
}