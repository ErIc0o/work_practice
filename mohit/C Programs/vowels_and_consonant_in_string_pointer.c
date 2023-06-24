#include<stdio.h>
main(){
    int count=0,flag=0,i;
    char s[100],*p;
    p=&s[0]; 
    printf("enter the string: ");
    scanf("%s",&p+1);

    for(i=0;*(p+i)!='\0';i++){
        if(*(p+i)=='A'||*(p+i)=='E'||*(p+i)=='I'||*(p+i)=='O'||*(p+i)=='U'||*(p+i)=='a'||*(p+i)=='e'||*(p+i)=='i'||*(p+i)=='o'||*(p+i)=='u')
        count++;
        else
        flag++;
    }
    printf("number of vowels in string is=%d,\n",count);
    printf("number of consonant in string is=%d,\n",flag);
}