#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
    int number,guess,count=1;
    srand(time(0));
    number=rand()%100+1;
    printf("enter numbers between 1 to 100:\n");
    do{
        scanf("%d",&guess);
        if(count==2){
            printf("***you are closer***\n");
        }
        if(count==3){
            printf("***don't losse your hope***\n");
        }
        if(count==6){
            printf("***you gona make it***\n");
        }
        if(count==7){
            printf("***you are little bit closer***\n");
        }
        if(guess>number){
        printf("please enter the lower number\n");
        }
        else if(guess<number){
        printf("please enter the higher number\n");
        }
        else{
        printf("congratulations\n");
        printf("you guess the number in %d th try\n",count);
        }
        count++;
        
    }while(guess!=number);
}
