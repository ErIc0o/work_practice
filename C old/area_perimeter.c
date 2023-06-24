#include<stdio.h>
main(){
    float length,width,area,perimeter;
    printf("enter the value of length");
    scanf("%f",&length);
    printf("enter the value of width");
    scanf("%f",&width);
    area=length*width;
    perimeter=2*(length+width);
    printf("area is %f\n perimeteris %f\n" ,area,perimeter);


}