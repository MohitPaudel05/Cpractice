#include<stdio.h>
int main(){
    FILE *file;
    char ch;

    //appending the file
    file=fopen("C:/Users/mohit/OneDrive/Desktop/c_classroom/FileHandlingPractice/write.txt","a");
    if(file == NULL){
        printf("coild");
        return 0;
    }
    fputs("\nthis is a new text using append",file);
    //reading the file
    file=fopen("C:/Users/mohit/OneDrive/Desktop/c_classroom/FileHandlingPractice/write.txt","r");
    while((ch=fgetc(file))!=EOF){
        putchar(ch);
    }
    fclose(file);


    return 0;
}
