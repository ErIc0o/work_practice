#include<stdio.h>
main(){
    int number,a=0,b=1,c=a+b;
    printf("enter the number: ");
    scanf("%d",&number);
    printf("%d,%d,",a,b);

    // for(c;c<=number;c=c){
    //     c=a+b;
    //     if(c<=number)
    //         printf("%d,",c);
    //     a=b;
    //     b=c;

    // }

    while(c<=number)
    {
    c=a+b;
    if(c<=number)
        printf("%d,",c);

    // while(1)
    // {
    // c=a+b;
    // if(c<=number)
    //     printf("%d,",c);
    // else
    //     break;
    a=b;
    b=c;
    }

}