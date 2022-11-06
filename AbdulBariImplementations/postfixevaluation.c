#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node{
    int data;
    struct node * next;
}stack;

stack *top = NULL;

stack *create(int value)
{
    stack *newnode = (stack *)malloc(sizeof(stack));
    newnode->data = value;
    newnode->next = NULL;
    return newnode;
}

stack *push(int value)
{ // insert at first.
    stack *new = create(value);
    if (top == NULL)
    {
        //printf("Stack is empty.Making the element given to first.\n");
        top = new;
        return top;
    }
    else
    {
        new->next = top;
        top = new;
        return top;
    }
}

char pop()
{
    stack *ptr = top;
    char d = top->data;
    if (ptr == NULL)
    {
        printf("Stack is Empty.\n");
    }
    else
    {
        top = top->next;
        free(ptr);
        return d;
    }
}
int isOperand(char x){
    if(x == '+' || x == '-' || x == '/' || x == '*' || x =='(' || x ==')' || x == '^' )
        return 0;
    else
        return 1;
}

int evaluate(char * postfix){
    int x1,x2,r;
    for(int i = 0;postfix[i] != '0';i++){
        if(isOperand(postfix[i])){
            top = push(postfix[i] - '0');
        }
        else{
            x2 = pop();x1 = pop();
            switch(postfix[i]){
                case '+':r=x1+x2;push(r);break;
                case '-':r=x1-x2;push(r);break;
                case '*':r=x1*x2;push(r);break;
                case '/':r=x1/x2;push(r);break;
            }
            top = push(r);
        }
    }
    return top->data;
}

int main(){
    char * x = "23+";
    printf("%d",evaluate(x)); 
}
