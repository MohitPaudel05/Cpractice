#include <stdio.h>

struct student
{
    char name[20];
    int rollno;
    float per;
};
int main()
{
    struct student s[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("Enter the name of student: \n");
        scanf("%s", &s[i].name);
        printf("Enter the rollno :\n");
        scanf("%d", &s[i].rollno);
        printf("Enter teh percentage: \n");
        scanf("%f", &s[i].per);
    }
    for (i=0;i<3;i++){
        printf("%s\n%d\n%f",s[i].name,s[i].rollno,s[i].per);
    }


    return 0;
}