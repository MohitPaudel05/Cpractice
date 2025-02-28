#include<stdio.h>
int main(){
    int i,sum;
    for(i=50;i<=100;i=i+2){
        printf("%d\t",i);
        sum+=i;
    }
    printf("the sum is %d",sum);
    return 0;
}