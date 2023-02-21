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
