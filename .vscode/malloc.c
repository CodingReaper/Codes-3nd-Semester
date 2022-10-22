#include<stdio.h>
#include<stdlib.h>


int main()
{
    // int* ptr; //ptr is now an array..
    // ptr=(int *)malloc(6 *sizeof(int));  //Dynamic Array Initialization..
    // printf("\nEnter Elements Of Array:");
    // for(int i=0;i<6;i++){
    //     scanf("%d",&ptr[i]);
    // }
    // printf("\n---Output---\n");
    // for(int i=0;i<6;i++){
    //     printf("%d\t",ptr[i]);
    // }
    // int* ptr2;
    // ptr2=(int *)calloc(6,sizeof(int));//Calloc Directly initializes 0 value to each position of array.
    // printf("\n---Output---\n");
    // for(int i=0;i<6;i++){
    //     printf("%d\t",ptr2[i]);
    // }
    // free(ptr);
    // printf("\n---Output---\n");
    // for(int i=0;i<6;i++){
    //     printf("%d\t",ptr[i]);
    // }

    //Relloc function.
    // ptr=realloc(ptr,8*sizeof(int)); //array size changed from 6 to 8..
    // printf("\nEnter Elements Of Array:");
    // for(int i=0;i<8;i++){
    //     scanf("%d",&ptr[i]);
    // }
    // printf("\n---Output---\n");
    // for(int i=0;i<8;i++){
    //     printf("%d\t",ptr[i]);
    // }

    int* ptr; //ptr is now an array..
    ptr=(int *)malloc(10 *sizeof(int));  //Dynamic Array Initialization..
    printf("\n---Output---\n");
    for(int i=1;i<=10;i++){
        ptr[i]=7*i;
        printf("7 X %d = %d\n",i,ptr[i]);
    }
    printf("\n");
    printf("\n---Output---\n");

    ptr=realloc(ptr,15*sizeof(int));
    for(int i=1;i<=15;i++){
        ptr[i]=7*i;
        printf("7 X %d = %d\n",i,ptr[i]);
    }





}