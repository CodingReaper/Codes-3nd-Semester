#include<stdio.h>

int main(){
    int row,column;
    printf("Enter Rows And Columns:");
    scanf("%d%d",&row,&column);
    int arr[row][column];
    printf("Elements:");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nGiven Matrix:\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    
    printf("\nLower Triangular Matrix:\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(i>=j){
                printf("%d\t",arr[i][j]);
            }
        }
        printf("\n");
    }

}