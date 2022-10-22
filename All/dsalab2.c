#include<stdio.h>
#include<stdlib.h>


int main()
{
    int* ptr; //ptr is now an array..
    int n;
    printf("Enter Number of elements:");
    scanf("%d",&n);
    ptr=(int *)malloc(n *sizeof(int));  //Dynamic Array Initialization..
    printf("\nEnter Elements Of Array:");
    for(int i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }
    int largest1=0;
    int largest2=0;
    for(int i=0;i<n;i++){
        if(ptr[i]>largest1){
            largest2=largest1;
            largest1=ptr[i];
        }
        else if(ptr[i] > largest2 && ptr[i] < largest1){
            largest2 = ptr[i];
        }
    }
    printf("2nd Largest:%d",largest2);
    return 0;
}   

