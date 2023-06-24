#include<stdio.h>
main(){
    char student[10][50],subject[5][50]={"hindi","english","maths","physics","chemistry"};
    int  i,j,n,number[10][5],total_marks[10],sum,max_index;
    printf("how many students do you have: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nplease enter name of student %d: ",i+1);
        scanf("%s",student[i]);
        for(j=0;j<5;j++){
            printf("enter %s marks: ",subject[j]);
            scanf("%d",&number[i][j]);
        }
    }
    //findig total_marks of each student
    for(i=0;i<n;i++){
        sum=0;
        for(j=0;j<5;j++){
            sum+=number[i][j];
        }
        total_marks[i]=sum;
    }
    //finding index of array total_marks where we have maximum marks
    max_index=0;
    for(i=1;i<n;i++){
        if(total_marks[i]>total_marks[max_index])
        max_index=i;
    }
    //printing highest mark scorer 
    printf("\n\n/*----------------------------------------------------------*/\n\n");
    printf("first position goes to %s with highest score of %d out of 500",student[max_index],total_marks);
    printf("\n\n/*----------------------------------------------------------*/\n\n");
}