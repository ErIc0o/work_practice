#include<stdio.h>
main(){
    int n,a=0,b=1,c=a+b,count=2;
    int i;
   
     printf("enter the nth number: ");
    scanf("%dth",&n);
    if(n<=0){
        printf("please enter a number greater tha n 0");
    }
    else if(n==1)
        printf("%d,",a);
    else
        printf("%d,%d,",a,b);
    for(i=1;i<=n-2;i++){
        c=a+b;
        printf("%d,",c);
        a=b;
        b=c;
    }



//     while(1)
//     {
//         c=a+b;
//         count++;
//         if(count<=n)
//         {
//             printf("%d,",c);
//         }
//         else
//             break;
//         a=b;
//         b=c;  
//     }  
// }

} 