#include<stdio.h>
#include<math.h>

int is_prime(int i){
    int j=2, count=0, answer;
    for(j=2;j<=sqrt(i);j++){
        if(i%j==0){
            count++;
            break;
        } 
    }
    if(count==0)
       answer=1;
    else
        answer=0;

return answer;
}

main()
{
    int number,i=2, answer;
    printf("Enter a Number: ");
    scanf("%d", &number);
    while(i<=number){
        // printf("%d",is_prime(i));
        answer = is_prime(i);
        if(answer==1)
            printf("%d,",i);
        if(i==2)
            i++;
        else
            i+=2;
    }

}