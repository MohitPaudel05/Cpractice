#include<stdio.h>
#define size 5
int main(){
    int number[size],i;
    for(i=0;i<=size-1;i++){
        printf("enter the number: ");
        scanf("%d",&number[i]);
    }
    
    for (i=0;i<=size-1;i++){
        printf("entered number is number[%d]= %d\n and memory address is: %p\n",i,number[i],&number[i]);
    }
    // displaying all the array element 
    for (i = 0; i < size; i++) {
        printf("You have inserted following  elements: %d \n  ", number[i]);
    }
    
    printf("\n");
    return 0;

}