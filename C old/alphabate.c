#include<stdio.h>
main(){
    char character,i;
    int count=0;
    printf("enter the character: ");
    scanf("%c",&character);
     if((character>='A')&&(character<='Z'))
        count=0;
    else if((character>='a')&&(character<='z'))
        count=1;
    else
        count=2;

    if(count==0)
    {
        for(i=(character+1);i<='Z';i++)
        {
            if(i=='Z')
            {
                printf("%c\n",i);
                break;
            }
            printf("%c,",i);
        }
    }
    if(count==1)
    {
        for(i=(character+1);i<='z';i++)
        {
            if(i=='z')
            {
                printf("%c\n",i);
                break;
            }
            printf("%c",i);
        }
    }
    if(count==2)
        printf("please enter a alphabate");
}