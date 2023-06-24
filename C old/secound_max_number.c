#include<stdio.h>
#include<limits.h>
main(){
    int number,a[100],i,max1,max2;
    printf("enter the number: ");
    scanf("%d",&number);
    for(i=0;i<number;i++){
        scanf("%d",&a[i]);
    }
    max1=a[0];
    max2=INT_MIN;
    //printf("%d",INT_MIN);
     for(i=0;i<number;i++){
        if(a[i]>max1){
            max2=max1;
            max1=a[i];
        }
        else if(a[i]>max2&&a[i]<max1)
            max2=a[i];
    }
    printf("first max number=%d\n",max1);
    printf("sceound max number=%d",max2);

}