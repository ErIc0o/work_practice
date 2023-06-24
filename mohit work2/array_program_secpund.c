#include<stdio.h>
main(){
    int number[100],a,b,i,index=0;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    // printf("%d%d",a,b);
    if(a<b){
        for(i=a;i<=b;i++){
            if(i%2!=0){
                number[index]=i;
                index++;
            }
        }
        // printf("a<b chal gaya");
    }
    else{
        for(i=b;i<=a;i++){
            if(i%2!=0){
                number[index]=i;
                index++;
            }
        }
        // printf("b>a chal gaya");
    }
    
    for(i=0;i<index;i++){
        // printf("hi");
        printf("%d, ",number[i]);
    }
}