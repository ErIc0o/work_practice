#include<stdio.h>
#include<math.h>

void prime_func(int number)
{   int i=2,j,count=0;
    while(i<=number)
    {
        count=0;
        for(j=2;j<=sqrt(i);j++)
            {
                if(i%j==0)
                {
                    count++;
                    break;
                }
            }
        if(count==0)
            printf("%d,",i);
        if(i<=2)
            i++;
        else
            i=i+2;
    }  
}
main(){
    int number,answer;
    printf("enter the number: ");
    scanf("%d",&number);
    prime_func(number);
    //printf("%d,",answer);
}