#include<stdio.h>
#include<string.h>
main(){
    char s[20];
    int i,len,count=0;
    printf("enter the string: ");
    scanf("%s",s);
    len=strlen(s);
    for(i=0;i<len;i++){
        if(s[i]!=s[len-i-1]){
            count++;
            break;
        }
    }
    //printf("your string is palindrom%d",count);
    if(count==0)
    printf("your string is palindrom\n");
    else
    printf("string is not palindrome\n");
}