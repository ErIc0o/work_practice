#include<stdio.h>
main(){
    char s[100][100],*p;
    int i,j,count=0,r,c;
    p=&s[0];
    printf("enter the row: ");
    scanf("%d",&r);
    printf("enter the column: ");
    scanf("%d",&c);
    printf("enter the string: ");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%c",&s[i][j]);
        }
    }
    for(i=0;*(p+i)!='\0';i++){
        count++;
    }
    printf("%d",count);
    printf("\n");
    for(i=count-1;i>=0;i--){
        printf("%c",*(p+i));
    }
    printf("\n******************************************\n");

}