#include<stdio.h>
int main(){
    FILE *file;
    file = fopen("C:/Users/mohit/OneDrive/Desktop/c_classroom/FileHandlingPractice/write.txt","w");
    if(file==NULL){
        printf("couldn't open the file");
        return 0;
    }
    fputs("this is a write file",file);
    fclose;
    return 0;
}