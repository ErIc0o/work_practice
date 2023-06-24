#include<stdio.h>
main(){
    int number,a[50],i,j,max3,min3,k,sum=0,count=0,remainder,sum2=0;
    printf("enter the number: ");
    scanf("%d",&number);
    for(i=0;i<number;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<number;i++){
        for(i=0;i<number;i++){
            if(a[i]<a[j]){
                k=a[i];
                a[i]=a[j];
                a[j]=k;
            }
        }
    }
    min3=a[2];
    max3=a[number-3];
    sum=max3+min3;
    for(i=sum;i>0;i/=10){
        remainder=i%10;n
        count=count+remainder;
        //printf("%d",count);
    }
    for(i=count;i>0;i/=10){
        remainder=i%10;
        sum2=sum2+remainder;
    }
    printf("the sum of digts is %d",sum2);
}
