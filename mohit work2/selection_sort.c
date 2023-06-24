#include<stdio.h>
main(){
    int number,i,j,a[100],min,c;
    printf("enter the number: ");
    scanf("%d",&number);
    for(i=0;i<number;i++){
        scanf("%d,",&a[i]);
    }
    for(i=0;i<number;i++){
        min = i;
        for(j=i+1;j<number;j++){
            if(a[j]<a[min])
                min=j;
        }
        if(min!=i){
            c=a[i];
            a[i]=a[min];
            a[min]=c;
        }
    }
    printf("after sorting array is \n");
    for(i=0;i<number;i++)
        printf("%d,",a[i]);
}