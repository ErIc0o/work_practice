#include<stdio.h>
main(){
    int i,n;
    char s[26],*p,c;
    p=s;
    c='A';
    for(i=0;i<26;i++){
        *p=i+'A';
        *p++;
    }
    p=s;
    printf("all the alpthabte are:");
    for(i=0;i<26;i++){
        printf("%c,",*p);
        *p++;
    }

}