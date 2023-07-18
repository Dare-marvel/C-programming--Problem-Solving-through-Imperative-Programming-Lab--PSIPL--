## Code:
### Problem 1:
### `Factorial`
```c
#include <stdio.h>

long int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int n1;
    printf("Enter a value of n=");
    scanf("%d", &n1);
    printf("n! = %ld ", factorial(n1));

    return 0;
}
```
### Problem 2:
### `Fibonacci Series`
```c
#include <stdio.h>

long int fib(int count)
{
    if (count == 0)
    {
        return 0;
    }
    if (count == 1)
    {
        return 1;
    }
    else
    {
        return fib(count - 1) + fib(count - 2);
    }
}

int main()
{
    int n, count;
    printf("Enter the value of n=");
    scanf("%d", &n);

    for (count = 1; count <= n; ++count)
    {
        printf("i=%2d    fibonacci number=%ld \n", count, fib(count));
    }

    return 0;
}
```
### Problem 3:
### `Series`
```c
#include <stdio.h>

int series(int n)
{
    int num;
    if (n <= 0)
    {
        printf("%d ", n);
        return n;
    }
    else
    {
        printf("%d ", n);
        num = 5 + series(n - 5);
        printf("%d ", num);
        return num;
    }
}

int main()
{
    int n3;
    printf("Enter a number:\n");
    scanf("%d", &n3);
    series(n3);

    return 0;
}
```
### Problem 4:
### `Ackermann Function`
```c
#include <stdio.h>

int ack(int m, int n)
{
    if (m == 0)
    {
        return n + 1;
    }
    else if (m != 0 && n == 0)
    {
        return ack(m - 1, 1);
    }
    else if (m != 0 && n != 0)
    {
        return ack(m - 1, ack(m, n - 1));
    }
}

void table()
{
    int m = 1;
    int n = 1;
    printf("m | n | A(m,n)\n");
    printf("_____\n");
    while (n <= 6)
    {
        while (m <= 3)
        {
            printf("%d | %d | %d\n", m, n, ack(m, n));
            m++;
        }
        m = 1;
        n++;
    }
}

int main()
{
    table();
    return 0;
}
```
### Problem 5:
### `Recaman Series`
```c
#include <stdio.h>

int rec(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else if (rec(n - 1) - n > 0)
    {
        return rec(n - 1) - n;
    }
    else
    {
        return rec(n - 1) + n;
    }
}

int main()
{
    int n2;
    printf("Enter a number: ");
    scanf("%d", &n2);
    printf("Recaman series up to the %dth term is:\n ", n2);
    for (int i = 1; i <= n2; i++)
    {
        printf("%d ", rec(i));
    }

    return 0;
}
```
