#include <stdio.h>
void Multiply(int arr1[][10],int arr2[][10],int rows1,int rows2 ,int columns2){
    int mul[10][10],sum=0;
    printf("\nMatrix:");
    for(int i=0;i<rows1;i++){
        for(int j=0;j<columns2;j++){
            for(int k=0;k<rows2;j++){
                sum+=arr1[i][k]*arr2[k][j];
            }
            mul[i][j]=sum;
            sum=0;   
        }   
    }
    for(int i=0;i<rows1;i++){
        for(int j=0;j<columns2;j++){
            printf("%d\t",mul[i][j]);   
        } 
        printf("\n");  
    }
}
int main() {
  int rows1, columns1,rows2,columns2, arr1[10][10], arr2[10][10];
  printf("Enter the number of row of 1st Matrix: ");
  scanf("%d", &rows1);
  printf("Enter the number of columns 1st Matrix: ");
  scanf("%d", &columns1);
  printf("Enter the number of row of 2nd Matrix: ");
  scanf("%d", &rows2);
  printf("Enter the number of columns 2nd Matrix: ");
  scanf("%d", &columns2);


  if(columns1==rows2){
    printf("\nEnter elements of 1st matrix:\n");
    for(int i=0;i<rows1;i++){
        for(int j=0;j<columns1;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("\nEnter elements of 2nd matrix:\n");
    for(int i=0;i<rows2;i++){
        for(int j=0;j<columns2;j++){
            scanf("%d",&arr2[i][j]);
        }
    }

    Multiply(arr1,arr2,rows1,rows2,columns2);
  }
  else{
    printf("\nMultiplication Not Possible");
  }
  return 0;
}