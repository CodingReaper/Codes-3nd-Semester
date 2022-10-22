#include<stdio.h>
#include<stdlib.h>

void display(int a[],int n);
int insert(int a[],int n);
int delete(int a[],int n);

int main(){
    int n;
    int arr[100];
    printf("Enter Number Of elements:");
    scanf("%d",&n);
    printf("Enter Array Elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n");
    int x;
    printf("Press 1:Display Elements.\n");
    printf("Press 2:Insert A element at a particular index.\n");
    printf("Press 3:Delete a element at a particular index.\n");
    printf("Enter Choice:");
    scanf("%d",&x);

    if(x==1){
        display(arr,n);
    }
    if(x==2){
        insert(arr,n);
    }
    if(x==3){
        delete(arr,n);
    }

    return 0;

}

void display(int a[],int n){
    printf("Array Elements Are:\n");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}

int insert(int a[],int n){
    int no,index;
    n=n+1;
    printf("Enter index:");
    scanf("%d",&index);
    printf("Enter Element:");
    scanf("%d",&no);
    for(int i=n-1;i>=index;i--){
        a[i]=a[i-1];
    }
    a[index]=no;
    display(a,n);
}

int delete(int a[],int n){
    int index;
    printf("Enter Index To be deleted:");
    scanf("%d",&index);
    for(int i=index;i<n;i++){
        a[i]=a[i+1];
    }
    n=n-1;
    display(a,n);
}
