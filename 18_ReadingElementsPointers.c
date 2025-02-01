/*Write a program for reading elements using a pointer into an array and display
the values using the array. */

#include <stdio.h>

int main() {
    int arr[5];
    int *ptr = arr;  // Pointer to the array

    // Reading elements using pointer
    printf("Enter 5 elements:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", ptr + i);  // Use pointer arithmetic to store values
    }

    // Displaying elements using the array
    printf("The entered elements are:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));  // Use pointer arithmetic to access values
    }

    return 0;
}

/*
Output:
Enter 5 elements:
77 65 93 62 02
The entered elements are:
77 65 93 62 2

*/