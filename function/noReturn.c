#include <stdio.h>
void amit()
{
    printf("this is  a robot");
}
// function with arugment and no return type
void sum(int a, int b)
{
    printf("this is a function with arugment and no return type\n");
    printf("the sum of %d and %d is : %d", a, b, a + b);
}
// function with argument and return type
int sub(int a, int b)
{
    printf("this is a function with arugment and return type\n");
    return (a - b);
}

// function without argument but with return type
int mul(){
    int a, b;
    printf("\nenter numbers \n");
    
    scanf("%d%d",&a,&b);
    return a*b;
}
int main()
{

    sum(10, 20);

    printf("the difference of %d and %d is : %d", 50, 30, sub(50, 30));
    amit();
    printf("\nthe multiplication is %d",mul());
    return 0;
}