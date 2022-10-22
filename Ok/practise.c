#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter Number of elements:");
    scanf("%d",&n);
    int *ptr;
    ptr=(int *)malloc(n*sizeof(int));
    printf("Enter Array Elements:");
    for(int i=0;i<n;i++){
        scanf("%d",(ptr+i));
    }
    printf("\n---OUTPUT---\n");
    for(int i=n-1;i>=0;i--){
        printf("%d\t",*(ptr+i));
    }
}