#include <stdio.h>

int main()
{
    int r1, r2, c1, c2, k1, k2, p, q, x, l1, l2, k, i, j;
    printf("Enter Rows And Columns For Matrix1 Respectively:");
    scanf("%d%d", &r1, &c1);
    printf("Enter Rows And Columns For Matrix2 Respectively:");
    scanf("%d%d", &r2, &c2);
    if (r1 == r2 && c1 == c2)
    {
        printf("Enter No. Non Zero Elements For Matrix1:");
        scanf("%d", &k1);
        printf("Enter No. Non Zero Elements For Matrix2:");
        scanf("%d", &k2);
        int sparse1[k1 + 1][3], sparse2[k2 + 1][3];
        sparse1[0][0] = r1;
        sparse1[0][1] = c1;
        sparse1[0][2] = k1;
        sparse2[0][0] = r2;
        sparse2[0][1] = c2;
        sparse2[0][2] = k2;
        printf("Enter Details For Matrix 1:\n");
        for (int v = 1; v <= k1; v++)
        {
            printf("Enter Row,Column,Non Zero Value Serially:");
            scanf("%d%d%d", &p, &q, &x);
            sparse1[v][0] = p;
            sparse1[v][1] = q;
            sparse1[v][2] = x;
        }
        printf("3 Tuplet Representation For Matrix 1: \n");
        printf("ROW\tCOLUMN\tVALUE\t\n");
        for (int br = 0; br < k1 + 1; br++)
        {
            printf("%d\t%d\t%d\n", sparse1[br][0], sparse1[br][1], sparse1[br][2]);
        }
        printf("Enter Details For Matrix 2:\n");
        for (int t = 1; t <= k2; t++)
        {
            printf("Enter Row,Column,Non Zero Value Serially:");
            scanf("%d%d%d", &p, &q, &x);
            sparse2[t][0] = p;
            sparse2[t][1] = q;
            sparse2[t][2] = x;
        }
        printf("3 Tuplet Representation For Matrix 2: \n");
        printf("ROW\tCOLUMN\tVALUE\t\n");
        for (int h = 0; h < k2 + 1; h++)
        {
            printf("%d\t%d\t%d\n", sparse2[h][0], sparse2[h][1], sparse2[h][2]);
        }
        int resultsparse[100][3];
        resultsparse[0][0] = r1;
        resultsparse[0][1] = c1;
        l1 = sparse1[0][2];
        l2 = sparse2[0][2];
        i=1;j=1;k=1;
        while(i <= l1 && j <= l2){
            if(sparse1[i][0] == sparse2[j][0]){
                if(sparse1[i][1] == sparse2[j][1]){
                    resultsparse[k][0] = sparse1[i][0];
                    resultsparse[k][1] = sparse1[i][1];
                    resultsparse[k][2] = sparse1[i][2] + sparse2[j][2];
                    i++;
                    j++;
                    k++;
                }
                else{
                    if(sparse1[i][1] < sparse2[j][1]){
                        resultsparse[k][0] = sparse1[i][0];
                        resultsparse[k][1] = sparse1[i][1];
                        resultsparse[k][2] = sparse1[i][2];
                        i++;
                        k++;
                    }
                    else{
                        if(sparse1[i][1] > sparse2[j][1]){
                            resultsparse[k][0] = sparse2[j][0];
                            resultsparse[k][1] = sparse2[j][1];
                            resultsparse[k][2] = sparse2[j][2];
                            j++;
                            k++;
                        }
                    }
                }
            }
            else{
                if(sparse1[i][0] > sparse2[j][0]){
                    resultsparse[k][0] = sparse2[j][0];
                    resultsparse[k][1] = sparse2[j][1];
                    resultsparse[k][2] = sparse2[j][2];
                    j++;k++;
                }
                else{
                    if(sparse1[i][0] < sparse2[j][0]){
                        resultsparse[k][0] = sparse1[i][0];
                        resultsparse[k][1] = sparse1[i][1];
                        resultsparse[k][2] = sparse1[i][2];
                        i++;k++;
                    }
                }
            }
        }
        while((j<=l2) && (i>=l1)){
            resultsparse[k][0] = sparse2[j][0];
            resultsparse[k][2] = sparse2[j][2];
            resultsparse[k][1] = sparse2[j][1];
            j++;k++;
        }
        while((i<=l1) && (j>=l2)){
            resultsparse[k][0] = sparse1[i][0];
            resultsparse[k][1] = sparse1[i][1];
            resultsparse[k][2] = sparse1[i][2];
            i++;k++;
        }
        resultsparse[0][2]=k-1;
        printf("Resultant Added Matrix:\n");
        printf("ROW\tCOLUMN\tVALUE\t\n");
        for (int i = 0; i < resultsparse[0][2] + 1; i++)
        {
            printf("%d\t%d\t%d\n", resultsparse[i][0], resultsparse[i][1], resultsparse[i][2]);
        }
    }
    else
    {
        printf("Order Not same.\n");
    }
}



// while (i <= m && j <= n)
//         {
//             k++;
//             switch (compare(sparse1[i][0], sparse2[j][0]))
//             {
//             case '=':
//                 switch (compare(sparse1[i][1], sparse2[j][2]))
//                 {
//                 case '=':
//                     resultsparse[k][0] = sparse1[i][0];
//                     resultsparse[k][1] = sparse1[i][1];
//                     resultsparse[k][2] = sparse1[i][2] + sparse2[j][2];
//                     i++;
//                     j++;
//                     break;
//                 case '<':
//                     resultsparse[k][0] = sparse1[i][0];
//                     resultsparse[k][1] = sparse1[i][1];
//                     resultsparse[k][2] = sparse1[i][2];
//                     i++;
//                     break;
//                 case '>':
//                     resultsparse[k][0] = sparse2[j][0];
//                     resultsparse[k][1] = sparse2[j][1];
//                     resultsparse[k][2] = sparse2[j][2];
//                     j++;
//                     break;
//                 }
//             case '<':
//                 resultsparse[k][0] = sparse1[i][0];
//                 resultsparse[k][1] = sparse1[i][1];
//                 resultsparse[k][2] = sparse1[i][2];
//                 i++;
//                 break;
//             case '>':
//                 resultsparse[k][0] = sparse2[j][0];
//                 resultsparse[k][1] = sparse2[j][1];
//                 resultsparse[k][2] = sparse2[j][2];
//                 j++;
//                 break;
//             }
//         }
//         while (i <= m)
//         {
//             k++;
//             resultsparse[k][0] = sparse1[i][0];
//             resultsparse[k][1] = sparse1[i][1];
//             resultsparse[k][2] = sparse1[i][2];
//             i++;
//         }
//         while (j <= n)
//         {
//             k++;
//             resultsparse[k][0] = sparse2[j][0];
//             resultsparse[k][1] = sparse2[j][1];
//             resultsparse[k][2] = sparse2[j][2];
//             j++;
//         }
//         resultsparse[0][2] = k;
//         printf("Resultant Added Matrix:\n");
//         printf("ROW\tCOLUMN\tVALUE\t\n");
//         for (int i = 0; i < k+1; i++)
//         {
//             printf("%d\t%d\t%d\n", resultsparse[i][0], resultsparse[i][1], resultsparse[i][2]);
//         }
//     }