#include <stdio.h>
#include <math.h>
void zero(int m, int n, float mat[m][n])
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            mat[i][j] = 0.0;
}
void print(int m, int n, float mat[m][n])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%.2f\t", mat[i][j]);
        printf("\n");
    }
}
void matrixaddition(int m, int n, float mat1[m][n], int a, int b, float mat2[a][b])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%.2f\t", mat1[i][j] + mat2[i][j]);
        printf("\n");
    }
}
void matrixsubtraction(int m, int n, float mat1[m][n], int a, int b, float mat2[a][b])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%.2f\t", mat1[i][j] - mat2[i][j]);
        printf("\n");
    }
}
void matrixmultiplication(int m, int n, float mat1[m][n], int a, int b, float mat2[a][b])
{
    float mat3[m][b];
    zero(m, b, mat3);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < b; j++)
            for (int k = 0; k < n; k++)
                mat3[i][j] += mat1[i][k] * mat2[k][j];
    print(m, b, mat3);
}
void matrixtranspose(int m, int n, float mat[m][n])
{
    float newmat[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            newmat[i][j] = mat[j][i];
    print(n, m, newmat);
}
double matrixnorm(int m, int n, float mat[m][n])
{
    double sum = 0.0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum += pow(mat[i][j], 2);
        }
    }
    sum = sqrt(sum);
    return sum;
}
int main()
{
    int m, n, a, b;
    printf("Enter dimensions of Matrix 1:\n");
    scanf("%d %d", &m, &n);
    float mat1[m][n];
    printf("Enter elements of Matrix 1:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%f", &mat1[i][j]);
    print(m, n, mat1);
    printf("Enter dimensions of Matrix 2:\n");
    scanf("%d %d", &a, &b);
    float mat2[a][b];
    printf("Enter elements of Matrix 2:\n");
    for (int i = 0; i < a; i++)
        for (int j = 0; j < b; j++)
            scanf("%f", &mat2[i][j]);
    print(a, b, mat2);
    printf("\n Addition of Matrices:\n");
    if (m == a && n == b)
        matrixaddition(m, n, mat1, a, b, mat2);
    else
        printf("Addition of matrices is not possible");
    printf("\n Subtraction of Matrices:\n");
    if (m == a && n == b)
        matrixsubtraction(m, n, mat1, a, b, mat2);
    else
        printf("Subtraction of matrices is not possible");
    printf("\n Multiplication of Matrices:\n");
    if (n == a)
        matrixmultiplication(m, n, mat1, a, b, mat2);
    else
        printf("Multiplication of matrices is not possible");
    printf("\nTranspose of the 2 Matrices:\n");
    matrixtranspose(m, n, mat1);
    printf("\n");
    matrixtranspose(a, b, mat2);
    printf("Norm of Matrix 1 : %.2f\n", matrixnorm(m, n, mat1));
    printf("Norm of Matrix 2 : %.2f", matrixnorm(a, b, mat2));
    return 0;
}
