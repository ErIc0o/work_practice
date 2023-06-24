#include<stdio.h>
main(){
    int n,i,j,k,a[100];
    printf("enter the length of array: ");
    scanf("%d",&n);
    printf("enter the number: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    } 
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                for(k=j;k<n;k++){
                    a[k]=a[k+1];
                }
                n--;
                j--;
            }
        }
    }
    for(i=0;i<n;i++)
    printf("%d",a[i]);   
}