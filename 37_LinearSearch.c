/*Write a C program that uses non recursive function to search for a Key value in
a given list of integers using linear search method.*/

#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i; // Return the index if key is found
    }
    return -1; // Return -1 if key is not found
}

int main() {
    int n, key;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter key to search: ");
    scanf("%d", &key);

    int result = linearSearch(arr, n, key);
    if (result != -1)
        printf("Key found at index %d\n", result);
    else
        printf("Key not found\n");

    return 0;
}

/*
Output:

Enter number of elements: 7
Enter elements:
12 23 44 65 12 89 21
Enter key to search: 89
Key found at index 5

*/