#include<stdio.h>
main(){
    int number,arr[100],key,i,j;
    printf("enter the number: ");
    scanf("%d",&number);
    for(i=0;i<number;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<number;i++){
        key=arr[i];
        j=i-1;
        while(j>=0&&key<arr[j])
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
    printf("the shifting of array is\n");
    for(i=0;i<number;i++)
    printf("%d,",arr[i]);
}
