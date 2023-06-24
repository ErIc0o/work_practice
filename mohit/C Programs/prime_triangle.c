#include<stdio.h>
#include<math.h>

main(){
    int i,j,k,l=0,n=5,num,count=0,a[100];
    printf("enter the number :");
    scanf("%d",&num);
    for(i=num;l<15;i++){
        count=0;
        for(j=2;j<=sqrt(i);j++){
            if(i%j==0){
                count=1;
                break;
            }
        }
        if(count==0){
            a[l]=i;
            l++;
        }
    }
    // for(i=0;i<15;i++)
    //     printf("%d,",a[i]);
    l=0;
        for(i=1;i<=n;i++){
        for(j=1;j<=(n-i);j++){
            printf("   ");
        }
        for(k=1;k<=i;k++){
            printf("%d ",a[l]);
            l++;
        }
        printf("\n");
    }
}