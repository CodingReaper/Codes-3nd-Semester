#include<stdio.h>
/*Main logic is that we have to replace the  first elemment by last element i.e nth element and 2nd element 
with (n-1)th element and so on for that reason it is n-i-1.*/

int main(){
    int arr[]={1,2,3,4,5,6};  //If no of elements is n
    int m=0,first,second;
    printf("%d \n",*(arr+2));
    for(int i=0;i<3;i++){  //Here 3 will be replaced by n/2
        first=arr[i];
        second=arr[6-i-1]; // 6-i-1 :: n-i-1
        arr[i]=second;
        arr[6-i-1]=first;
    }    
    for(int i=0;i<6;i++){
        printf("%d \t",arr[i]);
    }
}