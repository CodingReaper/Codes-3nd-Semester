#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    int data;
    struct node *next;
} queue;

queue *front = NULL;
queue *rear = NULL;

queue *create(int value)
{
    queue *newnode = (queue *)malloc(sizeof(queue));
    newnode->data = value;
    newnode->next = NULL;
    return newnode;
}

queue *enque(int value)
{
    queue *new = create(value);
    if (front == NULL && rear == NULL)
    {
        front = rear = new;
        return front;
    }
    else
    {
        rear->next = new;
        rear = new;
        return front;
    }
}

queue *dequeue()
{
    if (front == NULL)
    {
        printf("Queue is Empty.\n");
        return front;
    }
    else
    {
        queue *ptr = front;
        int d = front->data;
        front = front->next;
        free(ptr);
        printf("%d is Dequeued.\n", d);
        return front;
    }
}

void display()
{
    queue *ptr = front;
    printf("Queue is :\n");
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    queue *xd;
    int x, y;
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
            printf("Enter Value:");
            scanf("%d", &y);
            xd = enque(y);
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