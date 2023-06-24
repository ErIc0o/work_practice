#include<stdio.h>
int odd(int *p,int n){
    int sum=0,i;
    for(i=0;i<n;i++){
        if(*(p+i)%2!=0){
            sum=sum+*(p+i);
        }
    }
    return sum;
}
int even(int *p,int n){
    int sum=0,i;
    for(i=0;i<n;i++){
        if(*(p+i)%2==0){
            sum=sum+*(p+i);
        }
    }
    return sum;
}
main(){
    int n,a[100],*p,i,sum,ans;
    printf("enter the number: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    p=&a[0];

    ans=odd(&a[0],n);
    sum=even(a,n);
    
    printf("sum of odd element in array is %d",ans);
    printf("\n");
    printf("sum of even element in array is %d",sum);
    printf("\n");
    printf("\n*************************************\n");
    
}