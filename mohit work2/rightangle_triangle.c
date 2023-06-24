#include<stdio.h>
#include<math.h>
main(){
    double a,b,c,d,e;
    printf("enter the value of a,b,c");
    scanf("%lf%lf%lf",&a,&b,&c);
    if((a>b)&&(a>c))
    {
        d=pow(b,2)+pow(c,2);
        e=sqrt(d);
        if(e==a)
            printf("this is RAT");
        else
            printf("not RAT");   
    }

    else if((b>a)&&(b>c))
    {
        d=pow(a,2)+pow(c,2);
        e=sqrt(d);
        if(e==b)
            printf("this is RAT");
        else
            printf("not RAT");
    }
    else
    {
        if((c>a)&&(c>b))
        {
            d=pow(a,2)+pow(b,2);
            e=sqrt(d);
            if(e==c)
                printf("this is RAT");
            else
                printf("not RAT");
        }
    }
}