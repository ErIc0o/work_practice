#include<stdio.h>
main(){
    int n,a[100],*p,i,j,k;
    printf("emter the number: ");
    scanf("%d",&n);
    p=&a[i];
    for(i=0;i<n;i++){
        scanf("%d",p+i);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(*(p+i)>*(p+j)){
                k=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=k;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("the sorting of array is=%d,\n",*(p+i));
    }
}