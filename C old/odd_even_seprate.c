#include<stdio.h>
main(){
    int number,a[100],b[100],c[100],i,j=0,k=0;
printf("enter the number: ");
scanf("%d",&number);
for(i=0;i<number;i++)
{
    scanf("%d",&a[i]);
}
    for(i=0;i<number;i++){
        if(a[i]%2==0){
            b[j]=a[i];
            j++;
        }
        else{
            c[k]=a[i];
            k++;
        }
        
    }
    printf("the even number is\n");
        for(i=0;i<j;i++)
            printf("%d\n",b[i]);
    printf("the odd number is\n");
        for(i=0;i<k;i++)
            printf("%d\n",c[i]);
}