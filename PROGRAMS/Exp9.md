## Code:
### Problem 1:
### `BubbleSort and Swapping smallest and largest elements of array`
```c
#include <stdio.h>

void sort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (*(arr + i) > *(arr + j))
            {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int n1, arr[100], h;
    printf("Enter the number of elements:\n");
    scanf("%d", &n1);
    printf("Enter the elements of the array:\n");
    for (h = 0; h < n1; h++)
    {
        scanf("%d", (arr + h));
    }
    sort(arr, n1);
    swap(&arr[0], &arr[n1 - 1]);
    printf("After swapping the smallest and largest elements:\n");
    for (int s = 0; s < n1; s++)
    {
        printf("%d,", *(arr + s));
    }

    return 0;
}
```
### Problem 2:
### `Reversing an array`
```c
#include <stdio.h>

void ar_reverse(int arr[], int start, int end)
{
    if (start < end)
    {
        int temp;
        temp = *(arr + start);
        *(arr + start) = *(arr + end);
        *(arr + end) = temp;
        ar_reverse(arr, start + 1, end - 1);
    }
}

int main()
{
    int ar[100], k, st = 0, ed;
    printf("Enter the number of elements:\n");
    scanf("%d", &k);
    ed = k - 1;
    printf("Enter the elements of the array:\n");
    for (int r = 0; r < k; r++)
    {
        scanf("%d", (ar + r));
    }
    ar_reverse(ar, st, ed);
    printf("Reversed array:\n");
    for (int g = 0; g < k; g++)
    {
        printf("%d,", *(ar + g));
    }

    return 0;
}
```
### Problem 3:
### `Mulitplication of matrices`
```c
#include <stdio.h>

void multiply(int m, int n, int arr1[m][n], int a, int b, int arr2[a][b], int arr3[m][b])
{
    if (n == a)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < b; j++)
            {
                int sum = 0;
                for (int k = 0; k < n; k++)
                {
                    sum += (*(*(arr1 + i) + k)) * (*(*(arr2 + k) + j));
                }
                *(*(arr3 + i) + j) = sum;
            }
        }
    }
}

int main()
{
    int m, n, a, b;
    printf("Enter dimensions of the first matrix:\n");
    scanf("%d %d", &m, &n);
    printf("Enter elements of the first matrix:\n");
    int arr1[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", (*(arr1 + i) + j));
        }
    }
    printf("Enter dimensions of the second matrix:\n");
    scanf("%d %d", &a, &b);
    printf("Enter elements of the second matrix:\n");
    int arr2[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", (*(arr2 + i) + j));
        }
    }
    int arr3[m][b];
    multiply(m, n, arr1, a, b, arr2, arr3);
    printf("The matrix after multiplication is:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ", *(*(arr3 + i) + j));
        }
        printf("\n");
    }

    return 0;
}
```
