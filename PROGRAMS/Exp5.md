## Code:
### Problem 1:
### `Selection Sort`
```c
#include <stdio.h>

void SelectionSort(int arr[], int n)
{
    int min, ind;
    for (int i = 0; i < n; i++)
    {
        min = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
                ind = j;
            }
        }
        arr[ind] = arr[i];
        arr[i] = min;
    }
}

int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the values of elements in the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    SelectionSort(arr, n);
    printf("Sorted array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
```
### Problem 2:
### `Binary Search`
```c
#include <stdio.h>

void bin_srch(int arr[], int size, int num)
{
    int hi = size - 1, lo = 0, i;
    for (i = size / 2; arr[i] != num; i = (hi + lo) / 2)
    {
        if (arr[i] < num)
        {
            lo = i + 1;
        }
        else if (arr[i] > num)
        {
            hi = i - 1;
        }
        if (i == 0 || i == size - 1)
        {
            break;
        }
    }
    if (arr[i] == num)
    {
        printf("arr[%d] = %d", i, arr[i]);
    }
    else
    {
        printf("Element doesn't exist in the array");
    }
}

int main()
{
    int numb, n1;
    printf("Enter the total number of elements in the array: ");
    scanf("%d", &n1);
    int arr[n1];
    printf("Enter the elements of the array in ascending order:\n");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be searched: \n");
    scanf("%d", &numb);
    bin_srch(arr, n1, numb);

    return 0;
}
```
### Problem 3:
### `Circular Rotation`
```c
#include <stdio.h>

void circ(int arr[], int n, int m)
{
    int temp, i, j;
    for (i = 1; i <= m; i++)
    {
        temp = arr[0];
        for (int j = 0; j < n - 1; j++)
        {
            arr[j] = arr[j + 1];
        }
        arr[n - 1] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int m, n2;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n2);
    int arr[n2];
    printf("Enter the elements of the array: ");

    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number of rotations: ");
    scanf("%d", &m);
    circ(arr, n2, m);

    return 0;
}
```
