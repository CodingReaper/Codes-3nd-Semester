#include<stdio.h>

int main(){
    int arr[]={1,2,3,4,5};
    int *ptr[5];
    for(int i=0;i<5;i++){
        ptr[i]=&arr[i];
    }
    for(int i=0;i<5;i++){
        printf("%d \t",*ptr[i]);
    }
    printf("\n");
    for(int i=0;i<5;i++){
        printf("%d \t",ptr[i]);
        printf("%d \t",&arr[i]);
    }

}