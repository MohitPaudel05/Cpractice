#include<stdio.h>
#include<stdlib.h>
 int main(){
    int *arr;
    int n=5;
    arr = (int*)malloc(n*sizeof(int));
    if (arr==NULL){
        printf("Memory not allocated\n");
        return 1;
    }
    for (int i=0;i<n;i++){
        arr[i]=i+1;;}
    
        printf("The elements of the array are: ");
        for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
        free(arr);
        printf("\nMemory successfully deallocated using free\n");
    }
 