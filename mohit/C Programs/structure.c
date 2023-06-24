#include<stdio.h>
struct student
{int sem,rollno;
char Name[50],class[50];
float fee;
};
main(){
    int i;
    struct student s[5];
    printf("enter the info such  as Name,class,sem,rollno,fee");
    for(i=0;i<5;i++){
        scanf("%s,%s,%d,%d,%f",&s[i].Name,&s[i].class,&s[i].sem,&s[i].rollno,&s[i].fee);
    }
    printf("%");

}