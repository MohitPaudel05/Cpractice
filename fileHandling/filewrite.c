#include<stdio.h>
int main(){
FILE *ptr;
ptr= fopen("C:/Users/mohit/OneDrive/Desktop/c_classroom/fileHandling/mohi.txt","a");
if(ptr == NULL){
    printf("this file is empty");
    return 1;
}
fputs("hi this is the first try",ptr);
fputs("\nhi this is the second try",ptr);

fclose(ptr);
return 0;
}