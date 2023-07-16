## Explanation

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
