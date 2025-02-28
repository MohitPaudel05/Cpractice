#include<stdio.h>
#include<string.h>

struct student
{
    int rollno;
    char name[5];
    float per;
};
#define total 3
void main(){
    
    int i;
    struct student s , m , student[total];
    s.rollno = 1;
    strcpy(s.name,"Ram");
    s.per = 61.24;
    printf("roll no of %s is %d and the percentage is %f%%",s.name,s.rollno,s.per);
    for(i=1;i<total;i++){
        printf("\nEnter your rollno: ");
        scanf("%d",&student[i].rollno);
        printf("Enter your name: ");
        scanf("%s",&student[i].name);
        printf("Enter your percentage: ");
        scanf("%f",&student[i].per);
        
    }
       for (i=1;i<total;i++){
        printf("roll no of %s is %d and the percentage is %.2f%%\n",student[i].name,student[i].rollno,student[i].per);


       }


        
    
}
