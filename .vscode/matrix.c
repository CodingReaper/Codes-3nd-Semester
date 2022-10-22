#include<stdio.h>
#include<string.h>


int main(){
    int rows,columns;
    printf("Enter Number of rows:");
    scanf("%d",&rows);
    printf("\nEnter Number of Columns:");
    scanf("%d",&columns);
    int arr[rows][columns];
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            printf("EnterElement[%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n---OUTPUT---\n");
    for(int i=0;i<rows;i++){  //printing rows..
        for(int j=0;j<columns;j++){ //printing columns..
            printf("%d \t",arr[i][j]);
        }
        printf("\n");
    }

    printf("\n---Traspose---\n");
    for(int i=0;i<rows;i++){  //printing rows..
        for(int j=0;j<columns;j++){ //printing columns..
            printf("%d \t",arr[j][i]);
        }
        printf("\n");
    }
}