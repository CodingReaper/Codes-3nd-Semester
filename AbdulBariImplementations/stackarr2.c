#include<stdio.h>
#include<stdlib.h>
int stack[100],n,top,k;
void push();
void pop();
void display();
int main(){
    top = -1;
    int x;
    printf("Enter Size Of Array:");
    scanf("%d",&n);
    do{
        printf("Following Functions:\n");
        printf("1.PUSH.\n");
        printf("2.POP.\n");
        printf("3.DISPLAY.\n");
        printf("4.EXIT.\n");
        printf("Enter Choice:");
        scanf("%d",&x);
        switch (x){
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            display();
            break;
            case 4:
            printf("\nQUIT.\n");
            break;
        }
    }while(x != 4);
    return 0;
}

void push(){
    if(top >= n-1){
        printf("Stack Overflow.\n");
        return;
    }
    else{
        printf("Enter a Value:");
        scanf("%d",&k);
        top++;
        stack[top]= k;
    }
}

void pop(){
    if(top <= -1){
        printf("Stack Underflow.\n");
        return;
    }
    else{
        printf("%d is Popped.\n",stack[top]);
        top--;
    }
}

void display(){
    if(top >= 0){
        printf("Stack is:\n");
        for(int i = top;i>=0;i--){
            printf("%d\n",stack[i]);
        }
    }
    else{
        printf("Stack is Empty.\n");
    }
}