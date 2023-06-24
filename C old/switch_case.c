#include<stdio.h>
main(){
    int number;
    printf("enter the number");
    scanf("%d",&number);
    switch(number)
    {
        case 1:
        printf("jan");
        break;
         case 2:
        printf("feb");
        break;
         case 3:
        printf("march");
        break;
         case 4:
        printf("april");
        break;
         case 5:
        printf("may");
        break;
         case 6:
        printf("jun");
        break;
         case 7:
        printf("july");
        break;
         case 8:
        printf("augst");
        break;
         case 9:
        printf("sept");
        break;
         case 10:
        printf("oct");
        break;
         case 11:
        printf("nov");
        break;
         case 12:
        printf("dec");
        break;
        default:
        printf("enter the correct value");
    }
}