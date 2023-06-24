#include<stdio.h>
main(){
    int r,c,a[r][c],i,j;
    printf("enter the row number: ");
    scanf("%d",&r);
    printf("enter the column number: ");
    scanf("%d",&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d",a[i][j]);
        }
    }
    printf("\n");
}