#include<stdio.h>
#include<stdlib.h>
main(){
    int *p,i,n,sum=0,**q;
    printf("enter the number: ");
    scanf("%d",&n);
    q=&p;
    p=(int*)calloc(n,sizeof(int));
    if(p==NULL){
        printf("error");
        exit(0);
    }
    
    for(i=0;i<n;i++){
        printf("enter the elemnt in array%d: ",i+1);
        scanf("%d",p+i);
        sum=sum+*(p+i);
    }
     printf("elemnt in array: ");
    for(i=0;i<n;i++){
        printf("%3d",*(*q+i));
    }
    printf("\nsum of elemnt in array=%d\n",sum);
}