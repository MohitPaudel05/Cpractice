#include <stdio.h>

struct  node
{
    int item;
};



int insert(int newItem){
    struct node newload;
    
    printf("Enter the value of newitem\n");
    scanf("%d",&newItem);

    newload.item = newItem;
    printf("the value of new item is %d\n",newload.item);
    return 0;
    
    
    
}

void main(){
    struct node newload;
    int newItem;
    insert(newItem);
    

    

    


}
    
