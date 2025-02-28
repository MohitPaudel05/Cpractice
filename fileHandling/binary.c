#include<stdio.h>
int main(){
    FILE *file;
    file = fopen("C:/Users/mohit/OneDrive/Desktop/c_classroom/fileHandling/binary.bin","ab");
    if(file == NULL){
        printf("couldn't open the file");
        return 0;
    }
    fputs("Welcome to the radinat",file);
    fclose(file);
}