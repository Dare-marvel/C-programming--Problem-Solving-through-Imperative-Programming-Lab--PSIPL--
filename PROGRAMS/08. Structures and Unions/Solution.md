### Questions
1.



## Explanation:

## Time and Space Complexity:
### `Time Complexity`:

### `Space Complexity`:

## Code:
```c
#include <stdio.h>
typedef struct family
{
    char name_wife[20];
    int numb_child;
    char name_child[10][20];
} family;
typedef union details
{
    family fam;
    char hobby[30];
} details;
typedef struct member
{
    char name[20];
    int age;
    char addr[100];
    char active, married;
    details det;
} member;
void input(member c[2])
{
    for (int i = 0; i < 2; i++)
    {
        printf("\n\nEnter the name of the member: ");
        scanf(" %s", c[i].name);
        printf("Enter the age of the person: ");
        scanf("%d", &c[i].age);
        printf("Enter the address of the person: ");
        scanf(" %[^\n]", c[i].addr);
        printf("Enter active status (Y/N): ");
        scanf(" %c", &c[i].active);
        printf("Enter Marital Status (Y/N): ");
        scanf(" %c", &c[i].married);
        if (c[i].married == 'Y')
        {
            printf("Enter name of the wife: ");
            scanf(" %s", c[i].det.fam.name_wife);
            printf("Enter the number of children: ");
            scanf("%d", &c[i].det.fam.numb_child);
            for (int i = 0; i < c[i].det.fam.numb_child; i++)
            {
                printf("Enter name of the children: ");
                scanf(" %s", c[i].det.fam.name_child[i]);
            }
        }
        else
        {
            printf("Enter the hobby of the member: ");
            scanf(" %[^\n]", c[i].det.hobby);
        }
    }
}
int main()
{
    member c[2];
    input(c);
    printf("The list of married active players and their wives is as follows:\n");
    printf("Name\tWife");
    for (int i = 0; i < 2; i++)
    {
        if (c[i].active == 'Y' && c[i].married == 'Y')
            printf("\n%s\t%s\n", c[i].name, c[i].det.fam.name_wife);
    }
    return 0;
}
```

<hr>

2.

## Explanation:

## Time and Space Complexity:
### `Time Complexity`:

### `Space Complexity`:

## Code:
```c
#include <stdio.h>
#include <string.h>
typedef struct air
{
    char src[4];
    char des[4];
    int start;
    int arrival;
    int seats;
    int count;
} airline_t;
void reset(airline_t c[5])
{
    for (int i = 0; i < 5; i++)
        c[i].count = 0;
}
void input(airline_t c[5])
{
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter the source: ");
        scanf("%s", c[i].src);
        printf("Enter the destination: ");
        scanf("%s", c[i].des);
        printf("Enter the starting time: ");
        scanf("%d", &c[i].start);
        printf("Enter the arriving time: ");
        scanf("%d", &c[i].arrival);
        printf("Enter the number of seats: ");
        scanf("%d", &c[i].seats);
        c[i].count = 0;
    }
}
int main()
{
    int d = 1, temp = 0, n, flag = 0, seat;
    airline_t c[5];
    input(c);
    char source[4], dest[4];
    do
    {
        printf("\nEnter your source: ");
        scanf("%s", source);
        printf("Enter your destination: ");
        scanf("%s", dest);
        printf("\nStart\tEnd\tSeats\n");
        for (int i = 0; i < 5; i++)
        {
            if (strcmp(c[i].src, source) == 0 && strcmp(c[i].des, dest) == 0 &&
                c[i].seats > 0)
            {
                printf("%d\t%d\t%d\n", c[i].start, c[i].arrival, c[i].seats);
                c[i].count = d;
                d++;
                temp++;
            }
        }
        if (temp == 0)
        {
            printf("\nSorry we dont have any flights available");
        }
        else
        {
            printf("Enter the number of flight you want to take: ");
            scanf("%d", &n);
            printf("Enter the number of seats you want to book: ");
            scanf("%d", &seat);
            for (int i = 0; i < 5; i++)
            {
                if (n == c[i].count)
                {
                    if (c[i].seats - seat >= 0)
                    {
                        c[i].seats -= seat;
                        printf("Your flight has been booked for %s to %s", c[i].src, c[i].des);
                        printf("\nTimings are follows: %d to %d", c[i].start, c[i].arrival);
                        printf("\nNo of seats remaining: %d", c[i].seats);
                    }
                    else
                    {
                        printf("The flight does not have %d seats available", seat);
                        printf("\nPlease select a different flight.");
                    }
                }
            }
        }
        printf("Enter 0 to continue booking or any other number to exit");
        scanf("%d", &flag);
        reset(c);
    } while (flag == 0);
    return 0;
}
```

<hr>

3.


## Explanation:

## Time and Space Complexity:
### `Time Complexity`:

### `Space Complexity`:

## Code:
```c
#include <stdio.h>
#include <string.h>
typedef struct employee
{
    char name[20];
    char gender;
    int salary;
    int day;
    int month;
    int year;
    int age;
} employee;
int main()
{
    employee c[10];
    int i;
    char name[5][20];
    for (i = 0; i < 5; i++)
    {
        printf("Enter the name: ");
        scanf(" %s", c[i].name);
        printf("Enter the gender (M/F): ");
        scanf(" %c", &c[i].gender);
        printf("Enter the salary: ");
        scanf("%d", &c[i].salary);
        printf("Enter the Date of Birth (DD MM YYYY): ");
        scanf("%d %d %d", &c[i].day, &c[i].month, &c[i].year);
        c[i].age = 2022 - c[i].year;
        printf("\n");
    }
    printf("Amendments: ");
    for (int k = 0; k < 5; k++)
    {
        int flag = 0;
        printf("\nEnter the name: ");
        scanf(" %s", name[k]);
        for (int j = 0; j < 10; j++)
        {
            if (strcmp(c[j].name, name[k]) == 0)
            {
                int choice;
 printf("Enter 1 if employee has left and 2 if employee if the
salary is to be modified: ");
 scanf("%d",&choice);
 if(choice == 1)
 c[j].salary = 0;
 else if(choice == 2)
 {
                    printf("Enter the new salary: ");
                    scanf("%d", &c[j].salary);
 }
 flag = 1;
 break;
            }
        }
        if (flag == 0)
        {
            strcpy(c[i].name, name[k]);
            printf("Enter the gender of the employee (M/F): ");
            scanf(" %c", &c[i].gender);
            printf("Enter the salary of the employee: ");
            scanf("%d", &c[i].salary);
            printf("Enter the date of birth (DD MM YYYY) : ");
            scanf("%d %d %d", &c[i].day, &c[i].month, &c[i].year);
            c[i].age = 2022 - c[i].year;
            i++;
        }
    }
    printf("Name\tGender\tSalary\tDate of Birth");
    for (int k = 0; k < i; k++)
    {
        if (c[k].age < 60 && c[k].salary != 0)
 printf("\n%s\t%c\t%d\t%d %d
%d",c[k].name,c[k].gender,c[k].salary,c[k].day,c[k].month,c[k].year);
    }
    return 0;
}
```

<hr>

