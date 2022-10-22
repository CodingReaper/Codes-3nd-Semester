#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int info;
    struct node *next;
} Node;

Node * head;
Node * head2;

Node *create()
{
    Node *node = (Node *)malloc(sizeof(Node));
    node->next = NULL;
    return node;
}

Node *initialize()
{
    Node *new = create();
    Node *p;
    int len;
    printf("Enter Number Of Nodes:");
    scanf("%d", &len);
    printf("Enter Head Value:");
    scanf("%d",&new->info);
    head = new;
    p = head;
    for(int i = 0;i<len-1;i++){
        new = create();
        printf("Enter next Node Value:");
        scanf("%d",&new->info);
        p->next = new;
        p = new;
    }
    return head;
}

void merge(Node ** head,Node ** head2){
    Node * ptr = *head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next = *head2;
}

void print(Node *head)
{
    int i=0;
    while (head != NULL)
    {
        printf("%d->", head->info);
        head = head->next;
    }
    printf("NULL\n");
}

Node *insertatfirst(Node *head)
{
    Node *newnode = create();
    printf("Enter Element To be inserted At first:");
    scanf("%d", &newnode->info);
    newnode->next = head;
    return newnode;
}

Node *insertatend(Node *head)
{
    Node *newnode = create();
    Node *p = head;
    printf("Enter Element To be inserted At end:");
    scanf("%d", &newnode->info);
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = newnode;
    newnode->next = NULL;
    return head;
}

Node * sortlist(Node * head){
    Node * p = head;
    Node * p2 = head->next;
    int temp;
    while(p!=NULL){
        while(p2!=NULL){
            if(p->info > p2->info){
                int temp = p->info;
                p->info = p2->info;
                p2->info = temp; 
            }
            p2=p2->next;
        }
        p = p->next;
    }
    return head;
}

Node *insertataposition(Node *head)
{
    Node *newnode = create();
    Node *p = head;
    printf("Enter Element To be inserted :");
    scanf("%d", &newnode->info);
    int index;
    printf("Enter Index:");
    scanf("%d", &index);
    int i = 1;
    while (i != index-1)
    {
        p = p->next;
        i++;
    }
    newnode->next = p->next;
    p->next = newnode;
    return head;
}

