#include<stdio.h>
main(){
    int n,a[100],i,j,*p,count=0;
    printf("enter the number: ");
    scanf("%d",&n);
    p=&a[0];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    // for(i=0;i<n;i++){
    //     printf("%d",*(p+i));
    // }
    for(i=0;i<n;i++){
        count=0;
        for(j=0;j<n;j++){
            if(a[i]==a[j]){
                count++;
            }
        }
        printf("count of element %d in array is %d\n",a[i],count);
    }    
}