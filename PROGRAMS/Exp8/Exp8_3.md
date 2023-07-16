## Explanation

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
