#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct node
{
    char data;
    struct node *next;
} stack;

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
        printf("Stack is empty.Making the element given to first.\n");
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
        // printf("%c is Popped.\n",d);
    }
    return d;
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
int match(char a, char b)
{
    if (a == '{' && b == '}')
    {
        return 1;
    }
    if (a == '(' && b == ')')
    {
        return 1;
    }
    if (a == '[' && b == ']')
    {
        return 1;
    }
    return 0;
}

int isbalanced(char *p)
{
    for (int i = 0; p[i] != '\0'; i++)
    {
        if (p[i] == '(' || p[i] == '[' || p[i] == '{')
        {
            top = push(p[i]);
        }
        else if (p[i] == ')' || p[i] == '}' || p[i] == ']')
        {
            if (top == NULL)
            {
                return 0;
            }
            char u = pop();
            if (!match(u, p[i]))
            {
                return 0;
            }
        }
    }
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int pre(char x)
{
    if (x == '+' || x == '-')
    {
        return 1;
    }
    else if (x == '*' || x == '/')
    {
        return 2;
    }
    else
    {
        return 0;
    }
}

int isoperand(char x)
{
    
    if (x == '+' || x == '-' || x == '*' || x == '/')
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

char *inftopost(char *infix)
{
    int i = 0;
    int j = 0;
    char *postfix;
    int len = strlen(infix);
    postfix = (char *)malloc((len + 2) * sizeof(char));
    while (infix[i] != '\0')
    {
        if (isoperand(infix[i]))
        {
            postfix[j++] = infix[i++];
        }
        else
        {
            if (pre(infix[i]) > pre(top->data))
            {
                top = push(infix[i++]);
            }
            else
            {
                postfix[j++] = pop();
            }
        }
    }
    while (top != NULL)
    {
        postfix[j++] = pop();
    }
    postfix[j] = '\0';
    return postfix;
}
int main()
{
    stack * xd;
    xd = push('#');
    char *inf = "a+b*c-d/e";

    char *pos = inftopost(inf);

    printf("%s ", pos);

    return 0;
}
