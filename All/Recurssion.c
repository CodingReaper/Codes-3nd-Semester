#include<stdio.h>
void printHW(int c);

int main(){
    printHW(5);
    return 0;
}

void printHW(int c){
    if(c==0){
        return;
    }
    printf("HelloWorld\n");
    printHW(c-1);
}