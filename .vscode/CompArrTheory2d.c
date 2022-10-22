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
    int count=0;
    int totalelements=rows*columns;
    for(int i=0;i<rows;i++){  
        for(int j=0;j<columns;j++){ 
            if(arr[i][j] == 0){
                count++;
            }
        }
    }
    int nonzero=totalelements-count;
    printf("\nNonZero Elements:%d",nonzero);

    int ud=0;
    int ld=0;
    for(int i=0;i<rows;i++){  
        for(int j=0;j<columns;j++){ 
            if(i>j){
                ud+=arr[i][j];
            }
        }
    }

    for(int i=0;i<rows;i++){  
        for(int j=0;j<columns;j++){ 
            if(i<j){
                ld+=arr[i][j];
            }
        }
    }

    printf("\nSum Of Upper Diagonal Elements:%d",ld);
    printf("\nSum Of Lower Diagonal Elements:%d",ud);


    printf("\nElements below minor diagonal are:");  //j>=n-i(n=order) and j<n(n=order)..
    for(int i=0;i<rows;i++){  
        for(int j=0;j<columns;j++){ 
            if(j >= (rows-i) && j<rows){
                printf("%d \t",arr[i][j]);
            }
        }
    }
    printf("\nPrinting Minor Diagonal:");
    for(int i=0;i<rows;i++){  
        for(int j=0;j<columns;j++){ 
            if(i+j == rows-1){
                printf("%d \t",arr[i][j]);
            }
        }
    }
    int product=1;
    for(int i=0;i<rows;i++){  
        for(int j=0;j<columns;j++){ 
            if(i==j){
                product*=arr[i][j];
            }
        }
    }

    printf("\nMajor Diagonal:");
    for(int i=0;i<rows;i++){  
        for(int j=0;j<columns;j++){ 
            if(i==j){
                printf("%d \t",arr[i][j]);
            }
        }
    }
    
    printf("\nProduct Of Diagonal Elements:%d",product);
    return 0;
}

