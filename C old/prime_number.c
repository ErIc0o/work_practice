#include<stdio.h>
main(){
    int number,i,count=0;
    printf("enter the number");
    scanf("%d",&number);
    for(i=2;i<=(number-1);i++)
    {
        if(number%i==0)
        {
        printf("%d is not a prime number",number); 
        count++;
        break;
        }
    }
   if(count==0)
 
  printf("%dis prime number",number); 
}
