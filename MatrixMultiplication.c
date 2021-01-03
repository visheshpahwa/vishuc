#include<stdio.h>

    int main()
{
    int a[3][3], b[3][3], c[3][3], i, j, m, n, p, q, k;

    printf("enter number of rows and columns for matrix a");
    scanf("%d%d", &m, &n); //m=2 n=2
    printf("enter number of rows and columns for matrix b");
    scanf("%d%d", &p, &q); //p=2 q=2
    if (n == p)
        printf("multiplication of matrix is possible");
    else
        printf("multiplication of matrix is not possible");
    printf("enter elements for matrix a");
    for (i = 0; i < m; i++) //outer loop
    {
        for (j = 0; j < n; j++) //inner loop
            scanf("%d", &a[i][j]);
    }
    printf("enter elements for matrix b");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
            scanf("%d", &b[i][j]);
    }
    printf("\n product of matrix a & b");
    for (i = 0; i < m; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
            printf("%d\t", a[i][j]);
    }
    printf("*");
    for (i = 0; i < p; i++)
    {
        printf("\n");
        for (j = 0; j < q; j++)
            printf("%d\t", b[i][j]);
    }
    printf("=");
    for (i = 0; i < m; i++)
    {
        printf("\n");
        for (j = 0; j < q; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < n; k++)
                c[i][j] = c[i][j] + a[j][k] * b[k][j];
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}