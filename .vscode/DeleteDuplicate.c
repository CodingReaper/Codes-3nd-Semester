#include<stdio.h>

int main(){
    int key,exist,i,j,k;
    int arr[]={1,2,2,4,4,5,6};
    int size=sizeof(arr)/sizeof(int);
    int arr2[100];
    for(int i=0;i<size;i++){
        printf("%d \t",arr[i]);
    }
    for(i=0,j=0;i<size;i++){
        key=arr[i];exist=0;
        for(k=0;k<i;k++){
            if(arr2[i]==key){
                exist=1;
            }
        }
        if(!exist){
            arr2[j]=arr[i];
            j++;
        }
    }
    for(i=0;i<j;i++){
        printf("\n%d \t",arr2[i]);
    }

}
