#include<stdio.h>
int main(){
    int a=5,b=6,temp;
    int x=5,y=6;
    printf(" The variable before swap is:\na=%d\nb=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf(" The variable after swap is:\na=%d\nb=%d",a,b);

    printf("\n************without third variable*********");
    x=x+y;
    y=x-y;
    x=x-y;
    printf(" The variable after swap is:\nx=%d\ny=%d",x,y);

}