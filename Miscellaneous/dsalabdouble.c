#include<stdio.h>
#include<stdlib.h>
typedef struct node {
    int info;
    struct node * prev;
    struct node * next;
}Node;

Node * head;

Node * create(){
    Node * newnode = (Node *)malloc(sizeof(Node));
    newnode->next = NULL;
    newnode->prev = NULL;
    return newnode;
}

Node * initialize(){
    Node * new = create();
    printf("Enter Value:");
    scanf("%d",&new->info);
    Node * ptr;
    int i=0;
    char ch;
    new->next = head;
    new->prev = head;
    head =  new;
    ptr = head;
    fflush(stdin);
    while(i!=1){
        printf("Do you want to add(Y/N): ");
        scanf("%c", &ch);
        if(ch == 'y' || ch == 'Y'){
            new = create();
            printf("Enter next value: ");
            scanf("%d", &new->info);
            new->prev = ptr;
            ptr->next = new;
            ptr->prev = new;
            new->next = ptr;
            ptr =  new;
            fflush(stdin);
        }
        else{
            i=1;
        }
    }
    return head;
}

void traverse(){
    Node *ptr=head;
    printf("%d",ptr->info);
    ptr=ptr->next;
    while(ptr!=head){
        printf("%d->",ptr->info);
        ptr=ptr->next;
    }
    printf("NULL\n");
}

int main(){
    Node * xd = initialize();
    traverse();
}