#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node * next;
}*head=NULL;

void createll(int a[],int n){
    struct node *temp,*last;
    head=(struct node *)malloc(sizeof(struct node));
    head->data=a[0];
    head->next=NULL;
    last=head;
    for(int i=1;i<n;i++){
        temp=(struct node *)malloc(sizeof(struct node));
        temp->data=a[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
}

void displayll(struct node * ptr){
    while(ptr != NULL){
        printf("%d->",(ptr->data));
        ptr=ptr->next;
    }
}

void check(struct node * head){
    if(head== NULL){
        printf("\nempty\n");
    }
    else{
        printf("\nnot empty\n");
    }
}
int main(){
    int n;
    printf("How Many Nodes:");
    scanf("%d",&n);
    int arr[n];
    //int size =5;
    printf("Enter Elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    check(head);
    createll(arr,n);
    displayll(head);
    check(head);
}