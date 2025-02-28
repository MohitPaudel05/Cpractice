#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char ch;

    file =fopen("C:/Users/mohit/OneDrive/Desktop/c_classroom/fileHandling/mohi.txt", "r");
    if (file == NULL) {
        printf("Could not open file mohi.txt\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);
    return 0;
}