#include<stdio.h>
void isrtion(int number ,int a[])
{
    int key,i,j;
    for(i=0;i<number;i++){
        key=a[i];
        j=i-1;
        while(j>=0&&key<a[j])
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }

    for(i=0;i<number;i++){
        printf("%d, ",a[i]);
    }

}
    
main(){
    int a[100],number,i;
    printf("enter the number");
    scanf("%d",&number);
    for(i=0;i<number;i++){
        scanf("%d",&a[i]);
    }
    isrtion(number,a);
}
