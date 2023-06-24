#include "/home/peskyji/Documents/mohit.c"
#include<stdio.h>                                                       
main(){
    int a=5,b,c;
    b=a++;
    c=sizeof(b);
    printf("Post Inc\na=%d, b=%d,c=%d\n",a,b,c);
    a=5;
    b=++a;
    printf("Pre Inc\na=%d, b=%d\n",a,b);
    addtion();
}