#include<stdio.h>
#include<math.h>
main(){
    float base,height,hypotonous,h;
    printf("enter the value of base,height:");
    scanf("%f%f",&base,&height);
    h=pow(base,2)+pow(height,2);
    hypotonous=sqrt(h);
    printf("value of base is%f\n value of hegiht is %f\n value of hypotonous is%f",base,height,hypotonous);



}

