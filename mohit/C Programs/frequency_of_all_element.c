#include<stdio.h>
main(){
    int a[100],b[100],*p,*q,i,j,n,c=0;
    printf("enter the size of array: ");
    scanf("%d",&n);
    printf("enter the element in array: ");
    p=&a[0];
    q=&b[0];
    printf("\n\n");
    for(i=0;i<n;i++){
        scanf("%d",p+i);
    }
    for(i=0;i<n;i++){
        c=1;
        if(*(p+i)!=-1){
            for(j=i+1;j<n;j++){
                if(*(p+i)==*(p+j)){
                    c++;
                    *(p+j)=-1;
                }
            }
            *(q+i)=c;
        }
    }
    printf("the frequency of number in array: ");
    for(i=0;i<n;i++){
        if(*(p+i)!=-1){
            printf("no of %d is %d\n",*(p+i),*(q+i));
        }
    }
}