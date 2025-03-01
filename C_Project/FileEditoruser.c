#include <stdio.h>
#include <stdlib.h>
//function to handle null file
void nullFile(FILE *file){
    if(file == NULL){
        printf("couldn't open the file");
        exit(0);
    }
    
}
//choices
void menu(){
    printf("\n1.\t Reading a  file");
    printf("\n2.\t writing in a  file");
    printf("\n3.\t Appending a  file");
    printf("\n4.\t Exit");
}
//function to read a file 
void readFile(){
    char ch;
    char Filename[300];
    printf("\n Enter the filepath to read :\n");
    scanf("%s",&Filename);
    
    FILE *file;
    file = fopen(Filename,"r");
    nullFile(file);
    while((ch=getc(file))!=EOF){
        putchar(ch);

    }
    fclose(file);
}
//function to write in a file
void writeFile(){


    FILE *file;
    char content[255], Filename[256];
    printf("\nEnter the file name or file path you want to write: \n");
    scanf("%s",Filename);
    file=fopen(Filename,"w");
    nullFile(file);
    printf("\nEnter the content you want to write: \n");
    getchar();
    fgets(content,sizeof(content),stdin);
    fputs(content,file);
    fclose(file);
    printf("--Below is the written text\n");
    puts(content);//display the content

}
//function to append file
void appendFile(){
    FILE *file;
    char content[255], Filename[256];
    printf("\n Enter the filename or filepath you want to append:\n");
    scanf("%s",Filename);
    file =fopen(Filename,"a");
    nullFile(file);
    printf("--What do you want to add or append: \n");
    getchar();
    fgets(content,sizeof(content),stdin);
    fputs(content,file);
    fclose(file);
    printf("\nBelow is the appended text:\n");
    puts(content);
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