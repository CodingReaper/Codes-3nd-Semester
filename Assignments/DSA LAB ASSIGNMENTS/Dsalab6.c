#include <stdio.h>
#include<stdlib.h>

typedef struct node {
    int data;
    struct node * next;
}stack;
 
stack * top = NULL;

stack * create(int value){
    stack * newnode = (stack *)malloc(sizeof(stack));
    newnode->data = value;
    newnode->next = NULL;
    return newnode;
}

stack * push(int value){ //insert at first.
    stack * new = create(value);
    if(top == NULL){
        printf("Stack is empty.Making the element given to first.\n");
        top = new;
        return top;
    }
    else{
        new->next = top;
        top = new;
        return top;
    }
}

stack * pop(){
    stack * ptr = top;
    int d = top->data;
    if(ptr == NULL){
        printf("Stack is Empty.\n");
        return top;
    }
    else{
        top = top->next;
        free(ptr);
        printf("%d is Popped.\n",d);
        return top;
    }
}

void display(){
    stack * ptr = top;
    printf("Stack is :\n");
    while(ptr != NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}

int main()
{
    stack * xd;
    int x,y;
    do{
        printf("Followig Operations:\n");
        printf("1.PUSH\n");
        printf("2.POP\n");
        printf("3.DISPLAY\n");
        printf("4.EXIT\n");
        printf("Enter choice :");
        scanf("%d",&x);
        switch(x){
            case 1:
            printf("Enter Value:");
            scanf("%d",&y);
            xd = push(y);
            break;
            case 2:
            xd = pop();
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