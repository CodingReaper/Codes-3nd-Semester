#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node{
    int data;
    int priority;
    struct node * next;
}Pqueue;

Pqueue * front = NULL;
Pqueue * rear = NULL;

Pqueue * create(int value,int value2){
    Pqueue * n = (Pqueue *)malloc(sizeof(Pqueue));
    n->data = value;
    n->priority = value2;
    n->next = NULL;
    return n;
}

Pqueue * enque(int x,int y){
    Pqueue * newnode = create(x,y);
    Pqueue * p;
    if(front == NULL || y < front->priority){
        newnode->next = front;
        front = newnode;
        return front;
    }
    else{
        p = front;
        while(p->next != NULL && p->next->priority <= y){
            p = p->next;
        }
        newnode->next = p->next;
        p->next = newnode;
        return front;
    }
}

Pqueue *dequeue()
{
    if (front == NULL)
    {
        printf("Queue is Empty.\n");
        return front;
    }
    else
    {
        Pqueue *ptr = front;
        int d = front->data;
        front = front->next;
        free(ptr);
        printf("%d is Dequeued.\n", d);
        return front;
    }
}

void display()
{
    Pqueue *ptr = front;
    printf("Queue is :\n");
    while (ptr != NULL)
    {
        printf("%d  %d\n",ptr->priority,ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    Pqueue *xd;
    int x,y,z;
    do
    {
        printf("Followig Operations:\n");
        printf("1.ENQUEUE\n");
        printf("2.DEQUEUE\n");
        printf("3.DISPLAY\n");
        printf("4.EXIT\n");
        printf("Enter choice :");
        scanf("%d", &x);
        switch (x)
        {
        case 1:
            printf("Enter Priority:");
            scanf("%d", &y);
            printf("Enter Value:");
            scanf("%d",&z);
            xd = enque(z,y);
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
    } while (x != 4);
    return 0;
}

