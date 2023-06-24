#include<stdio.h>
main(){
    int n,j,i,total_number,percentage, hindi, english, maths, physics, chemistry, student_max, student_min;
    // int  subject_number ,student;
    float max,min;
    printf("Enter the Number of Students: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        total_number=0;
        printf("Enter 5 subject marks for Student %d: ",i);
        // for(j=1;j<=5;j++){
        //     scanf("%d",&subject_number);
        //     total_number+=subject_number;
        // }
        scanf("%d",&hindi);
        scanf("%d",&english);
        scanf("%d",&maths);
        scanf("%d",&physics);
        scanf("%d",&chemistry);
        total_number=hindi+english+maths+physics+chemistry;
        percentage = (total_number*100)/500;
        if(i==1){
            max=percentage;
            min=percentage;
            student_max=i;
            student_min=i;
        }
        else{
            if(percentage>max){
                max = percentage;
                student_max = i;
            }
            if(percentage<min){
                min = percentage;
                student_min = i;
            }
        }
    }
    printf("Student %d got max Percentage = %f\nStudent %d got min Percentage = %f\n",student_max,max, student_min, min);
}