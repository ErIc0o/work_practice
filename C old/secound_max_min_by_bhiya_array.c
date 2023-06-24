#include<stdio.h>
main(){
    int number,a[100],i,max1,max2;
    printf("enter the number: ");
    scanf("%d",&number);
    for(i=0;i<number;i++){
        scanf("%d",&a[i]);
    }
    max1=a[0];
    max2=a[0];
     for(i=1;i<number;i++){
        if(a[i]>max1){
            max2=max1;
            max1=a[i];
           // printf("hii");
        }
        else{
            if(a[i]>max2)
                max2=a[i];
                //printf("by phle  bar bhiya kr nhi paye");
        }
    }
    printf("first max number=%d\n",max1);
    printf("sceound max number=%d",max2);

}