#include<stdio.h>
main(){
    int number,a[100],b[100],i;
    printf("enter the number: ");
    scanf("%d",&number);
    for(i=0;i<number;i++)
        {
            scanf("%d",&a[i]);        
        }
    for(i=0;i<number;i++)
        {
            b[i]=a[i];
        }
    for(i=0;i<number;i++)
        {
            printf("%d,",b[i]);
        }


}