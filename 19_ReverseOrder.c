/*Write a program for display values reverse order from an array using a pointe*/

#include <stdio.h>

int main() {
    int arr[5];
    int *ptr = arr;  // Pointer to the array

    // Reading elements
    printf("Enter 5 elements:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", ptr + i);
    }

    // Displaying elements in reverse order using pointer
    printf("Elements in reverse order:\n");
    for (int i = 4; i >= 0; i--) {
        printf("%d ", *(ptr + i));
    }

    return 0;
}

/*
Output: 
Enter 5 elements:
10 9 8 7 6
Elements in reverse order:
6 7 8 9 10

*/

