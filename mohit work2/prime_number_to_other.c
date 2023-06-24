#include<stdio.h>
#include<math.h>
void octal(int n){
    int temp_nu,i=0,j,remainder[50];
    temp_nu=n;
    while(temp_nu>0){
        remainder[i]=temp_nu%8;
        temp_nu/=8;
        i++;
    }
    printf("the octal number is: \n");
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
    printf("the hexa_decimal number is: \n");
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
    printf("the  decimal number is: \n");
    for(j=i-1;j>=0;j--)
    printf("%d",remainder[j]);
    
}

 main(){
    int number,i,sum=0,count=0,j,flag=0,prime[20],k=0;
    printf("enter the number: ");
    scanf("%d",&number);
    i=number;
    while(i)
    {
        if(flag==10)
        break;
        count=0;
        for(j=2;j<=sqrt(i);j++){
            if(i%j==0){
                count++;
                break;
            }
        }
        if(count==0){
            prime[k]=i;
            sum=sum+i;
            flag++;
        }
        if(i%2==0)
        i++;
        else
        i=i+2;
        k++;
    }
    for(j=k-1; j<=0;k--){
        printf("%d",prime[j]);
    }
    printf("sum of first 10 to prime number is %d: ",sum);
    octal(sum);
    binary(sum);
    hexa_decimal(sum);
 }         