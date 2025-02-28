#include <stdio.h>
#include <stdlib.h>

struct node
{
    int item;
    struct node *nextNode;
};

typedef struct node Node;
Node* start = NULL;

void insert(int data);
void display();

int main()
{
    int choice, data;
    printf("\n Press \n 1 to insert\n 2 for delete\n 3 for display\n 4 for exit\n");

    do
    {
        printf("Enter the value of choice\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the value to insert: ");
            scanf("%d", &data);
            insert(data);
            break;
        case 2:
            printf("Delete It!\n");
            break;
        case 3:
            printf("Display the node\n");
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice\n");
            break;
        }
    } while (choice != 4);

    return 0;
}

void insert(int data)
{
    Node* newnode = (Node*) malloc(sizeof(Node));
    
    newnode->item = data;
    newnode->nextNode = start;
    start = newnode;
}
void display(){
    Node *temp;
    temp = start;
    while (temp!=NULL){
        printf("%d->",temp->item);
        temp = temp->nextNode;
    }
}