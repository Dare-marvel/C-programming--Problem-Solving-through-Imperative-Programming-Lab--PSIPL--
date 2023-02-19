//This is the C Program of Experiment 1 of PSIPL
#include <stdio.h>
#include <math.h>

int main()
{
    // Problem 1:
    float p;
    float t;
    float r;
    printf("enter principal,time period,rate:\n");
    scanf("%f %f %f", &p, &t, &r);
    float si;
    si = p * t * r;
    printf("Simple Interest:%f\n", si);
    int N[5] = {1, 2, 4, 12, 365};
    int ctr = 0;

    while (ctr <= 4)
    {
        float c = pow(1 + (r / N[ctr]), N[ctr] * t);
        float ci = p * c - p;
        printf("Compound interest compounded %d times a year= %f\n", N[ctr], ci);
        ctr++;
    }

    // Problem 2:
    int p1, q;
    printf("Enter two numbers: ");
    scanf("%d", &p1);
    scanf("%d", &q);

    printf("The Result of:\nAddition=%d\nSubtraction=%d\nMultiplication=%d\nDivision=%d\nModulus=%d", p1 + q, p1 - q, p1 * q, p1 / q, p1 % q);

    // Problem 3:
    float fahr, cel;

    printf("Enter Temperature in Fahrenheit:\n");
    scanf("%f", &fahr);

    cel = (5.0 / 9.0) * (fahr - 32);
    printf("Temperature in Celsius: %f\n", cel);

    // Problem 4:
    int days;
    printf("Enter days:\n");
    scanf("%d", &days);
    printf("%d days are equal to %d years,%d months and %d days\n", days, days / 365, (days % 365) / 30, (days % 365) % 30);

    // Problem 5:
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
