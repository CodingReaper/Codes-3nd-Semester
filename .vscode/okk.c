#include<stdio.h>
#include<stdlib.h>

int max(int a,int b)
{
    return (a > b ) ? a : b;
}

int main(){
    int x=10;
    int y=5;
    int z=max(x,y);
    printf("%d",(y-x));
}