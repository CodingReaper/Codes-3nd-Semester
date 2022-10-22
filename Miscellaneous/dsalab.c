#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int info;
    struct node * next;
}Node;

Node * head;

Node * create(){
    Node * newnode = (Node *)malloc(sizeof(Node));
    newnode->next=NULL;
    return newnode;
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

Node *deletionatlocation(Node *head)
{
    Node *ptr = head;
    int i = 0;
    int index;
    printf("Enter The index:");
    scanf("%d", &index);
    while (i != index - 1)
    {
        ptr = ptr->next;
        i++;
    }
    Node *q = ptr->next;
    ptr->next = q->next;
    free(q);
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

Node *insertatfirst(Node *head)
{
    Node *newnode = create();
    printf("Enter Value For Newnode:");
    scanf("%d", &newnode->info);
    newnode->next = head;
    return newnode;
}

//Dont write after this.Directly go to Main Function.
int count(Node * head){
    int count =0;
    Node * ptr = head;
    while(ptr!=NULL){
        ptr=ptr->next;
        count++;
    }
    return count;
}

int summ(Node * head){
    Node * ptr = head;
    int s=0;
    if(ptr != NULL){
        return 0;
    }
    else{
        while(ptr!=NULL){
            s=s+ptr->info;
            ptr=ptr->next;
        }
        return s;
    }
}

int maximum(Node * head){
    int x=-32768;
    Node * ptr = head;
    while(ptr != NULL){
        if((ptr->info)>x){
            x=ptr->info;
        }
        ptr=ptr->next;
    }
    return x;
}


Node * shiftingtofirst(Node * head){
    Node * ptr = head;
    Node * q = NULL;
    int key;
    printf("Enter KEY:");
    scanf("%d",&key);
    while(ptr != NULL){
        if(ptr->info == key){
            q->next=ptr->next;
            ptr->next = head;
            head = ptr;
        }
        q=ptr;
        ptr=ptr->next;
    }
    return head;
}

int maxuimumR(Node * head){
    Node * ptr = head;
    int x=0;
    if(ptr == NULL){
        return 0;
    }
    x=maxuimumR(ptr->next);
    if(x>ptr->info){
        return x;
    }
    else{
        return ptr->info;
    }
}

void search(Node * head){
    Node * ptr = head;
    int flag =0;
    int key;
    printf("Enter KEY:");
    scanf("%d",&key);
    while(ptr != NULL){
        if(ptr->info == key){
            flag=1;
        }
        ptr=ptr->next;
    }
    if(flag == 1){
        printf("FOUND\n");
    }
    else{
        printf("NOT FOUND.\n");
    }
}

int sumR(Node * head){
    Node * ptr = head;
    if(ptr == NULL){
        return 0;
    }
    else{
        return sumR(ptr->next)+ptr->info;
    }
}


int main()
{
    Node *xd;
    int x;
    // head=initialize();
    do
    {
        printf("\nFollowing Operations:");
        printf("\n1.Creation");
        printf("\n2.Display linked list.");
        printf("\n3.Insert At beginning.");
        printf("\n4.Delete at a particular position.");
        printf("\n5.Reverse.");
        printf("\n6.Count.");
        printf("\n7.SUM.");
        printf("\n8.Maximum.");
        printf("\n9.Search.");
        printf("\n10.Shifting To first.");
        printf("\n11.Exit\n");
        printf("\nEnter Choice:");
        scanf("%d", &x);
        switch (x)
        {
        case 1:
            xd = initialize();
            break;
        case 2:
            traverse(xd);
            break;
        case 3:
            xd = insertatfirst(xd);
            break;
        case 4:
            xd = deletionatlocation(xd);
            break;
        case 5:
            xd = reverse(xd);
            break;
        case 6:
            int x =count(xd);
            printf("Total Elements are %d\n",x);
            break;
        case 7:
            int y=sumR(xd);
            printf("Total Sum is %d\n",y);
            break;
        case 8:
            int z=maxuimumR(xd);
            printf("Maximum Element is %d\n",z);
            break;
        case 9:
            search(xd);
            break;
        case 10:
            xd = shiftingtofirst(xd);
            break;
        case 11:
            break;
        }
    } while (x != 11);
    return 0;
}