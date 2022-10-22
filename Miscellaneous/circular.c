#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int info;
    struct node *next;
} Node;

Node * head;

Node *create()
{
    Node *node = (Node *)malloc(sizeof(Node));
    node->next = NULL;
    return node;
}

Node * initialize(){
    Node * new = create();
    printf("Enter value: ");
    scanf("%d", &new->info);
    Node * ptr;
    int i=0;
    char ch;
    new->next=head;
    head = new;
    ptr=head;
    fflush(stdin);
    while(i!=1)
    {
        printf("Do you want to add (Y/N): ");
        scanf("%c", &ch);
        fflush(stdin);
        if(ch=='Y' || ch=='y')
        {
            new = create();
            printf("Enter next value: ");
            scanf("%d", &new->info);
            new->next = head;
            ptr->next=new;
            ptr = new;
            fflush(stdin);
        }
        else
        {
            i=1;
        }
    }
    return head;
}



void traverse(){
    Node *ptr;
    ptr = head;
    printf("The list is:");
    do{
        printf(" %d",ptr->info);
        ptr = ptr->next;
    }
    while(ptr!=head);
}

int main(){
    Node * xd = initialize();
    traverse();
}