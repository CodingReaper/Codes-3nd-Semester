#include<stdio.h>
#include<stdlib.h>

int main(){
    int a,b;
    printf("Enter Maximum Coefficient of X AND Y:");
    scanf("%d%d",&a,&b);
    int arr[a+1][b+1],arr2[a+1][b+1],arr3[a+1][b+1];
    printf("\n");
    printf("Enter Details For Poly1:\n");
    for(int i=0;i<=a;i++){
        for(int j=0;j<=b;j++){
            printf("Enter X^%dY^%d:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    printf("Enter Details For Poly2:\n");
    for(int i=0;i<=a;i++){
        for(int j=0;j<=b;j++){
            printf("Enter X^%dY^%d:",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }
    for(int i=0;i<=a;i++){
        for(int j=0;j<=b;j++){
            arr3[i][j]=arr[i][j]+arr2[i][j];
        }
    }
    printf("\n");
    printf("Polynomial 1 is:");
    for(int i=0;i<=a;i++){
        for(int j=0;j<=b;j++){
            printf("%dX^%dY^%d+",arr[i][j],i,j);
        }
    }
    printf("0");
    printf("\n");
    printf("Polynomial 2 is:");
    for(int i=0;i<=a;i++){
        for(int j=0;j<=b;j++){
            printf("%dX^%dY^%d+",arr2[i][j],i,j);
        }
    }
    printf("0");
    printf("\n");
    printf("Resultant Polynomial:");
    for(int i=0;i<=a;i++){
        for(int j=0;j<=b;j++){
            printf("%dX^%dY^%d+",arr3[i][j],i,j);
        }
    }
    printf("0");
    printf("\n");
    return 0;
}





