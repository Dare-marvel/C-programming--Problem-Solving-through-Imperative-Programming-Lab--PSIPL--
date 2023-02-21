#include <stdio.h>
void selectionsort(int n, int mat[n][2])
{
    int min, ind;
    for (int i = 0; i < n - 1; i++)
    {
        ind = i;
        for (int j = i + 1; j < n; j++)
        {
            if (mat[j][0] < mat[ind][0])
            {
                ind = j;
            }
        }
        int temp1 = mat[ind][0];
        mat[ind][0] = mat[i][0];
        mat[i][0] = temp1;
        int temp2 = mat[ind][1];
        mat[ind][1] = mat[i][1];
        mat[i][1] = temp2;
    }
}
int main()
{
    int year, n;
    printf("Enter current year: ");
    scanf("%d", &year);
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    int mat[n][2];
    for (int i = 0; i < n; i++)
    {
        printf("Enter Employee Number and current age: ");
        scanf("%d %d", &mat[i][1], &mat[i][0]);
        mat[i][0] = year + 65 - mat[i][0];
    }
    selectionsort(n, mat);
    printf("Retiring Year\tEmployee Number\n");
    for (int i = 0; i < n; i++)
    {
        if (i != 0 && mat[i][0] == mat[i - 1][0])
            printf("\t\t%d\n", mat[i][1]);
        else
            printf("%d\t\t%d\n", mat[i][0], mat[i][1]);
    }
    return 0;
}
