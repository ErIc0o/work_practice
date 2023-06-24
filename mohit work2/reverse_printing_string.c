#include<stdio.h>s
int length(char s[]){
    int i=0,count=0;
    for(i=0;s[i]!='\0';i++){
        count++;
    }
    return count;
}

main(){
    char s[100];
    int i,reverse;
    printf("enter your name: ");
    gets(s);
    reverse=length(s);
    //printf("%d", reverse);
    for(i=reverse-1;i>=0;i--){
        printf("%c",s[i]);
    }
}