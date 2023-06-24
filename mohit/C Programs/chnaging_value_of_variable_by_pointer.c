#include<stdio.h>
main(){
    int x=5,*p,**q,***r;
    p=&x;
    q=&p;
    r=&q;
    // printf("%d\n",p);
    // printf("%d\n",q);
    // printf("%d\n",r);
    // ***r=7;//(if we want to change the value of x ,then we change the vlue of x by using pointer.)
    //  printf("%d\n",x);
    //  **q=5;
    //  printf("%d\n",x);
     *p=4;
     printf("%d\n",x);

}