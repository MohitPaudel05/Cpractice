#include<stdio.h>
int main(){
    int i;
    FILE *file;
    file = fopen("C:/Users/mohit/OneDrive/Desktop/c_classroom/fileHandling/even_number.txt","w");
    if(file == NULL){
        printf("couldn't open the file");
        return 0;
    }
    for (i=1;i<50;i++){
        if (i % 2 == 0) {
            fprintf(file,"The even number is %d\n", i);
        }
       
    }
    
   
    return 0;
}
