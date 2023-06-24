#include<stdio.h>
main(){
    int n,a[100],i,j,k;
    printf("enter the length of array: ");
    scanf("%d",&n);
    printf("enter the number: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }    
    for(i=0;i<n;i++){
        j=i+1;
        while(j<n){
            if(a[i]==a[j]){
                //a[j]=a[j+1];
                k=a[j];
                a[j]=a[n-1];
                a[n-1]=k;
                n--;
                j--;
            }  
            j++; 
        }
    }
    for(i=0;i<n;i++)
    printf("%d",a[i]);
}