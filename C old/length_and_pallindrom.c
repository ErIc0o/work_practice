 #include<stdio.h>
 int is_pallidrom(int n){
    int i,remainder,sum=0 ;
    //printf("inside function");

    for(i=n;i>0;i/=10)
    {
        remainder=i%10;
        sum=sum*10+remainder;
    }
    return sum;
}
main(){
    int n,count=0,sum,answer, temp_n;
    printf("enter the number: ");
    scanf("%d",&n);
    temp_n = n;
    while(temp_n>0)
    {
        count++;
        temp_n/=10;
    }
    //printf("%d",count);

    if(count>=4){
        answer=is_pallidrom(n); 
       // printf("%d",answer);
       
        sum=n+answer;
        printf("the sum of %d and its pallindrom number %d is %d",n,answer,sum);
    }

    else
        printf("please enter 4 digt number"); 
}