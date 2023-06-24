#include<stdio.h>

main(){
    char name[20][50], subject[5][20]={"Hindi","English","Maths","Physics","Chemistry"};
    int total_numbers[20], n, i, j, sum=0, marks, max, max_index=0;

    printf("enter number of student: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        sum = 0;
        printf("\nenter the student %d name: ",i+1);
        scanf("%s",name[i]);
        for(j=0;j<5;j++){
            printf("enter %s marks: ",subject[j]);
            scanf("%d",&marks);
            sum = sum + marks;
        }
        total_numbers[i] = sum;
    }
    max = total_numbers[0];
    max_index = 0;
    for(i=1;i<n;i++){
        if(total_numbers[i]>max){
            max = total_numbers[i];
            max_index = i;
        }
    }

    printf("\n\nfirst position goes to %s with highest marks %d",name[max_index], max);
}