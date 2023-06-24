#include<stdio.h>
#include<math.h>
void octal(int number){
    int i=0,j,remainder[50],sum=0;
    while(number>0){
        remainder[i]=number%8;
        number/=8;
        i++;
    }
    printf("the octal number is ");
    for(j=i-1;j>=0;j--)
    printf("%d",remainder[j]);
}
void binary(int number){
    int i=0,j,remainder[50],sum=0;
    while(number>0){
        remainder[i]=number%2;
        number/=2;
        i++;
    }
    printf("the binary number is ");
    for(j=i-1;j>=0;j--)
    printf("%d",remainder[j]);
}

main(){
    char number[50];
    int i=0,sum=0,count=0,temp;
    printf("enter a Hexa-Decimal number: ");
    scanf("%s",number);
    for(i=0;number[i]!='\0';i++){
        count++;
        
    }
    //printf("%d",count)
    for(i=count-1;i>=0;i--){
        if(number[i]=='A')
            sum=sum+10*pow(16,(count-1-i));
        else if(number[i]=='B')
            sum=sum+11*pow(16,(count-1-i));
        else if(number[i]=='C')
            sum=sum+12*pow(16,(count-1-i));
        else if(number[i]=='D')
            sum=sum+13*pow(16,(count-1-i));
        else if(number[i]=='E')
            sum=sum+14*pow(16,(count-1-i));
        else if(number[i]=='F')
            sum=sum+15*pow(16,(count-1-i));
        else
            sum=sum+number[i]*pow(16,(count-1-i));
        
    }
    temp=sum;
   printf("the decimal number of %s is %d ",number,sum);
    octal(sum);
    binary(temp);
}