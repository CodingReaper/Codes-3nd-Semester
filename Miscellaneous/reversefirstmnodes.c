#include<stdio.h>
#include<stdlib.h>
typedef struct node {
    int info;
    struct node * next;
}Node;

Node * create(){
    Node * newnode = malloc(sizeof(Node));
    newnode->next = NULL;
    return newnode;
}

Node *initialize()
{
    Node *head = create();
    Node *p = head;
    int len;
    printf("Enter Number Of Nodes:");
    scanf("%d", &len);
    printf("\n[ 1] >>");
    scanf("%d", &p->info);
    for (int i = 1; i < len; i++)
    {
        p->next = create();
        p = p->next;
        printf("[%2d] >>", i + 1);
        scanf("%d", &p->info);
    }
    return head;
}

Node * reversefirstmnodes(Node * head){
    Node * p = head;
    int k;
    printf("How Many Nodes to Reverse:");
    scanf("%d",&k);
    int x =1;
    while(x<k){
        p=p->next;
        x++;
    }
    Node * p2 = p->next;
    p2->next = NULL;//Broke the linked list.
    Node * prev = NULL;
    Node * next;
    Node * curr = head;
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = prev;
    }
    head = prev;
    curr = head;
    while(curr->next!= NULL){
        curr = curr->next;
    }
    curr->next = p2;
    return head;
}

void print(Node *head)
{
    Node * ptr = head;
    while (ptr != NULL)
    {
        printf("%d->", head->info);
        head = head->next;
    }
    printf("NULL\n");
} 

int main()
{
    Node * head = initialize();
    head = reversefirstmnodes(head);
    print(head);
}