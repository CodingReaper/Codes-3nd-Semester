#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int info;
    struct node *next;
} Node;

Node *head = NULL;

Node *create()
{
    Node *newnode = (Node *)malloc(sizeof(Node));
    newnode->next = NULL;
    return newnode;
}

Node *insertatfirst(int value)
{
    Node *new = create();
    new->info = value;
    if (head == NULL)
    {
        head = new;
        return head;
    }
    else
    {
        new->next = head;
        head = new;
        return head;
    }
}

Node *insertatend(int value)
{
    Node *new = create();
    new->info = value;
    if (head == NULL)
    {
        head = new;
        return head;
    }
    else
    {
        Node *ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = new;
        return head;
    }
}

int countnodes(){
    Node * ptr = head;
    int k = 0;
    if(ptr == NULL){
        return 0;
    }
    else{
        while(ptr != NULL){
            k++;
            ptr = ptr->next;
        }
        return k;
    }
}

Node *insertatanyposition(int value, int position)
{
    Node *new = create();
    new->info = value;
    int i = 1;
    int size = countnodes();
    if (position == 1)
    {
        printf("If List is empty then new node will be first node.\n");
        head = insertatfirst(value);
        return head;
    }
    else if(position == -1){
        head = insertatend(value);
        return head;
    }
    else if(position > size){
        printf("Out of range.\n");
        return head;
    }
    else
    {
        Node *ptr = head;
        while (i != position - 1)
        {
            ptr = ptr->next;
            i++;
        }
        new->next = ptr->next;
        ptr->next = new;
        return head;
    }
}

Node *deleteatfirst()
{
    if (head == NULL)
    {
        printf("List Is Empty.");
        return head;
    }
    else
    {
        Node *ptr = head;
        head = head->next;
        free(ptr);
        return head;
    }
}

Node *deleteatend()
{
    Node *ptr = head;
    if (head == NULL)
    {
        printf("List is empty.");
        return head;
    }
    if (ptr->next == NULL)
    {
        printf("List is Empty now.");
        head = NULL;
        return head;
    }
    while (ptr->next->next != NULL)
    {
        ptr = ptr->next;
    }
    free(ptr->next);
    ptr->next = NULL;
    return head;
}

Node * deleteatpos(int position){
    int size = countnodes();
    int i = 1;
    if(head == NULL){
        printf("List is empty.\n");
        return head;
    }
    else if(position == 1){
        head = deleteatfirst();
        return head;
    }
    else if(position == -1){
        head = deleteatend();
        return head;
    }
    else if(position > size){
        printf("Out of RANGE.\n");
        return head;
    }
    else{
        Node * ptr = head;
        while(i != position-1){
            ptr = ptr->next;
            i++;
        }
        Node * ptr2 = ptr->next;
        ptr->next = ptr2->next;
        free(ptr2);
        return head;
    }
}

