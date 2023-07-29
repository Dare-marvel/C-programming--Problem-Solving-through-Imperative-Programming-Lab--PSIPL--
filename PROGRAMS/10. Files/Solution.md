### Questions
1.



## Explanation:
This C program reads information about books from an input file and writes the books to separate output files based on their type. Here is the main logic of the code in detail:

1. The `book_t` structure is defined to represent a book, with fields for the type, name, and author of the book.
2. The `print` function takes the name of the input file as an argument.
3. The `print` function opens the input file for reading and checks if it was opened successfully.
4. If the input file was opened successfully, the `print` function creates a `book_t` variable to store the data read from the file.
5. The `print` function opens two output files, one for paperbacks and one for hardbacks.
6. The `print` function reads each book from the input file using `fscanf`.
7. For each book read from the input file, the `print` function checks its type and writes it to the appropriate output file(s) using `fprintf`.
8. If the book is of type 'b', it is written to both output files.
9. If the book is of type 'p', it is written to the paperbacks file.
10. If the book is of type 'h', it is written to the hardbacks file.
11. After all books have been read from the input file and written to the output files, the `print` function closes all open files.
12. The `main` function prompts the user for the name of the input file using `printf` and `scanf`.
13. The `main` function appends ".txt" to the filename using `strcat`.
14. The `main` function calls the `print` function with the filename as an argument.

## Time and Space Complexity:
### `Time Complexity`:
The time complexity of this code is O(n), where n is the number of books in the input file, because each book is read from the input file and written to one or both output files once.

### `Space Complexity`:
The space complexity of this code is O(1), because it uses a constant amount of memory (i.e., memory usage does not depend on the size of the input). However, this analysis assumes that all strings (i.e., book names and authors) have a fixed maximum length, as specified by the size of their respective character arrays in the `book_t` structure.

## Code:
```c
#include <stdio.h>
#include <string.h>

// Define a structure to represent a book
typedef struct book
{
    char type; // Type of book: 'p' for paperback, 'h' for hardback, 'b' for both
    char name[50]; // Name of the book
    char author[20]; // Author of the book
} book_t;

// Function to read books from a file and write them to separate files based on their type
int print(char filename[])
{
    FILE *fp, *fp1, *fp2;
    fp = fopen(filename, "r"); // Open the input file for reading
    if (fp == NULL) // Check if the file was opened successfully
    {
        printf("File Not Found");
        return 0;
    }
    book_t b; // Create a book variable to store the data read from the file
    fp1 = fopen("Paperbacks.txt", "w"); // Open the output file for paperbacks
    fp2 = fopen("Hardbacks.txt", "w"); // Open the output file for hardbacks

    // Read books from the input file and write them to the appropriate output files
    while (fscanf(fp, " %c, %[^,],%[^\n]\n", &b.type, b.name, b.author) != EOF)
    {
        if (b.type == 'b') // If the book is of type 'b', write it to both output files
        {
            fprintf(fp1, "%s, %s\n", b.name, b.author);
            fprintf(fp2, "%s, %s\n", b.name, b.author);
        }
        else if (b.type == 'p') // If the book is of type 'p', write it to the paperbacks file
            fprintf(fp1, "%s, %s\n", b.name, b.author);
        else if (b.type == 'h') // If the book is of type 'h', write it to the hardbacks file
            fprintf(fp2, "%s, %s\n", b.name, b.author);
    }

    // Close all open files
    fclose(fp1);
    fclose(fp2);
    fclose(fp);

    return 0;
}

int main()
{
    int i;
    char filename[20];
    
    // Prompt the user for the name of the input file
    printf("Enter the name of the file where the records are kept: ");
    scanf("%s", filename);
    
    strcat(filename, ".txt"); // Append ".txt" to the filename
    
    i = print(filename); // Call the print function with the filename as argument
    
    return 0;
}
```

<hr>

2.

## Explanation:
This C program reads information about vehicles from an input file and allows the user to search for vehicles by their registration number. Here is the main logic of the code in detail:

