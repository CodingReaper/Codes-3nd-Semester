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
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int temp;
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\nArray Elements:\n");
    for(int i=0;i<n;i++){
        printf("%d \t",arr[i]);
    }
    printf("\nSmallest Element:%d",arr[0]);
    printf("\nLargest Element:%d",arr[n-1]);
}