#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int info;
    struct node * next;
    struct node * prev;
}Node;

Node * head;

Node * create(){
    Node * newnode = malloc(sizeof(Node));
    newnode->next = NULL;
    newnode->prev = NULL;
    return newnode;
}

Node * initialize(){
    Node * new,* ptr;
    new=create();
    printf("Enter Data:");
    scanf("%d",&new->info);
    int i=0;
    char ch;
    head = new;
    ptr = head;
    fflush(stdin);
    while(i!=1){
        printf("Do you want to add(Y/N): ");
        scanf("%c", &ch);
        if(ch == 'Y' || ch == 'y'){
            new = create();
            printf("Enter value: ");
            scanf("%d", &new->info);
            new->prev=ptr;
            ptr->next=new;
            ptr = new;
            fflush(stdin);
        }
        else{
            i=1;
        }
    }
    return head;
}

Node * insertatfirst(Node * head){
    Node * newnode = create();
    printf("Enter Value:");
    scanf("%d",&newnode->info);
    newnode->next =  head;
    head->prev = newnode;
    head = newnode;
    return newnode;
}

Node * insertatend(Node * head){
    Node * newnode = create();
    Node * ptr = head;
    printf("Enter Value:");
    scanf("%d",&newnode->info);
    if(ptr == NULL){
        head = newnode;
    }
    else{
        while(ptr->next != NULL){

            ptr=ptr->next;
        }
        ptr->next = newnode;
        newnode->prev = ptr;
    }
    return head;
}

Node * insertatindex(Node * head){

}

void Traverse(Node * head){
    Node * p = head;
    printf("\nThe List is:\n");
    while(p!=NULL){
        printf("%d->",p->info);
        //Traverse(p->next);
        p=p->next;
    }
    printf("NULL\n");
}

int main(){
    Node * xd;
    // xd = initialize();
    // Traverse(xd);
    // xd = insertatfirst(xd);
    // Traverse(xd);
    xd = initialize();
    Traverse(xd);
}