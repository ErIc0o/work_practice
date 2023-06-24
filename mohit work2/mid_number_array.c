#include<stdio.h>
main(){
    int number,a[100],i,mid;
    float middle;
    printf("enter the number: ");
    scanf("%d",&number);
    for(i=0;i<number;i++){
        scanf("%d",&a[i]);
    }
    if(number%2==0){
    mid=number/2;
    middle=(a[mid]+a[mid-1])/2.0;
    printf("the middle number of array is=%f",middle);
    }
    else
    {
    mid=(number+1)/2;
    printf("the mid number of array is=%d",a[mid-1]);
    }
}