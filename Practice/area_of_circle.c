#include<stdio.h>
const float PI = 3.14159;

int main(){
    float radius, area;
    printf("Enter the radius\n");
    scanf("%f",&radius);
    area = PI*(radius*radius);
    
    printf("The area of circle is:%f\n",area);
    
    return 0;

    

}