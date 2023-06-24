#include<stdio.h>
#include<math.h>
int decimal(int n){
    int remainder,sum=0,i=0;
    while (n>0)
    {
    remainder=n%10;
    sum = sum + pow(2,i) * remainder;

    n/=10;
    i++;
    } 
    return sum;
    
}
void octal(int n,int number){
    int remainder[50],sum=0,i=0,j;
    //printf("%d",n);
    while (n>0)
    {
    remainder[i]=n%8;
    n/=8;
    i++;
    } 
    printf("octal number for %d is: ",number); 
    for(j=i-1;j>=0;j--)
    printf("%d",remainder[j]);
     
}
void hexa_decimal(int dec_number, int number){
    int sum=0,i=0,j=0, remainder;
    char hex_number[50];
    printf("hexa_decimal of %d is: ",number);
    for(i=dec_number;i>0;i/=16){
        remainder = i%16;
        if(remainder==10)
            hex_number[j] = 'A';
        else if(remainder==11)
            hex_number[j] = 'B';
        else if(remainder==12)
            hex_number[j] = 'C';
        else if(remainder==13)
            hex_number[j] = 'D';
        else if(remainder==14)
           hex_number[j] = 'E';
        else if(remainder==15)
            hex_number[j] = 'F';
        else
            hex_number[j] = remainder + '0';
        j++;
    } 
    for(i=j-1;i>=0;i--){
        printf("%c",hex_number[i]);
    }

}
main(){
    int number,n,answer,dec_number;
    printf("enter a binary number: ");
    scanf("%d",&number);
    n=number;
    dec_number= decimal(number);
    printf("decimal number for %d is %d\n",number,dec_number);
    octal(dec_number,number);
    printf("\n");
    hexa_decimal(dec_number, number);
}