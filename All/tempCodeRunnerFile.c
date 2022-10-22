#include<stdio.h>
int main(){
    int a=76;
    int* ptra=&a;
    printf("The value of a is:%d and %d",*ptra,a);
    return 0;
}