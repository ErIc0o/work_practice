#include<stdio.h>
main(){
    int number,a[100],i,j,max,min;
    printf("enter the number: ");
    scanf("%d",&number);
    if(number<10){
        printf("atleast enter number above 10");
    }
    else
    {
        for(i=0;i<number;i++){
        scanf("%d",&a[i]);
        }
        for(i=0;i<number;i++){
            for(j=i+1;j<number;j++){
                if(i==0){
                    max=a[i];
                    min=a[i];
                }
                else
                {
                    if(a[j]>max)
                    max=a[j];    
                }
                    if(a[j]<min){
                    min=a[j];
                }
            }
        }
        printf("maximum=%d \n minimum=%d",max,min);
    }
}