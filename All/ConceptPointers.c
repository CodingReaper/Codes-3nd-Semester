#include<stdio.h>
int main(){
    int a=76;
    int* ptra=&a;
    printf("The adress of a : %x\n",&ptra);
    printf("The adress of a : %x\n",ptra);
    printf("The value of a is:%d and %d",*ptra+2,a); //Here * symbol access the value of variable a .
    return 0;
}