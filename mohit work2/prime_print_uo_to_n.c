#include<stdio.h>
main(){
    int number,i,j,count=0;
    printf("enter the number");
    scanf("%d",&number);
    for(i=2;i<=number;i++)
    {
        count=0;
        {
            for(j=2;j<=(i-1);j++)
            {
                if(i%j==0)
                {
                    count++;
                    break;
                }
            }
        }
        if(count==0)
        {
            printf("%d,",i);
        }
    }
}