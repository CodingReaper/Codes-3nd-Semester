#include<stdio.h>
int fact(int n);

int main(){
    printf("sum:%d",fact(4));
    return 0;
}

int fact(int c){
    if(c==1 || c==0){
        return 1;
    }
    int factuptonnminus1=fact(c-1);
    int factupton=factuptonnminus1 * c;
    return factupton;
}