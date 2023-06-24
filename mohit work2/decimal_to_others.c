#include<stdio.h>
void octal(int n){
    int temp_nu,i=0,j,remainder[50];
    temp_nu=n;
    while(temp_nu>0){
        remainder[i]=temp_nu%8;
        temp_nu/=8;
        i++;
    }
    printf("the binary of octal number is: \n");
    for(j=i-1;j>=0;j--)
    printf("%d",remainder[j]);
    

}
void hexa_decimal(int n){
    int temp_nu,i=0,j,remainder[50];
    temp_nu=n;
    while(temp_nu>0){
        remainder[i]=temp_nu%16;
        temp_nu/=16;
        i++;
    }
    printf("the binary of hexa_decimal number is: \n");
    for(j=i-1;j>=0;j--)
   // printf("%d",remainder[j]);
    if(remainder[j]==10)
    printf("A");
    else if(remainder[j]==11)
    printf("B");
    else if(remainder[j]==12)
    printf("C");
    else if(remainder[j]==13)
    printf("D");
    else if(remainder[j]==14)
    printf("E");
    else if(remainder[j]==15)
    printf("F");
    else
    printf("%d",remainder[j]);
        
}
void binary(int n){
    int temp_nu,i=0,j,remainder[50];
    temp_nu=n;
    while(temp_nu>0){
        remainder[i]=temp_nu%2;
        temp_nu/=2;
        i++;
    }
    printf("the binary of decimal number is: \n");
    for(j=i-1;j>=0;j--)
    printf("%d",remainder[j]);
    
}
main(){
    int number;
    printf("enter a decimal number: ");
    scanf("%d",&number);
    binary(number);
    hexa_decimal(number);
    octal(number);
}