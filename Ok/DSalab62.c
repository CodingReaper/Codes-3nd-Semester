#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int roll;
    int cgpa;
    struct node * next;
}details;

details * top = NULL;

details * create(int value,int value2){
    details * newnode = (details*)malloc(sizeof(details));
    newnode->roll = value;
    newnode->cgpa = value2;
    newnode->next = NULL;
    return newnode;
}

details * push(int x,int y){ //insert at first.
    details * new = create(x,y);
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

void display(){
    details * ptr = top;
    printf("Stack is :\n");
    while(ptr != NULL){
        printf("Roll:%d CGPA:%d \n",ptr->roll,ptr->cgpa);
        ptr=ptr->next;
    }
}

void reverseprint(details * top){
    if(top == NULL){
        return;
    }
    reverseprint(top->next);
    printf("Roll:%d CGPA:%d \n",top->roll,top->cgpa);
}

int main(){
    details * xd = NULL;
    xd = push(50,8);
    xd = push(59,9);
    display();
    printf("Reverse:\n");
    reverseprint(xd);
}


