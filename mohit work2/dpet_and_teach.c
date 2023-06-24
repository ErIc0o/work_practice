#include<stdio.h>
main(){
    char teach[100][100];
    int dept,i,j;
    printf("how many dept in your collge: ");
    scanf("%d",&dept);
    printf("enter your dept name: ");
    for(i=0;i<dept;i++){
        scanf("%s",&teach[i]);
    }
    for(i=0;i<dept;i++){
        printf("enter your %s teacher name: ",teach[i]);
        for(j=0;j<dept;j++){
            scanf("%s",&teach[i][j]);
        }
    }
    for(i=0;i<dept;i++){
        printf("your %s teacher name is : \n", teach[i]);
        for(j=0;j<dept;j++){
            printf("%s, ",teach[i][j]);
        }
    }


}
