#include<stdio.h>
main(){
    int number,a[100],i,j,k=0;
    printf("enter the number: ");
    scanf("%d",&number);
    for(i=0;i<number;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("before swapping\n ");
    for(i=0;i<number;i++){
        printf("%d\n",a[i]);
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
    printf("after swapping\n");
    for(i=0;i<number;i++){
    printf("%d\n",a[i]);
    }
}