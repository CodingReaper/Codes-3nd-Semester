#include<stdio.h>
#include<stdlib.h>

void display(int a[],int n){
    printf("Array is:");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}

int indInsertion(int arr[], int size, int element, int index){
    for (int i = size-1; i >=index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 1; 
}

void indDeletion(int arr[], int size, int index)
{
    for (int i = index; i < size-1; i++)
    {
        arr[i] = arr[i + 1];
    }  
}

int main(){
    int n,k;
    printf("Enter Number Of elements:");
    scanf("%d",&k);
    int a[k];
    printf("Enter Elements Of Array:");
    for(int i=0;i<k;i++){
        scanf("%d",&a[i]);
    }
    printf("Press 1.Delete A Element at a specific position.\n");
    printf("Press 2.Insert A Element at a specific position.\n");
    printf("Press 3.Displaying the content of the array.\n");
    printf("\nEnter Choice:");
    scanf("%d",&n);
    if(n==1){
        int b;
        printf("Enter index To be deleted:");
        scanf("%d",&b);
        indDeletion(a,k,b);
        k=k-1;
        display(a,k);
    }
    if(n==2){
        int num,index;
        printf("Enter The index and Number to be inserted:");
        scanf("%d%d",&index,&num);
        indInsertion(a,k,num,index);
        k=k+1;
        display(a,k);
    }
    if(n==3){
        display(a,k);
    }
    return 0;
}

