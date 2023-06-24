#include<stdio.h>
#define LIMIT 10

main(){
    int i;
    for(i=1;i<=LIMIT;i++){
        printf("%d\t",i);
    }
}
#undef LIMIT