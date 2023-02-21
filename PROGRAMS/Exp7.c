#include <stdio.h>
#include<string.h>
#include<math.h>


void findvowelconsonants(char str[])
{
    int vow_count = 0;
    int count = 0;
    int consonants = 0;
    while (str[count] != '\0')
    {

        if (str[count] == 'a' || str[count] == 'e' || str[count] == 'i' || str[count] == 'o' || str[count] == 'u' || str[count] == 'A' || str[count] == 'E' || str[count] == 'I' || str[count] == 'O' || str[count] == 'U')
        {
            vow_count++;
        }
        else
        {
            consonants++;
        }
        count++;
    }
    printf("\nThe string has %d vowels\n", vow_count);
    printf("\nThe string has %d consonants\n ", consonants);
}

int string_length(char str[])
{

    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return len;
}

int word_num(char str[])
{
    int count = 0, i;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ')
            count++;
    }
    return count + 1;
}

void cop(char str1[], char str2[])
{
    int i;
    for (i = 0; str1[i] != '\0'; ++i)
    {
        str2[i] = str1[i];
    }
    str2[i] = '\0';
}
int len(char str1[])
{
    int length = 0;
    for (int i = 0; str1[i] != '\0'; ++i)
    {
        ++length;
    }
    return length;
}
int com(char str1[], char str2[])
{
    int dif = 0;
    for (int i = 0; str1[i] != '\0' || str2[i] != '\0'; ++i)
    {
        dif = str1[i] - str2[i];
    }
    return dif;
}
char rev(char str1[])
{
    int l = len(str1), i, j;
    char tempstr[l];
    j = l - 1;
    for (i = 0; i < l; i++)
    {
        tempstr[i] = str1[j];
        j--;
    }
    tempstr[i] = '\0';
    cop(tempstr, str1);
}
void cat(char str1[], char str2[])
{
    int l = len(str1), i, j;
    for (i = 0, j = l; str2[i] != '\0'; ++i, ++j)
    {
        str1[j] = str2[i];
    }
    str1[j] = '\0';
}
void up(char str[], char strn[])
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
            strn[i] = str[i] - 32;
        else
            strn[i] = str[i];
    }
    strn[i] = '\0';
}

int comp(char str1[256], char str2[256])
{
    int ctr = 0;
    for (int i = 0; (str1[i] != '\0' || str2[i] != '\0'); i++)
    {
        if ((str1[i] > str2[i]) || (str1[i] < str2[i]))
        {
            ctr = 1;
            break;
        }
    }
    return ctr;
}
void delrepeated_words(char str[256])
{
    char mat[256][256], words[256];
    int i = 0, j = 0, k = 0, l = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            mat[k][j] = '\0';
            k++;
            j = 0;
        }
        else
        {
            mat[k][j] = str[i];
            j++;
        }
    }
    mat[k][j] = '\0';
    j = 0;
    for (i = 0; i < k; i++)
    {
        int temp = 0;
        for (l = 1; l < k + 1; l++)
        {
            if (mat[l][j] == '\0' || l == i)
            {
                continue;
            }
            if (comp(mat[i], mat[l]) == 0)
            {
                mat[l][j] = '\0';
                temp++;
            }
        }
    }
    j = 0;
    for (i = 0; i < k + 1; i++)
    {
        if (mat[i][j] == '\0')
            continue;
        else
            printf("%s ", mat[i]);
    }
}

int main()
{
    // Problem 1
    char str[100];
    int count = 0, i;
    printf("Enter the string:\n");
    scanf(" %[^\n]s ", str);
    findvowelconsonants(str);
    string_length(str);
    printf("\nLength of string:%d\n", string_length(str));
    word_num(str);
    printf("\nNumber of words in given string are: %d\n", word_num(str));

    // Problem 2
    int ch;
    int trash;
    char str1[1024];
    char str2[1024];
    char strn1[100], strn2[100];
    printf("Enter string 1: ");
    scanf("%[^\n]", str1);
    printf("Enter string 2: ");
    scanf(" %[^\n]", str2);
    do
    {
        printf("1) Copy first string to second\n2) Length of string\n3) Compare two strings\n4) Reverse string\n5) Concatenate second string to first string\n6) Convert string to upper case\nEnter choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter string: ");
            scanf(" %[^\n]s ", str1);
            cop(str1, str2);
            printf("Copied string: %s", str2);
            break;
        case 2:
            printf("Enter string: ");
            scanf(" %[^\n]s ", str1);
            printf("Length: %d", len(str1));
            break;
        case 3:
            printf("Enter string 1: ");
            scanf(" %[^\n]s ", str1);
            printf("Enter string 2: ");
            scanf(" %[^\n]s ", str2);
            printf("%d", com(str1, str2));
            break;
        case 4:
            printf("Enter string: ");
            scanf(" %[^\n]s ", str1);
            rev(str1);
            printf("%s", str1);
            break;
        case 5:
            printf("Enter string 1: ");
            scanf(" %[^\n]s ", str1);
            printf("Enter string 2: ");
            scanf(" %[^\n]s ", str2);
            cat(str1, str2);
            printf("%s", str1);
            break;
        case 6:
        {
            scanf("%[^\n]", str1);
            scanf("%[^\n]", str2);
            up(str1, strn1);
            up(str2, strn2);
            printf("%s\n", strn1);
            printf("%s\n\n", strn2);
            break;
        }
        default:
            printf("Invalid input");
            break;
        }
    } while (ch != 7);

    // Problem 3
    char str3[256];
    printf("Enter a string: ");
    scanf(" %[^\n]", str3);
    delrepeated_words(str3);
    return 0;
}
