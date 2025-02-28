#include <stdio.h>
const float PI = 3.147;
float calculate_Area()
{
    float r, area;
    printf("Enter the radius:\n");
    scanf("%f", &r);
    area = PI * r * r;
    // printf("The area of circle",area);
    return area;
}
int main()
{
    float A_1, A_2, A;
    A_1 = calculate_Area();
    A_2 = calculate_Area();
    A = A_1 - A_2;
    printf("The main area of circle is%f", A);
    return 0;
}