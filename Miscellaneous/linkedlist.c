#include <stdio.h>
#include <stdlib.h>

//1.Structure Of linked list is defined.
struct node
{
    int data;
    struct node *next;
};

//2.Creation of linkedlist.
struct node * createlinkedlist(int n){
    struct node * head=NULL;
    struct node * temp=NULL;
    struct node * p=NULL;
    for(int i=0;i<n;i++){
        //For creating a single isolated node.
        temp=(struct node *)malloc(sizeof(struct node *));
        printf("Enter The data:");
        scanf("%d",&(temp->data));
        temp->next=NULL;
        //Here we will check if head is created or not.
        if(head == NULL){
            head=temp;  //This means only a single node is created and that is the node.
        }
        else{
            p=head; //p is used for iteration from starting.here we are pointing p to 1st node i.e head.
            while(p->next != NULL){
                p=p->next;
            }
            p->next=temp; //Making isolated nodes join towards the linked lists.
        }
    }
    return head;
}

//3.Traversing The linked list.
void traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        // ptr is used to traverse through list.
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
}

//4.Inserting at first
struct node *insertfirst(struct node *head, int number)
{ // struct node * datatype function.
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = number;
    newnode->next = head;
    return newnode;
}

//5.Inserting At end.
struct node *insertend(struct node *head, int number)
{ // struct node * datatype function.
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = number;
    struct node *pointer = head;
    while (pointer->next != NULL)
    {
        pointer = pointer->next;
    }
    pointer->next = newnode;
    newnode->next = NULL;
    return head;
}

//6.Insert at particular index.
struct node *insertindex(struct node *head, int number, int index)
{ // struct node * type function means it will return a address.
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    struct node *pointer = head; // Pointer is used to traverse through the linked list head is first element. basically here pointer is
    int i = 0;                   // used to go through each element in linked list.
    while (i != index - 1)
    { // basically going to previous element to that particular index.
        pointer = pointer->next; //while loop use and line 49 used to travrse the loop.
        i++;
        // basically we are getting the address block of previous
        // linked list element so that we can stroe it in the address field of new node
        // and store the adress of new node in previous element.
    }
    newnode->data = number;        // storing value of new node
    newnode->next = pointer->next; // stroing adress field of new node from previous node which has address of next node.
    pointer->next = newnode;       // storing the address of previous node with new node.
    return head;
}

//7.Delete At first.
struct node * deleteatfirst(struct node * head){
    struct node * ptr = head;
    head=head->next;
    free(ptr);
    return head;
}

//8.Delete at a particular index.
struct node * deleteatposition(struct node * head,int position){
    struct node * p=head;
    int i=0;
    while(i != position-1){
        p=p->next; //Aceesing the previous node before the given position.
    }
    struct node * q = p->next; //q points towards node that is given suppose there are 4 elements 
    p->next=q->next;//and we want to delete the 2 th indexed node then q will point towards 2 th position node
    free(q);//and p will point towards previous element of given node.Then we 
    return head;//will store the address of 3th node in previous node that is p and which is present in q.
}

//9.Delete at end.
struct node * deleteatend(struct node * head){
    struct node * pointer=head;//this will hold the element previous to last element
    struct node * pointer2=head->next; //this will hold the last element 
    while(pointer2->next != NULL){
        pointer=pointer->next;  
        pointer2=pointer2->next;
    }
    pointer->next=NULL; //pointer now becomes last node so NULL value is assigned to next field of pointer.
    free(pointer2);//pointer 2 was holding the last element hence it needs to be freed.
    return head;
}

struct node * deleteelement(struct node * head,int value){
    struct node *p=head;
    struct node *q=head->next;
    while(q->data != value && q->next != NULL){
        p=p->next;
        q=q->next;
    }
    if(q->data == value){
        p->next=q->next;
        free(q);
    }
    return head;
}

int main()
{
    int n;
    struct node * head=NULL;
    printf("How Many Nodes:");
    scanf("%d",&n);
    head=createlinkedlist(n);
    head=insertfirst(head,70);
    head=deleteelement(head,70);
    traversal(head);
    return 0;
}

//x=x->next inside the loop this line means traversing to next element.
// struct node *head;
//     struct node *second;
//     struct node *third;

//     head = (struct node *)malloc(sizeof(struct node));
//     second = (struct node *)malloc(sizeof(struct node));
//     third = (struct node *)malloc(sizeof(struct node));

//     head->data = 10;
//     head->next = second;

//     second->data = 12;
//     second->next = third; // pointing Next Element.

//     third->data = 14;
//     third->next = NULL;

//     printf("Linked List Before Edit:\n");
//     traversal(head);
//     printf("\n");
//     printf("Linked List After Edit:\n");
//     // head=insertfirst(head,17);
//     // head=insertindex(head,89,1);
//     head = insertend(head, 78);
//     //head=deleteatfirst(head);
//     //head = deleteatposition(head,1);
//     head=deleteatend(head);
//     traversal(head);