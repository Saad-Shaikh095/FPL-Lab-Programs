/*Write a program to check if an entered number or string is a palindrome or not. */

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int i, length;

    printf("Enter a string or number: ");
    scanf("%s", str);

    // Find length of the string
    length = strlen(str);

    // Reverse the string
    for (i = 0; i < length; i++) {
        rev[i] = str[length - i - 1];
    }
    rev[i] = '\0'; // Null terminate the reversed string

    // Check if palindrome
    if (strcmp(str, rev) == 0)
        printf("The input is a palindrome.\n");
    else
        printf("The input is not a palindrome.\n");

    return 0;
}

/*
Output:

Enter a string or number: 7
The input is a palindrome.

*/