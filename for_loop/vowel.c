#include<stdio.h>
void vowel(char ch){
   if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
        printf("the given character  is vowel");
    }
    else{
        printf("the given character is not ");
    }
}
int main(){
    char ch;
    printf("Enter the character ");
    scanf("%c",&ch);
    vowel(ch);
    return 0;
    
}