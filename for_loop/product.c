#include<stdio.h>
int main(){
    int i,n,product=1;
    printf("Enter the desire number: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        product*=i;
    }
    printf("the sum is %d: ",product);
    return 0;
}