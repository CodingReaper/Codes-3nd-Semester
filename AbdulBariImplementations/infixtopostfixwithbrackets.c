#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node{
    char data;
    struct node * next;
}stack;

stack *top = NULL;

stack *create(char value)
{
    stack *newnode = (stack *)malloc(sizeof(stack));
    newnode->data = value;
    newnode->next = NULL;
    return newnode;
}

stack *push(char value)
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

void display()
{
    stack *ptr = top;
    printf("Stack is :\n");
    while (ptr != NULL)
    {
        printf("%c\n", ptr->data);
        ptr = ptr->next;
    }
}

int isOperand(char x){
    if(x == '+' || x == '-' || x == '/' || x == '*' || x =='(' || x ==')' || x == '^' )
        return 0;
    else
        return 1;
}
 
int outPre(char x){
    if(x == '+' || x == '-')
        return 1;
    else if( x == '/' || x == '*')
        return 3;
    else if(x == '^')
        return 6;
    else if(x == '(')
        return 7;
    else if(x == ')')
        return 0;
    else
        return -1;
}
 
int inPre(char x){
    if(x == '+' || x == '-')
        return 2;
    else if( x == '/' || x == '*')
        return 4;
    else if(x == '^')
        return 5;
    else if(x == '(')
        return 0;
    else
        return -1;
}

char * IntoPost(char * p){
    int len = strlen(p);
    int i =0;
    int j =0;
    char * postfix;
    postfix = (char *)malloc((len+1)*sizeof(char));
    while(p[i] != 0){
        if (isOperand(p[i]))
        {
            postfix[j] = p[i];
            i++;
            j++;
        }
        else{
            if(top == NULL || outPre(p[i])>inPre(top->data)){
                top = push(p[i]);
                i++;
            }
            else{
                if(outPre(p[i]) == inPre(top->data)){
                    char t = pop();
                    i++;
                }
                else{
                    postfix[j] = pop();
                    j++;
                }
            }
        }
    }
    while (top != NULL)
    {
        postfix[j] = pop();
        j++;
    }
    postfix[j] ='\0';
    return postfix;
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
        }
    }

}

int main()
{
    // stack * xd;
    // //xd = push('#');
    char *infix = "3+b*(c^d-e)^(f+g*h)-i";
    char *pos = IntoPost(infix);
    printf("%s ", pos);
    return 0;
}

