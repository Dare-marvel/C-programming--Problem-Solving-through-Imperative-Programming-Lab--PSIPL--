### Questions
1.



## Explanation:

## Time and Space Complexity:
### `Time Complexity`:

### `Space Complexity`:

## Code:
```c
#include <stdio.h>
#include <string.h>
typedef struct book
{
    char type;
    char name[50];
    char author[20];
} book_t;
int print(char filename[])
{
    FILE *fp, *fp1, *fp2;
    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("File Not Found");
        return 0;
    }
    book_t b;
    fp1 = fopen("Paperbacks.txt", "w");
    fp2 = fopen("Hardbacks.txt", "w");
    while (fscanf(fp, " %c, %[^,],%[^\n]\n", &b.type, b.name, b.author) != EOF)
    {
        if (b.type == 'b')
        {
            fprintf(fp1, "%s, %s\n", b.name, b.author);
            fprintf(fp2, "%s, %s\n", b.name, b.author);
        }
        else if (b.type == 'p')
            fprintf(fp1, "%s, %s\n", b.name, b.author);
        else if (b.type == 'h')
            fprintf(fp2, "%s, %s\n", b.name, b.author);
    }
    fclose(fp1);
    fclose(fp2);
    fclose(fp);
    return 0;
}
int main()
{
    int i;
    char filename[20];
    printf("Enter the name of the file where the records are kept: ");
    scanf("%s", filename);
    strcat(filename, ".txt");
    i = print(filename);
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
typedef struct vehicle
{
    char reg[7];
    char name[30];
    char addr[30];
} vehicle_t;
int print(char filename[])
{
    FILE *fp;
    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("FILE NOT FOUND!\n");
        return 0;
    }
    fclose(fp);
    vehicle_t v;
    int n, flag = 1;
    char rg[7];
    printf("Enter the number of records you want to search: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        fp = fopen(filename, "r");
        printf("\nEnter the registration number: ");
        scanf(" %s", rg);

        while (fscanf(fp, "%[^,],%[^,],%[^\n]\n", v.reg, v.name, v.addr) != EOF)
            if (strcmp(v.reg, rg) == 0)
            {
                printf("%s %s %s\n", v.reg, v.name, v.addr);
                flag = 0;
                break;
            }
        if (flag)
            printf("Not Found\n");
        flag = 1;
        fclose(fp);
    }
    return 0;
}
int main()
{
    int i;
    char filename[20];
    printf("Enter the name of the file: ");
    scanf(" %s", filename);
    strcat(filename, ".txt");
    i = print(filename);
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
void check(char filename1[], char filename2[])
{
    int day1, day2, count = 0;
    char events[20];
    FILE *fp1, *fp2;
    fp1 = fopen(filename1, "r");
    fp2 = fopen(filename2, "r");
    while (fscanf(fp2, "%d\n", &day1) != EOF)
    {
        while (fscanf(fp1, "%d, %[^\n]\n", &day2, events) != EOF)
        {
            if (day2 == day1)
                count++;
            else
            {
                printf("%d %d\n", day1, count);
                count = 1;
                break;
            }
        }
    }
    printf("%d %d\n", day1, count);
}
int main()
{
    char filename1[20], filename2[20];
    printf("Enter the filename containing the events: ");
    scanf("%s", filename1);
    strcat(filename1, ".txt");
    printf("Enter the filename containing the dates: ");
    scanf("%s", filename2);
    strcat(filename2, ".txt");
    check(filename1, filename2);
    return 0;
}
```

<hr>





