#include<stdio.h>
main(){
    char character;
    printf("enter the character");
    scanf("%c",&character);
    if(character=='a'||character=='A'||character=='e'||character=='E'||character=='i'||character=='I'||character=='o'||character=='O'||character=='u'||character=='U')
    {
        printf("character %c is vowel",character);
    }
    else
    {   
        printf("character %c is consonent",character);
    }
}