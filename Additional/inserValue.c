#include <stdio.h>

struct  node
{
    int item;
};
int insert(int newItem,struct node newload){        

    newload.item = newItem;
    printf("the value of new item is %d\n",newload.item);
    return 0;}

void main(){
    struct node newload;

    int newitem;
    printf("Enter the value of newitem\n");
    
    scanf("%d",&newitem);
    insert(newitem,newload);

    
}
    
