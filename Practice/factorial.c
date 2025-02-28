#include <stdio.h>
#include <math.h>
int main()
{
    int n, factorial = 1, i;
    printf("enter the number: ");
    scanf("%d", &n);
    i = n;
    if (n < 0)
    {
        printf("invalid input, please enter number the positive integer");
    }
    else if (n == 0 || n == 1)
    {
        printf("the factorial is %d", 1);
    }

    else
    {

        do
        {

            factorial = factorial * i;
            i--;

        } while (i > 0);

        printf("the fact is %d:", factorial);
    }
    return 0;
}