int isempty()
{
    if (head == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void searchelement(int value)
{
    Node *ptr = head;
    int x = 0;
    while (ptr != NULL)
    {
        if (ptr->info == value)
        {
            x++;
        }
        ptr = ptr->next;
    }
    if (x > 0)
    {
        printf("Element Found.\n");
    }
    else
    {
        printf("Element Not found.\n");
    }
}

Node *insertafter(int value1, int value2)
{
    Node *ptr = head;
    Node *newnode = create();
    newnode->info = value2;
    if (ptr == NULL)
    {
        printf("List Is empty.\n");
        return head;
    }
    else
    {
        while (ptr && ptr->info != value1)
        {
            ptr = ptr->next;
        }
        if (ptr == NULL)
        {
            printf("The Element %d is Not Found.\n", value1);
            return head;
        }
        newnode->next = ptr->next;
        ptr->next = newnode;
        return head;
    }
}

Node *insertbefore(int value1, int value2)
{
    Node *ptr = head;
    Node *ptr2 = head;
    Node *newnode = create();
    newnode->info = value2;
    if (ptr == NULL)
    {
        printf("List Is empty.\n");
        return head;
    }
    else
    {
        while (ptr && ptr->info != value1)
        {
            ptr2 = ptr; // Holding previous node.(ptr2)
            ptr = ptr->next;
        }
        if (ptr == NULL)
        {
            printf("The Element %d is Not Found.\n", value1);
            return head;
        }
        else if (ptr == head)
        {
            newnode->next = head;
            head = newnode;
            return head;
        }
        newnode->next = ptr2->next;
        ptr2->next = newnode;
        return head;
    }
}

Node *delafter(int value)
{
    Node *ptr = head;
    if (ptr == NULL)
    {
        printf("List is Empty.\n");
        return head;
    }
    else
    {
        while (ptr && ptr->info != value)
        {
            ptr = ptr->next;
        }
        if (ptr == NULL || ptr->next == NULL)
        {
            printf("The Element %d is not found or next node not found.\n", value);
            return head;
        }
        else
        {
            Node *ptr2 = ptr->next;
            ptr->next = ptr2->next;
            free(ptr2);
            return head;
        }
    }
}
Node *delbefore(int value)
{
    Node *ptr = head;
    Node *ptr2 = head;
    if (ptr == NULL)
    {
        printf("List is Empty.\n");
        return head;
    }
    else
    {
        while (ptr->next && ptr->next->info != value)
        {               // if linked list is 1 2 3 4 5 we give input 4 then ptr holds 3
            ptr2 = ptr; // and ptr2 holds 2.
            ptr = ptr->next;
        }
        if (ptr->next == NULL)
        {
            printf("The Element %d is not found or node is missing.\n", value);
            return head;
        }
        else if (ptr == head && ptr2 == head)
        { // if deleted element is first element so both ptrs will point to head.
            head = head->next;
            return head;
        }
        else
        {
            ptr2->next = ptr->next;
            free(ptr);
            return head;
        }
    }
}

Node *deletewithkey(int value)
{
    Node *ptr = head;
    Node *ptr2 = head;
    if (ptr == NULL)
    {
        printf("List is empty.\n");
        return head;
    }
    else
    {
        while (ptr && ptr->info != value)
        {
            ptr2 = ptr;
            ptr = ptr->next;
        }
        if (ptr2 == head)
        {
            head = head->next;
            return head;
        }
        else
        {
            ptr2->next = ptr->next;
            free(ptr);
            return head;
        }
    }
}

void reverseprint(Node *head)
{
    Node *ptr = head;
    if (ptr == NULL)
    {
        printf("NULL<-");
        return;
    }
    reverseprint(ptr->next);
    printf("%d<-", ptr->info);
}

Node *sort()
{
    Node *ptr = head;
    Node *ptr2 = NULL;
    if (ptr == NULL)
    {
        printf("List is Empty.\n");
        return head;
    }
    else
    {
        while (ptr != NULL)
        {
            Node *ptr2 = ptr->next;
            while (ptr2 != NULL)
            {
                if (ptr->info > ptr2->info)
                {
                    int temp = ptr->info;
                    ptr->info = ptr2->info;
                    ptr2->info = temp;
                }
                ptr2 = ptr2->next;
            }
            ptr = ptr->next;
        }
        return head;
    }
}

Node *reversenodes()
{
    Node *prev = NULL;
    Node *curr = head;
    Node *nex = NULL;
    if (curr == NULL)
    {
        printf("List is Empty.\n");
        return head;
    }
    else
    {
        while (curr != NULL)
        {
            nex = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nex;
        }
        head = prev;
        return head;
    }
}

void printnthnode(int position)
{
    Node *ptr = head;
    int count = 0;
    if (ptr == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    while (ptr != NULL)
    {
        ptr = ptr->next;
        count++;
    }
    if (count < position)
    {
        printf("Out of range.");
        return;
    }
    ptr = head;
    for (int i = 1; i < count - position + 1; i++)
    { // nth node from end is len-n+1 from first ..
        ptr = ptr->next;
    }
    printf("The %dth node from end is %d.\n", position, ptr->info);
}

Node *deleteduplicates()
{
    Node *ptr = head;
    Node *ptr2 = NULL;
    Node *ptr3 = NULL;
    if (ptr == NULL)
    {
        printf("List is empty.\n");
        return head;
    }
    else
    {
        while (ptr != NULL)
        {
            ptr2 = ptr;
            ptr3 = ptr->next;
            while (ptr3 != NULL)
            {
                if (ptr->info == ptr3->info)
                {
                    ptr2->next = ptr3->next;
                }
                else
                {
                    ptr2 = ptr3;
                }
                ptr3 = ptr3->next;
            }
            ptr = ptr->next;
        }
        return head;
    }
}


void display()
{
    Node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d->", ptr->info);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

int main()
{
    int x = 5;
    Node *f;
    // f = deleteduplicates();
    // f = insertatfirst(1);
    // f = insertatend(2);
    // f = insertatend(3);
    // f = insertatend(2);
    // f = insertatend(2);
    // f = insertatend(4);
    // f = insertatend(1);
    // f = insertatend(5);
    // display();
    // f = deleteatpos(2);
    // f = deleteduplicates();
    // f = sort();
    f = deleteatfirst();
    display();
}