#include<stdio.h>

int add(int a , int b){
    return a+b;
}
int sub(int a , int b){
    return a-b;
}
int mul(int a , int b){
    return a*b;
}
float div(int a , int b){
    if(b==0){
        printf("b should't be zero");
        return 0;
        
    }
    else{
        return a/b;
    }}
int main(){
    int a,b;
    // printf("enter any two number");
    // scanf("%d%d",&a,&b)
    printf("the addition is %d\n", add(1,1));
    printf("the subtraction is %d", sub(1,1));
    printf("\nthe multiplication is %d\n", mul(1,1));
    printf("\nthe  division is %f", div(12,6));
}