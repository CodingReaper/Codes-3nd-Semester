#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    int data;
    struct node *next;
}circular;

circular *front = NULL;
circular *rear = NULL;

circular *create(int value)
{
    circular *newnode = (circular *)malloc(sizeof(circular));
    newnode->data = value;
    newnode->next = NULL;
    return newnode;
}

circular * enqueue(int value){
    circular * new = create(value);
    if(front == NULL && rear ==  NULL){
        front = rear = new;
        new->next = front;
        return front;
    }
    else{
        rear->next = new;
        rear = new;
        new->next = front;
        return front;
    }
}

circular * dequeue(){
    circular * ptr = front;
    if(front == NULL && rear == NULL){
        printf("Queue Is empty.\n");
        return front;
    }
    else if(front == rear){
        front = rear = NULL;
        free(ptr);
        return front;
    }
    else{
        front = front->next;
        rear->next = front;
        free(ptr);
        return front;
    }
}

void display(){
    circular * ptr = front;
    printf("Queue is:\n");
    if(front == NULL){
        return;
    }
    do{
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }while(ptr != front);
}

int main()
{
    circular * xd;
    int x,y;
    do{
        printf("Followig Operations:\n");
        printf("1.ENQUEUE\n");
        printf("2.DEQUEUE\n");
        printf("3.DISPLAY\n");
        printf("4.EXIT\n");
        printf("Enter choice :");
        scanf("%d",&x);
        switch(x){
            case 1:
            printf("Enter Value:");
            scanf("%d",&y);
            xd = enqueue(y);
            break;
            case 2:
            xd = dequeue();
            break;
            case 3:
            display();
            break;
            case 4:
            printf("Quit.\n");
            break;
        }
    }while(x != 4);
    return 0;
}