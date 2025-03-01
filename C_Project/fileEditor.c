#include <stdio.h>
#include <stdlib.h>
void nullFile(FILE *file){
    if(file == NULL){
        printf("couldn't open the file");
        exit(0);
    }
    
}

void menu(){
    printf("\n1.\t Reading a  file");
    printf("\n2.\t writing in a  file");
    printf("\n3.\t Appending a  file");
    printf("\n4.\t Exit");
}

void readFile(){
    char ch;
    FILE *file;
    file = fopen("C:/Users/mohit/OneDrive/Desktop/c_classroom/C_Project/fileEditor.txt","r");
    if (file ==NULL){
        printf("couldn't open the file");
        exit(0);
    }
    while((ch=getc(file))!=EOF){
        putchar(ch);

    }
    fclose(file);
}
void writeFile(){

    FILE *file;
    file=fopen("C:/Users/mohit/OneDrive/Desktop/c_classroom/C_Project/fileEditor.txt","w");
    nullFile(file);
    fputs("\n this is what i want to write and want to read\n ",file);
    fclose(file);
    printf("--Below is the written text");
    readFile();

}
void appendFile(){
    FILE *file;
    file =fopen("C:/Users/mohit/OneDrive/Desktop/c_classroom/C_Project/fileEditor.txt","a");
    nullFile(file);
    fputs("\n this is want i append here",file);
    fclose(file);
}
int main()
{
    char ch;
    int choose;
    while (1)
    {
        menu();
        printf("\nEnter your choice: ");
        scanf("%d", &choose);
        switch (choose)
        {
        case 1:
            readFile();
            break;
        case 2:
            writeFile();
            break;
        case 3:

            appendFile();
            break;
        case 4:
            exit(0);

        default:
            printf("Enter the valid choice!");
            break;
        }
    }
}