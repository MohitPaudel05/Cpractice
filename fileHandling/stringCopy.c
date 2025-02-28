#include<stdio.h>
int main(){
    FILE *file, *file_2;
    char ch[100];
    file = fopen("C:/Users/mohit/OneDrive/Desktop/c_classroom/fileHandling/friend.txt","r");
    file_2=fopen("C:/Users/mohit/OneDrive/Desktop/c_classroom/fileHandling/friendcopyNisma(2).txt","w");
    if (file == NULL || file_2 == NULL){
        printf("couldnot open the file\n");
        return 0;
    }
    while ((fgets(ch,100,file))!= NULL){
        fputs(ch,file_2);
    }
    fclose(file);
    fclose(file_2);

    return 0;
}