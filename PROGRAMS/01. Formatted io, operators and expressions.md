## Code:
### Problem 1:
a) Write a C program intrst.c that calculates the total interest income on amount Rupees 5 lakhs in a
period of 10 years. Show the results for simple interest, compounded interest when the compounding is
done annually,semi-annually, quarterly, monthly and daily. Assume that the interest rate is 3.5% per year.
Expected output:<br>
Simple interest on Rs. 500000.00 in 10 years = Rs. 175000.00<br>
Interest on Rs. 500000.00 in 10 years compounded annually = Rs. 205299.38<br>
Interest on Rs. 500000.00 in 10 years compounded semi-annually = Rs. 207389.10<br>
Interest on Rs. 500000.00 in 10 years compounded quarterly = Rs. 208454.42<br>
Interest on Rs. 500000.00 in 10 years compounded monthly = Rs. 209172.41<br>
Interest on Rs. 500000.00 in 10 years compounded daily = Rs. 209521.87<br>

### `Simple Interest Calculation`
```c
#include <stdio.h>

int main()
{
    float p;
    float t;
    float r;
    
    printf("Enter principal, time period, rate:\n");
    scanf("%f %f %f", &p, &t, &r);
    
    float si;
    si = p * t * r;
    
    printf("Simple Interest: %f\n", si);

    return 0;
}
```
### `Compound Interest Calculation`
```c
#include <stdio.h>
#include <math.h>

int main()
{
    float p;
    float t;
    float r;
    int N[5] = {1, 2, 4, 12, 365};
    int ctr = 0;

    printf("Enter principal, time period, rate:\n");
    scanf("%f %f %f", &p, &t, &r);
    
    while (ctr <= 4)
    {
        float c = pow(1 + (r / N[ctr]), N[ctr] * t);
        float ci = p * c - p;
        printf("Compound interest compounded %d times a year = %f\n", N[ctr], ci);
        ctr++;
    }

    return 0;
}
```
### Problem 2:
Write a C program to input 2 numbers. Perform addition, subtraction, multiplication, division and
modulus and display output.
### `Number Operations`
```c
#include <stdio.h>

int main()
{
    int p1, q;
    
    printf("Enter two numbers: ");
    scanf("%d", &p1);
    scanf("%d", &q);

    printf("The Result of:\nAddition = %d\nSubtraction = %d\nMultiplication = %d\nDivision = %d\nModulus = %d", p1 + q, p1 - q, p1 * q, p1 / q, p1 % q);

    return 0;
}
```
### Problem 3:
Write a C program temp.c that accepts a temperature in Fahrenheit and prints the corresponding
temperature in Celsius.
Test data and expected output:<br>
Enter temp in Farenheit:98.4<br>
Temp 98.40 in Farenheit = 36.89 Centigrade<br>
### `Temperature Conversion `
```c
#include <stdio.h>

int main()
{
    float fahr, cel;

    printf("Enter Temperature in Fahrenheit:\n");
    scanf("%f", &fahr);

    cel = (5.0 / 9.0) * (fahr - 32);
    printf("Temperature in Celsius: %f\n", cel);

    return 0;
}
```
### Problem 4:
Write a C program to convert days into year, month and days
### `Days to Years, Months, and Days Conversion `
```c
#include <stdio.h>

int main()
{
    int days;
    
    printf("Enter days:\n");
    scanf("%d", &days);
    
    printf("%d days are equal to %d years, %d months and %d days\n", days, days / 365, (days % 365) / 30, (days % 365) % 30);

    return 0;
}
```
### Problem 5:
Determine how much money is in the piggy bank that contains several 50, 25, 20, 10 and 5 paise
coins. Use the following value to test the program : five 50 paise coins, three 25 paise coins, two 20 paise
coins, one 10 paise coin and fifteen 5 paise coins.
### ` Total Amount Calculation`
```c
#include <stdio.h>

int main()
{
    int p50, p25, p20, p10, p5, paise;

    printf("Enter number of 50 paise coins: \n");
    scanf("%d", &p50);
    printf("Enter number of 25 paise coins: \n");
    scanf("%d", &p25);
    printf("Enter number of 20 paise coins: \n");
    scanf("%d", &p20);
    printf("Enter number of 10 paise coins: \n");
    scanf("%d", &p10);
    printf("Enter number of 5 paise coins: \n");
    scanf("%d", &p5);
    paise = (p50 * 50) + (p25 * 25) + (p20 * 20) + (p10 * 10) + (p5 * 5);
    printf("The total Amount is %d paise\n", paise);

    return 0;
}
```
