#include<stdio.h>
main(){
    int a,b,c,sum=0;
    printf("enter any three numbers seprated by comma like 1,2,3:");
    scanf("%d,%d,%d",&a,&b,&c);
    if((a>0 && a<9)||(b>0 && b<9)||(c>0 && c<9))
        {
            printf("enter correct number between 0 to 9");
        }
    else
    {
        if(a>b &&a>c)
        {
            sum=sum+(a*100);
            if(b>c)
            {
                sum=sum+(b*10);
                sum=sum+c;
            }
            else
            {
            sum=sum+(c*10);
            sum=sum+b;  
            }
        }

        else if(b>a && b>c)
        {
            sum=sum+(b*100);
            if(a>c)
            {
                sum=sum+(a*10);
                sum=sum+c;
            }
            else
            {
            sum=sum+(c*10);
            sum=sum+a;  
            }
        }
        else
        {
            sum=sum+(c*100);
            if(a>b)
            {
                sum=sum+(a*10);
                sum=sum+b;
            }
            else
            {
                sum=sum+(b*10);
                sum=sum+a;  
            }

        }    
    printf("the greatest possible 3 digit number is %d",sum);
    }
}
 
