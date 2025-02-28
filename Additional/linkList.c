#include <stdio.h>
#include <stdlib.h>

struct node
{
    int item;
    struct node *nextNode;
    
    
};
typedef struct node Node;
Node* start =NULL;
void insert(int);
void display();
int main()
{
    int choice, data;
    char ch;
    printf("\n Press \n 1 to  insert\n 2 for delete\n 3 for display\n4 for exit\n");


    do
    {
        
        printf("Enter the value of choice\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Insert Here!\n");
            insert(ch);
            break;
        case 2:
            printf("Delete It!\n");
            break;
        case 3:
            printf("Display the node\n");
            display
            break;
        case 4:
        exit(0);

        default:
            printf("Invalid choice\n");
            break;
        }
       

    } while (choice!=4);

    return 0;
}


//for inseting data
void insert(int data){
    
    Node* newnode = (Node*) malloc(sizeof(Node));
    newnode->nextNode = start;

    newnode->item = data;
    start = newnode;

}
// To display the node
void display(){
    Node* temp;
    temp = start;
    while (temp != NULL){
        printf("%d\t",temp->item);
        temp = temp->nextNode;
    }
}