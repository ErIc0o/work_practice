#include<stdio.h>
main(){
    int number,a[100],i,j,count=0;
    printf("enter the number: ");
    scanf("%d",&number);
    for(i=0;i<number;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<number;i++){
        count=0;
        for(j=0;j<number;j++){
            if(a[i]==a[j]){
                count++;
            }

        }
        printf("count of %d is %d\n",a[i],count);
    }
}