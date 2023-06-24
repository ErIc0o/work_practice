#include<stdio.h>
main(){
    int number,a[100],i,array,count=0,pos;
    printf("enter the number: ");
    scanf("%d",&number);
    for(i=0;i<number;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the numberfor array: ");
    scanf("%d",&array);
    for(i=0;i<number;i++){
        if(a[i]==array){
            pos=i+1;
            count++;
            break;
        }
    }
    if(count==1)
    printf("the position of array is %d ",pos);
    else
    printf("can't find your number");
}