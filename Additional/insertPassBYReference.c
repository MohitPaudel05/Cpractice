#include <stdio.h>
#include<stdlib.h>
// struct  node
// {
//     int item;
// };
// int insert(int i,struct node *newload){  
//     newload->item=i;    ;    

    
//     return 0;}

// void main(){
//     struct node*newload;

//     int i=5;
//     insert(i,newload);
//     printf("%d",newload->item);

    
// }
    
#include <stdio.h>

struct  node
{
    int item;
};
int insert(int i,struct node *newload){  
    newload->item=i;    

    
    return 0;}

void main(){
    struct node*newload;
    newload =  (struct node*) malloc(sizeof(struct node));

    int i=5;
    insert(i,newload);
    printf("%d",newload->item);

    
}