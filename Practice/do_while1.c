#include<stdio.h>
int main(){
    int i=1, product=1, n;
    printf("enter a number");
    scanf("%d",&n);
    do{
       
        product = product*i;
        i++;

    }
    while(i<=n);
    printf("the product is %d",product);
    return 0;
}