#include<stdio.h>

int main(){
    int n;
    printf("Enter number of elemnts:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Array elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int a,b;
    printf("\nEnter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=a && arr[i]<=b){
            count++;
        }
    }
    printf("The number of elemnts are:%d",count);
    return 0;
}

