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
