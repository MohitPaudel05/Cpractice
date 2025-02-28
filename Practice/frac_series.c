#include<stdio.h>
 
void series(int n){
   
    for (int i=1;i<=n;i++){
        printf("%d/%d\t",i,i+1);
    }
    
}
int main(){
    int n;
    printf("Enter your desire number: ");
    scanf("%d",&n);
    series(n);
    return 0;
}