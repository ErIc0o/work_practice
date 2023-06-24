#include<stdio.h>
main(){
    double hindi,english,math,physics,chemistry,percentage;
    char e='%';
    printf("enter the number of hindi\nengish\nmath\nphysics\nchemistry");
    scanf("%lf%lf%lf%lf%lf",&hindi,&english,&math,&physics,&chemistry);
    percentage=(hindi+english+math+physics+chemistry)/500*100;
    //printf("%lf",percentage);
    if(hindi<33 || english<33 || math<33 || physics<33 || chemistry<33)
    {
       printf("You are fail");    
    }
    else
    {
        printf("percentage = %lf%c",percentage,e);
        if(percentage>=80)
            printf("disinction");
        else if((percentage<=79)&&(percentage>=60))
            printf("1st divi");   
        else if((percentage<=59)&&(percentage>=45))
            printf("2nd divi");   
        else if((percentage<=44)&&(percentage>=33))
            printf("3rd divi");
    }
       
}  
