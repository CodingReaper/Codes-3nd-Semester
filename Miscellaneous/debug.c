#include<stdio.h>

int main(){
    int x = 0;
    int a[]={1,2,3,4,5};

    for(int i = 0;i<5;i++){
        x = x + a[i];
    }
    printf("Sum is %d",x);
}