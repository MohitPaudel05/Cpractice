#include <stdio.h>

int main()

{
    char ch;
    float a, b;
    printf("\nenter the operator to perform calculation: ");
    scanf("%c", &ch);
    printf("enter first number: ");
    scanf("%f", &a);
    printf("enter second number: ");
    scanf("%f", &b);
    
    switch (ch)
    {
    case '+':
        printf("the addition of number is %f: ", a + b);
        break;
    case '-':
        printf("the subtraction of number is %f: ", a - b);
        break;
    case '*':
        printf("the multiplication of number is %f: ", a * b);
        break;
    case '/':
        if (b == 0)
        {
            printf("B shouldnot be zero to perform division");
        }
        else
        {
            printf("the addition of number is %f: ", a / b);
        }
        break;
    default:
        printf("Please enter the valid operator(+,-,*,/)");
        break;
    }
    return 0;
}
