#include <stdio.h>
int main()
{
    int choice;
    char ch;

    do
    {
        printf("\n Enter 1 for youtube\n Enter 2 for facebook\n Enter 3 for git\n");
        // up:
        printf("Enter the value of choice\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("welcome to youtube\n");
            break;
        case 2:
            printf("welcome to facebook\n");
            break;
        case 3:
            printf("welcome to git\n");
            break;

        default:
            printf("Invalid choice\n");
            break;
        }
        printf(" To choose again press 'y'or yes:\n");
        getchar();

        scanf("%c", &ch);

    } while (ch == 'y' || ch == 'Y');

    return 0;
}