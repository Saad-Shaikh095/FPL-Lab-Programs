/*Write a program through a pointer variable to sum of n elements from an array.*/

#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;  // Pointer to the array

    // Reading elements into the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

    // Calculating sum using pointer
    for (int i = 0; i < n; i++) {
        sum += *(ptr + i);
    }

    printf("Sum of elements: %d\n", sum);

    return 0;
}

/*
Output:
Enter number of elements: 7
Enter 7 elements:
12 23 34 45 56 67 78 
Sum of elements: 315

*/
