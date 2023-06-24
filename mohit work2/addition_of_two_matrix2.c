#include<stdio.h>
main(){
    int r,c,a[20][20],b[20][20],k[50][50],i,j,l;
    printf("enter the number of row for all matrices: ");
    scanf("%d",&r);
    printf("enter the number of cloumn for all matrices: ");
    scanf("%d",&c);

    for(l=1;l<=2;l++){
        printf("For Matrix %d: ",l);
        for(i=0;i<r;i++){
            printf("Enter %d values for row %d: ",c,i+1);
            for(j=0;j<c;j++){
                scanf("%d",&a[i][j]);
            }
        }

    }
    // //printf("Enter %d values for Matrix 1: ", r*c);
    // for(i=0;i<r;i++){
    //     printf("Enter %d values for Matrix 1: ", r*c);
    //     for(j=0;j<c;j++){
    //         scanf("%d",&a[i][j]);
    //     }
    // }
    // printf("Enter %d values for Matrix 2: ", r*c);
    // for(i=0;i<r;i++){
    //     for(j=0;j<c;j++){
    //         scanf("%d",&b[i][j]);
    //     }
    // }

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
        k[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Sum of matrix A and B is:-\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
        printf("%d  ",k[i][j]);
        }
        printf("\n");
    }
}