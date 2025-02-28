#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("Enter the desire number: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        sum+=i;
    }
    printf("the sum is %d: ",sum);
    return 0;
}