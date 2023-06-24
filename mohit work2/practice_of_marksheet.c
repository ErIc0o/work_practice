#include<stdio.h>
main(){
    char name[100], class[5];
    int rollno;
    float hindi,english,math,physics,chemistry,totalnumber;
    float prcentage;
    printf(" name: ");
    scanf("%s",name);

    printf(" class: ");
    scanf("%s",class);

    printf("rollno: ");
    scanf("%d",&rollno);

    printf("marks");
    printf("\n");
    printf("hindi-");
    scanf("%f,",&hindi);
    printf("english-");
    scanf("%f,",&english);
    printf("math-");
    scanf("%f,",&math);
    printf("physics-");
    scanf("%f,",&physics);
    printf("chemistry-");
    scanf("%f,",&chemistry);

    totalnumber=hindi+math+english+physics+chemistry;

    prcentage=(totalnumber*100)/500;
     
    printf("total number%f:\n ",totalnumber);
    printf("prcentage%f:\n",prcentage);

    if(prcentage>=80)
        printf("division=1st divi");
     if((prcentage<80&&prcentage>=60))
        printf("division=2nd divi");
    if((prcentage<60&&prcentage>=50))
    printf("division=3rd divi");
    if((prcentage<50&&prcentage>=45))
    printf("division=4th divi");
    if(prcentage<=45)
    printf("you are  fail");


}