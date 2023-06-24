#include<stdio.h>
main(){
    char s[100],*p;
    int count=0,i;
    printf("enter the string: ");
    scanf("%s",&s[i]);
    p=&s[0];
    for(i=0;*(p+i)!='\0';i++){     //*(p+i) means s[i]!='\o'//
        count++;
    }
    for(i=0;i<count-1;i++){
        printf("%s",s[i]);
    }
    printf("the length of string is %d",count);
}