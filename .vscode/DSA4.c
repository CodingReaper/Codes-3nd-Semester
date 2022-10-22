#include<stdio.h>
#include<stdlib.h>

void distance(int arr[],int n, int x, int y);

int main(){
    int n,x,y;
    printf("Enter Size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Array Elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n ARRAY: \n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\nEnter x:");
    scanf("%d",&x);
    printf("\nEnter y:");
    scanf("%d",&y);
    distance(arr,n,x,y);
}
void distance(int arr[],int n, int x, int y){
    int mindist=1000;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] == x && arr[j] == y) // Basically we are updating the distance
            mindist = abs(i-j);
            if(arr[i] == y && arr[j] == x)
            mindist = abs(i-j); 
        }
    }
    printf("Minimum Distance:%d",mindist);
}
