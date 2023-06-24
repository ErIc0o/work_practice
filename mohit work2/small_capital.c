#include<stdio.h>
main(){
    char character;
    printf("enter the character");
    scanf("%c",&character);
    if((character>=97)&&(character<=122))
    
        printf("character is small latter");
    
    else
        printf("character is capital latter");
    
}