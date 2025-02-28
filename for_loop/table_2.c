#include<stdio.h>
int main(){
    int i,product;
    for(i=1;i<=10;i++){
         printf("the multiplication of %d is:",i);
        for(int j=1;j<=10;j++){
           
             
             product =j*i;
             printf("\n%d*%d= %d",i,j,product);



        }
        
        printf("\n");
       
       
        
        
    
    }
    
    
    return 0;
}