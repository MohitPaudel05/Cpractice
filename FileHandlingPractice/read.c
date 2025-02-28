#include<stdio.h>
int main(){
    FILE *file;
    char ch;

    file = fopen("write.txt","r");
    if (file ==NULL){
        printf("couldn't open the file");
        return 0;
    }
    while((ch=fgetc(file))!= EOF){
        putchar(ch);

    }
    fclose(file);
    return 0;

}