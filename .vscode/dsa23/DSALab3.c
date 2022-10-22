#include <stdio.h>

int main()
{
    int r, c, size = 0, k = 1;
    printf("Enter Number Of Rows and Columns Respectively:");
    scanf("%d%d", &r, &c);
    int arr[r][c];
    printf("Enter Array Elements:");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nThe 2D Array Is:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d\t", arr[i][j]);
            if (arr[i][j] != 0)
            {
                size++;
            }
        }
        printf("\n");
    }
    int M[size+1][3];\
    M[0][0]=r;
    M[0][1]=c;
    M[0][2]=size;
    for (int i = 0; i < r; i++)
    {
        for(int j=0;j<c;j++){
            if(arr[i][j] != 0){
                M[k][0] = i;
                M[k][1] = j;
                M[k][2] = arr[i][j];
                k++;
            }
        }
    }
    printf("\nTriplet representation of the matrix is: \n");
    printf("\n---OUTPUT---\n");
    printf("ROW\tCOLUMN\tValue\n");
    for (int i = 0; i < size+1; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", M[i][j]);
        }
        printf("\n");
    }
}