Node *deletefirst(Node *head)
{
    Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

Node *deleteatend(Node *head)
{
    Node *ptr = head;        // holds previous last elemnt
    Node *ptr2 = head->next; // holds last element
    while (ptr2->next != NULL)
    {
        ptr = ptr->next;
        ptr2 = ptr2->next;
    }
    ptr->next = NULL;
    free(ptr2);
    return head;
}

Node *deleteatposition(Node *head)
{
    Node *ptr = head; // To Hold the previous index
    int i = 1;
    int index;
    printf("Enter The Index To be deleted:");
    scanf("%d", &index);
    while (i != index - 1)
    {
        ptr = ptr->next;
        i++;
    }
    Node *q = ptr->next; // To hold the given index
    ptr->next = q->next;
    free(q);
    return head;
}

Node *searchforelement(Node *head)
{
    Node *p = head;
    int element;
    printf("Element FOR SEARCH:");
    scanf("%d", &element);
    int flag = 0;
    while (p != NULL)
    {
        if (p->info == element)
        {
            flag++;
        }
        p = p->next;
    }
    if (flag >= 1)
    {
        printf("\nElement Found.\n");
    }
    else if (flag == 0)
    {
        printf("\nNOT FOUND\n");
    }
    return head;
}

Node *deletebykey(Node *head)
{
    Node *ptr = head;
    Node *ptr2 = head->next;
    int value;
    printf("Enter Element We want to delete:");
    scanf("%d", &value);
    while (ptr2->info != value && ptr2->next != NULL)
    {
        ptr = ptr->next;
        ptr2 = ptr2->next;
    }
    if (ptr2->info == value)
    {
        ptr->next = ptr2->next;
        free(ptr2);
    }
    return head;
}

Node * reverse(Node * head)
{
    Node* previous = NULL;   // the previous pointer
    Node* current = head;   // the main pointer
    // traverse the list
    while (current != NULL)
    {
        // tricky: note the next node
        Node * next = current->next;
        current->next = previous;    // fix the current node
        // advance the two pointers
        previous = current;
        current = next;
    }
    // fix the head pointer to point to the new front
    head = previous;
    return head;
}

Node *insertafterelement(Node *head)
{
    Node *newnode = create();
    Node *prevptr = head; // this will check the value given by user
    Node *ptr = head;     // this will check the next node.
    printf("Enter Data for Node:");
    scanf("%d", &newnode->info);
    int value;
    printf("Enter the element after which it is to be inserted:");
    scanf("%d", &value);
    while (prevptr->info != value && ptr != NULL)
    { // ptr!=NULL written because if the given element is not found.
        prevptr = ptr;
        ptr = ptr->next;
    }
    prevptr->next = newnode;
    newnode->next = ptr;
    return head;
}

Node *insertbeforeelement(Node *head)
{
    Node *newnode = create();
    Node *prevptr = head; // this will check the node before .
    Node *ptr = head;     // this will check the given node by user.
    printf("Enter Data for Node:");
    scanf("%d", &newnode->info);
    int value;
    printf("Enter the element after which it is to be inserted:");
    scanf("%d", &value);
    while (ptr->info != value && ptr != NULL)
    { // ptr!=NULL written because if the given element is not found.
        prevptr = ptr;
        ptr = ptr->next;
    }
    prevptr->next = newnode;
    newnode->next = ptr;
    return head;
}

void check(Node *head)
{
    if (head == NULL)
    {
        printf("Empty Linked list");
    }
    else
    {
        printf("Not Empty");
    }
}
// 1 2 3 4 5
// 6
// 3
// 1 2 6 3 4 5

int main()
{
    Node *head;
    int x;
    head = initialize();
    // Node * head2 = initialize();
    // merge(&head,&head2);
    // print(head);
    head = sortlist(head);
    print(head);
    // do
    // {
    //     printf("\nFollowing Operations can be Done.");
    //     printf("\n1.Insert at First.");
    //     printf("\n2.Insert at End.");
    //     printf("\n3.Insert at Position.");
    //     printf("\n4.Delete at First.");
    //     printf("\n5.Delete at End.");
    //     printf("\n6.Delete at Position.");
    //     printf("\n7.Display Linked list.");
    //     printf("\n8.Delete By Element.");
    //     printf("\n9.Search For Element.");
    //     printf("\n10.Reverse.");
    //     printf("\n11.Insert after element.");
    //     printf("\n12.Insert Before Element.");
    //     printf("\n13.Check For empty.");
    //     printf("\n14.Exit\n");
    //     printf("Enter Appropiate choice:");
    //     scanf("%d", &x);
    //     switch (x)
    //     {
    //     case 1:
    //         head = insertatfirst(head);
    //         print(head);
    //         break;
    //     case 2:
    //         head = insertatend(head);
    //         print(head);
    //         break;
    //     case 3:
    //         head = insertataposition(head);
    //         print(head);
    //         break;
    //     case 4:
    //         head = deletefirst(head);
    //         print(head);
    //         break;
    //     case 5:
    //         head = deleteatend(head);
    //         print(head);
    //         break;
    //     case 6:
    //         head = deleteatposition(head);
    //         print(head);
    //         break;
    //     case 7:
    //         print(head);
    //         break;
    //     case 8:
    //         head = deletebykey(head);
    //         break;
    //     case 9:
    //         head = searchforelement(head);
    //         break;
    //     case 10:
    //         head = reverse(head);
    //         break;
    //     case 11:
    //         head = insertafterelement(head);
    //         break;
    //     case 12:
    //         head = insertbeforeelement(head);
    //         break;
    //     case 13:
    //         check(head);
    //         break;
    //     case 14:
    //         break;
    //     }
    // } while (x != 14);
}

// head=insertatfirst(head);
// head=insertatend(head);
// head=insertataposition(head);
// head=deletefirst(head);
// head=deleteatend(head);
// head=deleteatposition(head);