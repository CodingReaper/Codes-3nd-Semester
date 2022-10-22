#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

struct Node * head;

void create()
{
    struct Node *new, *ptr;
    int i=0;
    char ch;
    new = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter value: ");
    scanf("%d", &new->data);
    new->next = NULL;
    head = new;
    ptr = head;
    fflush(stdin);
    while(i!=1)
    {
        printf("Do you want to add (Y/N): ");
        scanf("%c", &ch);
        fflush(stdin);
        if(ch=='Y' || ch=='y')
        {
            new = (struct Node *)malloc(sizeof(struct Node));
            printf("Enter next value: ");
            scanf("%d", &new->data);
            new->next=NULL;
            ptr->next=new;
            ptr = new;
            fflush(stdin);
        }
        else
        {
            i=1;
        }
    }
}
void traverse()
{
    struct Node *ptr;
    ptr = head;
    printf("The list is:");
    while(ptr!=NULL)
    {
        printf(" %d",ptr->data);
        ptr = ptr->next;
    }
}
void swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void pairWiseSwap(struct Node * head)
{
    struct Node * ptr = head;
    while (ptr != NULL && ptr->next != NULL) 
    {
        swap(&ptr->data, &ptr->next->data);
        ptr = ptr->next->next;
    }
}


int main()
{
    create();
    traverse();
    pairWiseSwap(head);
    printf("\nAfter swapping:-\n");
    traverse();
}