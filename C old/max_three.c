#include<stdio.h>
main(){
    int a,b,c;
    printf("enter the three number");
    scanf("%d%d%d",&a,&b,&c);
    if((a>b)&&(a>c))
    {
    printf("%d is grater",a);
    }
    else if((b>a)&&(b>c))
    {
    printf("%d is grater",b);
    }
    else
    {
        printf("%d is grater",c);

    }
}