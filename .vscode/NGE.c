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
        int p=-1;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                p=arr[j];
                break;        
            }
        }
        printf("%d NGE is %d\n", arr[i],p);
    }
}