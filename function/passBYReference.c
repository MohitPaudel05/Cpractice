#include <stdio.h>
void swap(int*, int*) ;
void main()
{
    int a = 5, b = 10;
    printf("a =%d , b=%d", a, b);
    swap(&a, &b);
    printf("2a =%d, b=%d", a, b);
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
