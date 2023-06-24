#include<stdio.h>
void swap(int x, int y)
    {
        int c;
        c=x;
        x=y;
        y=c; 
    }
main(){
    int a,b;
    printf("enter the value of a: ");
    scanf("%d",&a);
    printf("enter the value of b: ");
    scanf("%d",&b);
    printf("before swapping value of a=%d\n,b=%d\n",a,b);
// jnb hm niche wale swap function ko call karenge to a ki value x me jayegi aur b ki value
// y m jayegi, ab swap function k andar x aur y ki values aapas m change hongi but isse a aur 
// b m koi change nhi hoga kyoki sabse pehle to main function ko memory milegi jisme a aur b 
// ko memory milegi fir jab hum swap function ko call krenge tab swap function ko alg se 
// memory milegi jisme x aur y ko memory milegi. To ab jab x aur y m value change hongi to a
// aur b m kux change nahi hoga coz a,b aur x,y alg alg memory locations m honge.

    swap(a,b);

    printf("after swapping value of a=%d\n,b=%d\n",a,b);

}
