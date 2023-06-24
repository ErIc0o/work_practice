#include<stdio.h>
main(){
    int number,a[100],i;
    printf("enter the number: ");
    scanf("%d",&number);
    printf("enter the number in array\n  ");
    for(i=0;i<number;i++){
        printf("enter the %d number-:",i+1);
        scanf("%d",&a[i]);
    }
    for(i=number;i>=0;i--){
        printf("the revers order of array is %d\n",a[i]);
    }
}