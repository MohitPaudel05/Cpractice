#include <stdio.h>

void convertDigitToWord(int digit)
{
    int last_digit;
    while (digit > 0)
    {
        last_digit = digit % 10;
        digit = digit / 10;
        switch (last_digit)
        {
        case 0:
            printf("zero");
            break;
        case 1:
            printf("one");
            break;
        case 2:
            printf("two");
            break;
        case 3:
            printf("three");
            break;
        case 4:
            printf("four");
            break;
        case 5:
            printf("five");
            break;
        case 6:
            printf("six");
            break;
        case 7:
            printf("seven");
            break;
        case 8:
            printf("eight");
            break;
        case 9:
            printf("nine");
            break;
        }
        
    }
}
int main()
{
    int digit;
    printf("enter the digit\n");
    scanf("%d", &digit);
    printf("the words of the digit is :");
    convertDigitToWord(digit);
    return 0;
}