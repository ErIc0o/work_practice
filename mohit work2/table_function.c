#include<stdio.h>
void table( int number)
{
    int i;
    for(i=1;i<=10;i++)
    printf("%d*%d=%d\n",number,i,number*i);
    //and this massage to you who always want to break coad but this time that's not gona happen 
}
main(){
    int number,n_number,i;
    printf("enter the number: "); 
    scanf("%d",&number);
    for(i=1;i<=number;i++)
    {
        printf("enter number %d ",i);
        scanf("%d",&n_number);
        printf("Table of %d\n",n_number);
        table(n_number);
    
    }

}