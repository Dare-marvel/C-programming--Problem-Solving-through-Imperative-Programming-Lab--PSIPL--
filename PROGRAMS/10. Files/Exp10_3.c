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
