#include <stdio.h>
void matread(int m, int n, int mat[][n])
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);
}
void matprint(int m, int n, int mat[][n])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
}
void matcheck(int n, int arr[][n])
{
    int row, col, up;
    up = 1;
    for (row = 0; row < n; row++)
    {
        for (col = 0; col < n; col++)
        {
            if (col < row && arr[row][col] != 0)
            {
                up = 0;
            }
        }
    }
    if (up == 1)
    {
        printf("\nThe entered matrix is a Upper triangular matrix.\n");
        printf("The matrix is printed below \n");
        matprint(n, n, arr);
    }
    else
    {
        printf("\nThis is Not a Upper triangular matrix.");
    }
}

int main()
{
    int m, n;
    printf("Enter the number of rows and columns \n");
    scanf("%d %d", &m, &n);
    int arr[m][n];
    printf("Enter elements of matrix\n");
    matread(m, n, arr);
    matcheck(m, arr);

    return 0;
}
