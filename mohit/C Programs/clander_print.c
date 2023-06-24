#include<stdio.h>
main(){
    int k=1,i,j;
    char s[7][4]={"sun","mon","tus","wed","thu","fri","sat"};
    for(i=0;i<7;i++){
        printf("%5s",s[i]);
        // for(j=0;j<3;j++)
        // printf("%c",s[i][j]);
        // printf("\t");
    }
    //printf("%s",s[0]);
    printf("\n");

    for(i=0;i<5;i++){
        for(j=0;j<7;j++){
            printf("%5d",k);
            k++;
            if(k==31){
            break;
            }
            
        }
        printf("\n");
    }
}