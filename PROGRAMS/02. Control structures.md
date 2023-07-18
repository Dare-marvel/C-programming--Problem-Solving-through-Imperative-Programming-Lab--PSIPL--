## Code:
### Problem 1:
### `GCD and LCM Calculation`
```c
#include <stdio.h>

int main()
{
    int n1, n2, gcd, lcm, rem, num, den;

    printf("Enter two numbers:\n");
    scanf("%d %d", &n1, &n2);

    if (n1 > n2)
    {
        num = n1;
        den = n2;
    }
    else
    {
        num = n2;
        den = n1;
    }

    rem = num % den;

    while (rem != 0)
    {
        num = den;
        den = rem;
        rem = num % den;
    }

    gcd = den;
    lcm = n1 * n2 / gcd;

    printf("GCD of %d and %d = %d\n", n1, n2, gcd);
    printf("LCM of %d and %d = %d\n", n1, n2, lcm);

    return 0;
}
```
### Problem 2:
### ` Decimal to Binary and Binary to Decimal Conversion`
```c
#include <stdio.h>
#include <math.h>

int main()
{
    int flag = 0;
    int inp;

    do
    {
        printf("If you want to convert Decimal number to Binary number, type 1. If you want to convert Binary number to Decimal number, then type 2\n");
        scanf("%d", &inp);

        if (inp == 1)
        {
            flag = 1;
            int n, bi = 0, i = 1;

            printf("Enter a number:\n");
            scanf("%d", &n);

            printf("%d in binary is ", n);

            while (n != 0)
            {
                bi = bi + ((n % 2) * i);
                n = n / 2;
                i = i * 10;
            }

            printf("%d\n", bi);
        }
        else if (inp == 2)
        {
            flag = 1;
            int bi, n, temp, sum = 0;

            printf("Enter the Binary Number:\n");
            scanf("%d", &bi);

            n = bi;

            for (int i = 0; n > 0; i++)
            {
                temp = (n - ((n / 10) * 10)) * pow(2, i);
                n = n / 10;
                sum = sum + temp;
            }

            printf("Decimal of %d in Binary is %d\n", bi, sum);
        }
        else
        {
            flag = 0;
            printf("Wrong Choice\n");
        }
    } while (flag == 0);

    return 0;
}
```
### Problem 3:
### `Prime Number Pairs`
```c
#include <stdio.h>

int main()
{
    int n1, n2, i, j;
    int prime1, prime2, prmchk = 1;

    printf("Enter starting number: ");
    scanf("%d", &n1);
    printf("Enter ending number: ");
    scanf("%d", &n2);

    for (i = n1; i <= n2; i++)
    {
        for (j = i - 1; j > 1; j--)
        {
            if (i % j == 0)
            {
                prmchk = 0;
                break;
            }
        }

        if (prmchk == 1)
        {
            prime1 = i;

            if (prime1 - prime2 == 2)
            {
                printf("(%d,%d), ", prime1, prime2);
            }
        }

        prime2 = prime1;
        prmchk = 1;
    }

    return 0;
}
```
### Problem 4:
### `Kaprekar Number Check`
```c
#include <stdio.h>
#include <math.h>

int main()
{
    int n, k1, k2, sq, digits, num, power;

    printf("Enter a number:\n");
    scanf("%d", &n);

    sq = n * n;

    digits = 0;

    while (sq != 0)
    {
        digits++;
        sq = sq / 10;
    }

    if (digits % 2 == 0)
    {
        // Even number of digits
    }
    else
    {
        digits = digits + 1;
    }

    sq = n * n;
    num = digits / 2;
    power = pow(10, num);
    k1 = sq % power;
    k2 = (sq - k1) / power;

    if (k1 + k2 == n)
    {
        printf("It's a Kaprekar number\n");
    }
    else
    {
        printf("It's not a Kaprekar number\n");
    }

    return 0;
}
```
### Problem 5:
### `Armstrong Number Check`
```c
#include <stdio.h>
#include <math.h>

int main()
{
    int num1, dig, power, sum = 0, digCount = 0, n1;

    printf("Enter a number: ");
    scanf("%d", &num1);

    n1 = num1;

    while (n1 != 0)
    {
        n1 = n1 / 10;
        digCount++;
    }

    n1 = num1;

    while (n1 != 0)
    {
        dig = n1 % 10;
        power = pow(dig, digCount);
        sum = sum + power;
        n1 = n1 / 10;
    }

    if (sum == num1)
    {
        printf("%d is an Armstrong number\n", num1);
    }
    else
    {
        printf("%d is not an Armstrong number\n", num1);
    }

    return 0;
}
```
