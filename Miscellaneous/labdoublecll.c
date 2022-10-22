#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    struct node *prev;
    int data;
    struct node *next;
} Node;

Node *head = NULL;

Node *create(int info)
{
    Node *new = (Node *)malloc(sizeof(Node));
    new->data = info;
    new->next = NULL;
    new->prev = NULL;
    return new;
}

Node *insertatbegin(int value)
{
    Node *newnode = create(value);
    if (head == NULL)
    {
        head = newnode;
        newnode->next = newnode;
        newnode->prev = newnode;
        return head;
    }
    else
    {
        head->prev->next = newnode;
        newnode->prev = head->prev;
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
        return head;
    }
}

void display()
{
    if (head == NULL)
    {
        printf("\nList is empty!\n");
        return;
    }

    Node *temp = head;
    do
    {
        printf("%d->", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("NULL\n");
}

Node *insertatend(int value)
{
    Node *newnode = create(value);
    if (head == NULL)
    {
        newnode->next = newnode;
        newnode->prev = newnode;
        head = newnode;
        return head;
    }
    else
    {
        head->prev->next = newnode;
        newnode->prev = head->prev;
        newnode->next = head;
        head->prev = newnode;
        return head;
    }
}

Node *deleteafter(int value)
{
    Node *ptr = head;
    if (ptr == NULL)
    {
        printf("List is empty.\n");
        return head;
    }
    while (ptr->data != value)
    {
        ptr = ptr->next;
    }
    Node *ptr2 = ptr->next;
    Node *ptr3 = ptr->next->next;
    // ptr->next = ptr3;
    // ptr3->prev = ptr2->prev;
    if (ptr2 == head)
    {
        ptr->next = ptr3;
        ptr3->prev = ptr;
        head = ptr3;
        free(ptr2);
        return head;
    }
    else
    {
        ptr->next = ptr3;
        ptr3->prev = ptr2->prev;
        free(ptr2);
        return head;
    }
}

int main()
{
    Node *fy;
    int x, value;
    do
    {
        printf("\n");
        printf("List Of Functions:-\n");
        printf("1.Insert at begining.\n");
        printf("2.Insert at end.\n");
        printf("3.Delete After a particular element.\n");
        printf("4.Display.\n");
        printf("5.Exit.\n");
        printf("Enter choice:");
        scanf("%d", &x);
        switch (x)
        {
        case 1:
            printf("Enter Element:");
            scanf("%d", &value);
            fy = insertatbegin(value);
            break;
        case 2:
            printf("Enter Element:");
            scanf("%d", &value);
            fy = insertatend(value);
            break;
        case 3:
            printf("Enter Element:");
            scanf("%d", &value);
            fy = deleteafter(value);
            break;
        case 4:
            printf("Linked List is :\n");
            display();
            break;
        case 5:
            printf("Quit.\n");
            break;
        }
    }while(x != 5);
    return 0;
}