#include<stdio.h>
main(){
    int number,a[100],i;
    printf("entr the number: ");
    scanf("%d",&number);
    for(i=0;i<number;i++){
        scanf("%d",&a[i]);
    }
    printf("the number which are divisable by 3\n");
    for(i=0;i<number;i++){
           if(a[i]%3==0){
           printf("%d\n",a[i]);
        }
    }
}