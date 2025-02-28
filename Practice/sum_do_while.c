#include<stdio.h>
int main(){
    int i=1, sum=0, n;
    printf("enter a number");
    scanf("%d",&n);
    do{
       
        sum = sum+i;
        i++;

    }
    while(i<=n);
    printf("the sunm is %d",sum);
    return 0;
}