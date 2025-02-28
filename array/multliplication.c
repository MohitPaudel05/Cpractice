#include <stdio.h>
int main()
{
    int a[2, 2], b[2, 2], mul[];
    int i, j;
    printf("enter the value of first matix:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter the value of [%d %d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter the value of second matix:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter the value of [%d %d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }









}