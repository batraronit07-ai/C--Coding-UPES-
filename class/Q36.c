// matrix multiplication








/*
#include <stdio.h>

int main()
{
    int m, n, p, q, i, j;
    
    printf("Enter the rows and coloumn of Matrix A : ");
    scanf("%d %d", &m, &n);
    
    printf("Enter the rows and coloumn of Matrix B : ");
    scanf("%d %d", &p, &q);
    
    if (n == p)
    {
        int maA[m][n], maB[p][q], maC[m][q];

        printf("matrix multiplication is possible \n");
        
        printf("Enter values of matrix A :- ");
        
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                scanf("%d", &maA[i][j]);
            }
        }
        
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%d\t", maA[i][j]);
            }
            printf("\n");
        }
        
        printf("Enter the values of Matrix B :- ");
        
        for (i = 0; i < p; i++)
        {
            for (j = 0; j < q; j++)
            {
                scanf("%d", &maB[i][j]);
            }
        }
        
        for (i = 0; i < p; i++)
        {
            for (j = 0; j < q; j++)
            {
                printf("%d\t", maB[i][j]);
            }
            printf("\n");
        }
        
        printf("Resultant matrix have %d rows and %d coloumns....\n", m, q);
        
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                int value = 0;
                for (int k = 0; k < n; k++)
                {
                    value += maA[i][k] * maB[k][j];
                }
                maC[i][j] = value;
                printf("%d\t", maC[i][j]);
            }
            printf("\n");
        }
    }
    
    else
    {
        printf("Matrix multiplication is not possible.");
    }

    return 0;
}
*/
