#include<stdio.h>
int main(){
    int n,i,j,k=0,t;
    printf("How many numbers are there?:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
    printf("Enter element %d:",i+1);
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
    if(!(a[i]%2)){
    t=a[i];
    for(j=i-1;j>=0;j--){
    if(a[j]%2){
    a[j+1]=a[j];
    }
    }
    a[k]=t;
    k++;
    }
    }
    for(i=0;i<n;i++){
    printf("%d ",a[i]);
    }
    return 0;
}