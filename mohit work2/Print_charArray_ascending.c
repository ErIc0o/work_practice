#include<stdio.h>
#include<string.h>

void main(){
    char s[100];
    int i,j,length=0,min,c;
    printf("Enter your Name: ");
    gets(s);
    length = strlen(s);
    //printf("%d", length);
    for(i=0;i<=length-1;i++){
        min=i;
        for(j=i+1;j<length;j++){
            if(s[j]>s[min]){
                min=j;
            }
        }
        if(min!=i){
            c=s[i];
            s[i]=s[min];
            s[min]=c;
        }
    }
    printf("the ascending order of array is\n");
    for(i=0;s[i]!='\0';i++)
        printf("%c,",s[i]);
    

}