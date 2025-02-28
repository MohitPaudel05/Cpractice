#include <stdio.h>

int main()
{
    int i = 1;
    int sum=1;
    
   
    do
    {
        

        printf("%d\t", i);
        // sum = sum+i;
        sum = sum*i;
        i++;
         
        
    

    } while ( i<=5);
    
    printf("\nthe product  is %d",sum);
    printf("\nthe average is %.2f",(float)sum/10);
    
    
    
    return 0;
}