#include<stdio.h>
int main(){
    int r,c;
    printf("Enter Rows=");
    scanf("%d",&r);
    printf("Enter Columns=");
    scanf("%d",&c);
    int x[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter elements[%d][%d]:",i,j);
            scanf("%d",&x[i][j]);
        }
    } 
    printf("\n---OUTPUT---\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d \t",x[i][j]);
        }
        printf("\n");
    }
}