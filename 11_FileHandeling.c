/* Write a C program to perform the following file handling operations:
1. Create and write to a text file: where ask user to enter a file name. Allow
the user to enter multiple lines of text. Write the entered text to the file.
Stop writing when the user enters a blank line.
2. Read and display the contents of the file: Open the file in read mode and
Display the contents of the file line by line.
3. Append additional text to the file: Allow the user to add more text to the
file */

#include <stdio.h>

int main() {
    FILE *file;
    char filename[100], line[200];

    // Step 1: Create and write to a file
    printf("Enter file name: ");
    scanf("%s", filename);
    getchar();  // To consume the newline after filename input

    file = fopen(filename, "w");
    printf("Enter text (blank line to stop):\n");
    while (fgets(line, sizeof(line), stdin)) {
        if (line[0] == '\n') break;
        fputs(line, file);
    }
    fclose(file);

    // Step 2: Read and display file content
    file = fopen(filename, "r");
    printf("\nFile contents:\n");
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }
    fclose(file);

    // Step 3: Append text to the file
    file = fopen(filename, "a");
    printf("\nEnter text to append (blank line to stop):\n");
    while (fgets(line, sizeof(line), stdin)) {
        if (line[0] == '\n') break;
        fputs(line, file);
    }
    fclose(file);

    // Step 4: Display updated content
    file = fopen(filename, "r");
    printf("\nUpdated file contents:\n");
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }
    fclose(file);

    return 0;
}

/*
Output:
Enter file name: myfile.txt
Enter text (blank line to stop):
Hello, this is the first line.
This is the second line.
<Blank Line>

File contents:
Hello, this is the first line.
This is the second line.

Enter text to append (blank line to stop):
This is the appended text.
<Blank Line>

Updated file contents:
Hello, this is the first line.
This is the second line.
This is the appended text.

*/