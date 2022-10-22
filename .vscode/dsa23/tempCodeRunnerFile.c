#include <stdio.h>

int main()
{
    int r, c, r1, c1;
    printf("Enter Number Of Rows and Columns of Array 1 Respectively:");
    scanf("%d%d", &r, &c);
    printf("Enter Number Of Rows and Columns of Array 2 Respectively:");
    scanf("%d%d", &r1, &c1);
    int arr[r][c], arr2[r1][c1],sum[r][c];
    if (r == r1 && c == c1)
    {
        printf("Enter Array 1 Elements:");
        for (int i = 0; i < r; i++){
            for (int j = 0; j < c; j++){
                scanf("%d", &arr[i][j]);
            }
        }
        printf("Enter Array 2 Elements:");
        for (int i = 0; i < r1; i++){
            for (int j = 0; j < c1; j++){
                scanf("%d", &arr2[i][j]);
            }
        }

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                sum[i][j]=arr[i][j]+arr2[i][j];
            }
        }
        printf("\nThe  1st 2D Array Is:\n");
        for (int i = 0; i < r; i++){
            for (int j = 0; j < c; j++){
                printf("%d\t", arr[i][j]);
            }
            printf("\n");
        }
        printf("\nThe  2nd 2D Array Is:\n");
        for (int i = 0; i < r1; i++){
            for (int j = 0; j < c1; j++){
                printf("%d\t", arr2[i][j]);
            }
            printf("\n");
        }
        printf("\nSummation:\n");
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                printf("%d\t",sum[i][j]);
            }
            printf("\n");
        }
        printf("\n3 TUPLE REPRESENTATION OF ALL 2D MATRICES---- \n");
        printf("\n3 Tuple Represetation of Array 1:\n");
        printf("\nROW\tCOLUMN\tVALUE\n");
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(arr[i][j] != 0){
                    printf("%d\t%d\t%d\t",i,j,arr[i][j]);
                }
            }
            printf("\n");
        }
        printf("\n3 Tuple Represetation of Array 2:\n");
        printf("\nROW\tCOLUMN\tVALUE\n");
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                if(arr2[i][j] != 0){
                    printf("%d\t%d\t%d\t",i,j,arr2[i][j]);
                }
            }
            printf("\n");
        }
        printf("\n3 Tuple Represetation of Summation Array :\n");
        printf("\nROW\tCOLUMN\tVALUE\n");
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(sum[i][j] != 0){
                    printf("%d\t%d\t%d\t",i,j,sum[i][j]);
                }
            }
            printf("\n");
        }
    }   
    else{
        printf("ORDER of Matrix Not Same.");
    }
}