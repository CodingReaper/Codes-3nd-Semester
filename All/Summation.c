#include<stdio.h>
int sum(int c);

int main(){
    printf("sum:%d",sum(10));
    return 0;
}

int sum(int c){
    if(c==1){
        return 1;
    }
    int sumuptonnminus1=sum(c-1);
    int sumupton=sumuptonnminus1 + c;
    return sumupton;

}