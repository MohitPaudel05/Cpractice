#include<stdio.h>
int main(){
    char name[3][50];
    int roll[3],i;
    float marks[3];
    FILE *file;
    file =fopen("C:/Users/mohit/OneDrive/Desktop/c_classroom/fileHandling/friendcopyNisma.txt","r");
    if(file ==NULL){
        return 0;
    }
    
    for (i = 0; i < 3; i++) {
        fscanf(file, "Your name is :%s\n", name[i]);
        fscanf(file, "Your roll no is :%d\n", &roll[i]);
        fscanf(file, "Your marks are :%f\n", &marks[i]);
    }

    fclose(file);

    for (i = 0; i < 3; i++) {
        printf("Your name is: %s\n", name[i]);
        printf("Your roll no is: %d\n", roll[i]);
        printf("Your marks are: %.2f\n", marks[i]);
    }

    return 0;
}