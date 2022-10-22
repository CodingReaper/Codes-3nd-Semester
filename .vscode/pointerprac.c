#include<stdio.h>

int main(){
    int a=10;
    int *p;
    p=&a;
    printf("P=%d",*(p)+1);
    printf("\nAddress :%u",*(&a));

    int b=6;
    int *ptr=&b;
    int **pptr=&ptr;

    printf("\n%d\n",**pptr);
    printf("%d\n",&ptr);    
    printf("%d\n",pptr);
    printf("%d\n",*pptr);


}