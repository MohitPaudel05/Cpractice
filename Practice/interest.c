#include<stdio.h>
float calcSI(){
    float p, t ,r ,si;
    printf("Enter principle:\n Enter time:\n Enter rate:\n");
    scanf("%f%f%f",&p,&t,&r);
    si=(p*t*r)/100;
    return si;
}
int main(){
    // float a;
    // a = calcSI();

    
    printf("The simple interest is:%f",calcSI());
    return 0;
}