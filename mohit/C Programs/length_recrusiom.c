#include<stdio.h>
int length(int n){
    int count=0;
    if(n==0)
        return 0;
    count=length(n/10);
    count++;
    return count;
}
main(){
    int number,ans;
    printf("enter the number: ");
    scanf("%d",&number);
    ans=length(number);
    printf("length of number %d is=%d",number,ans);
    printf("\n________________________________\n");
}