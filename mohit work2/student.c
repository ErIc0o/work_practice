#include<stdio.h> 
main(){
    char name[50][50],subject[5][100]={"hindi","english","maths","physics","chemistry"};
    int number[100][100],i,j,n,totalnumber=0,parcentage_s[10],parcentage,divi;
    printf("enter number of student: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter the student name: ",i+1);
        scanf("%s",&name[i]);
        for(j=0;j<5;j++){
            printf("enter %s marks: ",subject[j]);
            scanf("%s",&number[i][j]);
        }
    }
    divi=0;
    for(i=0;i<n;i++){
        parcentage=0;
        totalnumber=0;
        for(j=0;j<5;j++){
                totalnumber=totalnumber+number[i][j];
               // parcentage=(totalnumber*100)/500;
               // parcentage_s[i]=parcentage;

        }
        if(totalnumber>divi){
        divi=totalnumber;
        divi=i;
        // if(parcentage_s[i]>parcentage_s[divi]){
        //     parcentage_s[divi]=parcentage_s[i];
        //     divi=i;
        }
    }
    
    printf("first position goes to %s: ",name[divi]);
}