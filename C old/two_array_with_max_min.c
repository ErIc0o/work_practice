#include<stdio.h>
main(){
    int number,i,a[100],b[100],j,k,max,min,sum=0;
    printf("enter the number: ");
    scanf("%d",&number);
    for(i=0;i<number;i++){
        scanf("%d",&a[i]);
       // b[i]=a[i];
    }
     for(i=0;i<number;i++){
        for(j=i+1 ;j<number;j++){
            if(a[i]< a[j]){
                k=a[i]; 
                a[i]=a[j];
                a[j]=k;
            }
        }
    }
    for(i=0;i<number;i++){
        b[i]=a[i];
    }
    max=a[0];
    //  for(i=0;i<number;i++){
    //     for(j=i+1 ;j<number;j++){
    //         if(b[i]< b[j]){
    //             k=b[i]; 
    //             b[i]=b[j];
    //             b[j]=k;
    //         }
    //     }
    // }
    min=b[number-1];
    sum=max+min;
    printf("sum of max form array a[i] and min of array b[i] is %d",sum);
}