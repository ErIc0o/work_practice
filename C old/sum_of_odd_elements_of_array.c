#include<stdio.h>
main(){
    int n[100],i,number,sum=0,k;
    printf("enter the number: ");
    scanf("%d",&number); 
    for(i=0;i<number;i++){
        scanf("%d",&n[i]);
    }
    for(k=0;k<number;k++){
        sum=sum+n[k];
    }
    printf("sum of all element of array is%d",sum);
}