#include<stdio.h>
#include<math.h>
main(){
    int number,i,j,count=0;
    printf("enter the number: ");
    scanf("%d",&number);
    i=2;
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