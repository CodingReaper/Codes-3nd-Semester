#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int info;
    struct node *next;
} Node;

Node * head ;

Node *create()
{
    Node * node = (Node *)malloc(sizeof(Node));
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

void traverse(Node *head)
{
    Node *p = head;
    while (p != NULL)
    {
        printf("%d->", p->info);
        p = p->next;
    }
    printf("NULL\n");
}

void sort(Node * head){
    Node * curr = head;
    Node * p = head->next;
    while(curr != NULL){
        if(curr->info > p->info){
            int temp = curr->info;
            curr->info = p->info;
            p->info = temp;
        }
        curr = p;
        p=p->next;
    }
}

void swap(Node *a,Node *b) 
{ 
    int temp = a->info; 
    a->info = b->info; 
    b->info = temp; 
} 

Node * bubbleSort(Node *head) 
{ 
    int swapped, i; 
    Node *ptr1; 
    Node *lptr = NULL; 
    if (head == NULL) 
        exit(0); 
    do
    { 
        swapped = 0; 
        ptr1 = head; 
        while (ptr1->next != lptr) 
        { 
            if (ptr1->info > ptr1->next->info) 
            { 
                swap(ptr1, ptr1->next); 
                swapped = 1; 
            } 
            ptr1 = ptr1->next; 
        } 
        lptr = ptr1; 
    } 
    while (swapped); 
    return head;
} 

void insertatsoreted(Node * head){
    Node * p = head;
    Node * new = create();
    Node * q = NULL;
    int number;
    printf("Enter Number:");
    scanf("%d",&new->info);
    if(head ==  NULL){
        head = new;
    }
    else{
        while(p && p->info<number){
            q=p;
            p=p->next;
        }
        if(p == head){
            new->next=head;
            head = new;
        }
        else{
            new->next=p->next;
            q->next = new;
        }
    }
}

int main(){
    Node * xd = initialize();
    traverse(xd);
    xd=bubbleSort(xd);
    traverse(xd);
    insertatsoreted(xd);
    traverse(xd);
}

