// Upper to lower and vice versa
#include<stdio.h>
void convert(char c){
    char lwr,upr;
    if(c>='A'&& c<='Z'){
        lwr = c+32;
        printf("the lower case of %c is %c: ",c,lwr);

    }
    else{
        upr = c-32;
        printf("the upper case of %c is %c: ",c,upr);
    }
}
int main(){
    char c;
    printf("Enter the character: ");
    scanf("%c",&c);
    convert(c);
    return 0;
}
