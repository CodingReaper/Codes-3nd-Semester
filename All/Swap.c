#include<stdio.h>

void swap(int *a,int *b);

int main(){
    int x=3,y=5;
    swap(&x,&y);
    printf("x and y are %d,%d",x,y);
}
void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}