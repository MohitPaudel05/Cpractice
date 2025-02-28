#include<stdio.h>
int main(){
    char name[3][50];
    int roll[3],i;
    float marks[3];
    FILE *file;
    file =fopen("C:/Users/mohit/OneDrive/Desktop/c_classroom/fileHandling/friendcopyNisma.txt","w");
    if(file ==NULL){
        return 0;
    }
    for(i=0;i<3;i++){
        printf("Enter your name:\n");
        scanf("%s",&name[i]);
        printf("Enter your roll no:\n");
        scanf("%d",&roll[i]);
        printf("Enter your marks:\n");
        scanf("%f",&marks[i]);
    }
    for (i=0;i<3;i++){
        fprintf(file,"Your name is :%s\n",name[i]);
        fprintf(file,"Your name is :%d\n",roll[i]);
        fprintf(file,"Your name is :%f\n",marks[i]);
    }
    return 0;
}