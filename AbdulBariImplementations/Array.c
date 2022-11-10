#include <stdio.h>
#include <stdlib.h>

struct Array{
    int * A;
    int size; //maximum capacity
    int length;//Number of elements we have entered.
};

void Display(struct Array d){
    printf("Elements are:\n");
    for(int i = 0;i<d.length;i++){
        printf("%d\n",d.A[i]);
    }
}
int main(){
    struct Array arr;
    int n;
    printf("Enter Size of Array:");
    scanf("%d",&arr.size);
    arr.A = (int *)malloc(arr.size * sizeof(int));
    arr.length = 0;

    printf("Enter Number Of numbers:");
    scanf("%d",&n);

    printf("Enter Elements:");
    for(int i = 0;i<6;i++){
        scanf("%d",&arr.A[i]);
    }
    arr.length = 6;

    Display(arr);
}