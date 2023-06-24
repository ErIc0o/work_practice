#include<stdio.h>
main(){
    int number,a[100],i,j,k=0,max1,max2,min1,min2;
    printf("enter the number: ");
    scanf("%d",&number);
    for(i=0;i<number;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<number;i++){
        for(j=i+1 ;j<number;j++){
            if(a[i]<a[j]){
                k=a[i]; 
                a[i]=a[j];
                a[j]=k; 
            }
        }
    }
    // printf("second max = %d\n second min = %d", a[1],a[number-2]);
    for(i=0;i<number;i++){
        if(i==0){
        max1=a[i];
        max2=a[i+1];
        min1=a[number-1];
        min2=a[number-2];
        }
    }
    printf("max1=%d max2=%d min1=%d min2=%d", max1,max2,min1,min2);
}