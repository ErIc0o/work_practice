#include<stdio.h>
main(){
    char character;
    printf("enter the character");
    scanf("%c",&character);
    if((character>='a')&&(character<='z')||(character>='A')&&(character<='Z'))
        printf("your character is alphabate");
    else if((character>='0')&&(character<='9'))
        printf("your character is number");
    else
         printf("your character is spacial character");
}