#include<stdio.h>
int main()
{
    int n,count;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    int arr[n],freq[n];
    printf("\nEnter Array Elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){                //Arr={1,-1,2,-1,3,-1}
        count=1;                         //freq={2,2,2}
        if(arr[i] != -1)
        {
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    count++;
                    arr[j]=-1;
                }
            }
        }
        freq[i]=count;
    }
    for(int i=0;i<n;i++){
        if(arr[i] != -1){
            printf("Occurence of %d is %d \n",arr[i],freq[i]);
        }
    }
}