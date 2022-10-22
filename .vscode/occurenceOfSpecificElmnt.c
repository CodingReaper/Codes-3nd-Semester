#include<stdio.h>
int main()
{
    int n;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter Array Elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k=0;
    int l;
    printf("Enter Element for its occurence:");
    scanf("%d",&l);
    for(int i=0;i<n;i++){
        if(arr[i]==l){
            k=k+1;
        }
    }
    printf("\nOccurence:%d",k);
}