1. The `vehicle_t` structure is defined to represent a vehicle, with fields for the registration number, name, and address of the vehicle.
2. The `print` function takes the name of the input file as an argument.
3. The `print` function opens the input file for reading and checks if it was opened successfully.
4. If the input file was opened successfully, the `print` function closes it immediately after checking its existence.
5. The `print` function prompts the user to enter the number of records they want to search for using `printf` and `scanf`.
6. The `print` function enters a loop to search for 'n' records, where 'n' is the number entered by the user.
7. For each iteration of the loop, the `print` function re-opens the input file for reading.
8. The `print` function prompts the user to enter a registration number to search for using `printf` and `scanf`.
9. The `print` function reads each vehicle from the input file using `fscanf`.
10. For each vehicle read from the input file, the `print` function compares its registration number with the registration number entered by the user using `strcmp`.
11. If a match is found, the `print` function prints the vehicle's details using `printf`, sets a flag to indicate that a match was found, and exits the inner loop.
12. If no match is found after all vehicles have been read from the input file, the `print` function prints "Not Found" using `printf`.
13. After searching for the current record, the `print` function resets the flag and closes the input file.
14. After all 'n' records have been searched for, the `print` function returns.
15. The `main` function prompts the user to enter the name of the input file using `printf` and `scanf`.
16. The `main` function appends ".txt" to the filename using `strcat`.
17. The `main` function calls the `print` function with the filename as an argument.

## Time and Space Complexity:
### `Time Complexity`:
The time complexity of this code is O(nm), where n is the number of records that are searched for and m is the number of vehicles in the input file, because each record search requires reading all vehicles from the input file once.

### `Space Complexity`:
The space complexity of this code is O(1), because it uses a constant amount of memory (i.e., memory usage does not depend on the size of the input). However, this analysis assumes that all strings (i.e., registration numbers, names, and addresses) have a fixed maximum length, as specified by their respective character arrays in their respective structures.

## Code:
```c
#include <stdio.h>
#include <string.h>

// Define a structure for a vehicle with registration number, name, and address.
typedef struct vehicle
{
    char reg[7];
    char name[30];
    char addr[30];
} vehicle_t;

// Function to search and print records from a file.
int print(char filename[])
{
    FILE *fp;
    fp = fopen(filename, "r"); // Open the file in read mode.
    if (fp == NULL) // Check if the file couldn't be opened.
    {
        printf("FILE NOT FOUND!\n");
        return 0;
    }
    fclose(fp); // Close the file immediately after checking its existence.

    vehicle_t v;
    int n, flag = 1;
    char rg[7];

    // Get the number of records the user wants to search.
    printf("Enter the number of records you want to search: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) // Loop to search for 'n' records.
    {
        fp = fopen(filename, "r"); // Re-open the file for each record search.

        // Ask the user for the registration number to search.
        printf("\nEnter the registration number: ");
        scanf(" %s", rg);

        // Read records from the file and search for the given registration number.
        while (fscanf(fp, "%[^,],%[^,],%[^\n]\n", v.reg, v.name, v.addr) != EOF)
        {
            if (strcmp(v.reg, rg) == 0) // If the registration number matches.
            {
                printf("%s %s %s\n", v.reg, v.name, v.addr); // Print the vehicle's details.
                flag = 0; // Set the flag to indicate that a match was found.
                break; // Exit the loop since the record was found.
            }
        }
        
        if (flag)
            printf("Not Found\n"); // If the flag is not changed, the record was not found.

        flag = 1; // Reset the flag for the next iteration.
        fclose(fp); // Close the file after searching for the current record.
    }

    return 0;
}

int main()
{
    int i;
    char filename[20];

    // Ask the user to input the name of the file.
    printf("Enter the name of the file: ");
    scanf(" %s", filename);

    strcat(filename, ".txt"); // Concatenate ".txt" to the filename to form the complete filename.

    i = print(filename); // Call the print function to search and print records from the file.

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

// Function to read events from a file and count the number of events on each date
void check(char filename1[], char filename2[])
{
    int day1, day2, count = 0; // Variables to store the current date and event count
    char events[20]; // Variable to store the event name
    FILE *fp1, *fp2;
    fp1 = fopen(filename1, "r"); // Open the file containing the events
    fp2 = fopen(filename2, "r"); // Open the file containing the dates

    // Read dates from the second file and count the number of events on each date
    while (fscanf(fp2, "%d\n", &day1) != EOF)
    {
        // Read events from the first file and check if they match the current date
        while (fscanf(fp1, "%d, %[^\n]\n", &day2, events) != EOF)
        {
            if (day2 == day1) // If the event date matches the current date, increment the count
                count++;
            else // If the event date does not match the current date, print the count and reset it
            {
                printf("%d %d\n", day1, count);
                count = 1;
                break;
            }
        }
    }
    printf("%d %d\n", day1, count); // Print the final count
}

int main()
{
    char filename1[20], filename2[20];
    
    // Prompt the user for the names of the input files
    printf("Enter the filename containing the events: ");
    scanf("%s", filename1);
    strcat(filename1, ".txt"); // Append ".txt" to the filename
    
    printf("Enter the filename containing the dates: ");
    scanf("%s", filename2);
    strcat(filename2, ".txt"); // Append ".txt" to the filename
    
    check(filename1, filename2); // Call the check function with the filenames as arguments
    
    return 0;
}
```

<hr>





