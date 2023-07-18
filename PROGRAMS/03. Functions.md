## Code:
### Problem 1:
### `Sum of Proper Divisors`
```c
#include <stdio.h>

int divSum(int n)
{
    int sum = 0, i;

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    return sum;
}

int main()
{
    int n;
    printf("Enter a number: \n");
    scanf("%d", &n);
    printf("Sum of proper divisors of %d is %d\n", n, divSum(n));

    return 0;
}
```
### Problem 2:
### `Prime Numbers `
```c
#include <stdio.h>

void prime(int n1, int n2)
{
    int i, j, prmchk = 1;

    for (i = n1; i <= n2; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                prmchk = 0;
                break;
            }
        }

        if (prmchk == 1)
        {
            printf("%d* ", i);
        }
        else
        {
            printf("%d ", i);
        }

        prmchk = 1;
    }
}

int main()
{
    int n1, n2;
    printf("Enter first number: \n");
    scanf("%d", &n1);
    printf("Enter last number: \n");
    scanf("%d\n", &n2);
    prime(n1, n2);

    return 0;
}
```
### Problem 3:
### `Amicable Numbers`
```c
#include <stdio.h>

int amicable(int n1, int n2)
{
    int sum1 = 0, sum2 = 0, i;

    for (i = 1; i < n1; i++)
    {
        if (n1 % i == 0)
        {
            sum1 += i;
        }
    }

    for (i = 1; i < n2; i++)
    {
        if (n2 % i == 0)
        {
            sum2 += i;
        }
    }

    if (sum1 == n2 && sum2 == n1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n1a, n2a, tf;

    printf("Enter first number: \n");
    scanf("%d", &n1a);
    printf("Enter second number: \n");
    scanf("%d\n", &n2a);

    tf = amicable(n1a, n2a);

    if (tf == 1)
    {
        printf("%d and %d are amicable numbers\n", n1a, n2a);
    }
    else
    {
        printf("%d and %d are not amicable numbers\n", n1a, n2a);
    }

    return 0;
}
```
### Problem 4:
### `Relative Primes`
```c
#include <stdio.h>

void relPrime(int n1, int n2)
{
    int i, rel = 1;

    for (i = 2; i < n1 || i < n2; i++)
    {
        if (n1 % i == 0 && n1 % i == n2 % i)
        {
            printf("%d and %d are not relative primes\n", n1, n2);
            rel = 0;
            break;
        }
    }

    if (rel == 1)
    {
        printf("%d and %d are relative primes\n", n1, n2);
    }
}

int main()
{
    int n1b, n2b;

    printf("Enter first number: \n");
    scanf("%d", &n1b);
    printf("Enter second number: \n");
    scanf("%d\n", &n2b);

    relPrime(n1b, n2b);

    return 0;
}
```
