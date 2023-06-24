#include<stdio.h>
main(){
    int r,c,i,j,a[100][100];
    printf("enter the number of row: ");
    scanf("%d",&r);
    printf("enter the number of column: ");
    scanf("%d",&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    printf("\n");
    }
    printf("your 2d araay is:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
     printf("\n");
    }
   
}