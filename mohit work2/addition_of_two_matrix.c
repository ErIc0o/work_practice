#include<stdio.h>
mian(){
    int r,c,a[20][20],b[20][20],k[50][50],i,j;
    printf("enter the number of row: ");
    scanf("%d",&r);
    printf("enter the number of cloumn: ");
    scanf("%d",&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the number of row: ");
    scanf("%d",&r);
    printf("enter the number of cloumn: ");
    scanf("%d",&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
        k[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
        printf("%d",k[i][j]);
        }
    }
}