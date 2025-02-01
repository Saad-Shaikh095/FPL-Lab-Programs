/*Write a C program that uses a non recursive function to search for a Key value in
a given sorted list of integers using binary search method*/

#include <stdio.h>

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) return mid;
        else if (arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return -1; // Key not found
}

int main() {
    int n, key;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter sorted elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter key to search: ");
    scanf("%d", &key);

    int result = binarySearch(arr, n, key);
    if (result != -1)
        printf("Key found at index %d\n", result);
    else
        printf("Key not found\n");

    return 0;
}

/*
Output:

Enter number of elements: 7
Enter sorted elements:
1 2 3 4 5 6 7 
Enter key to search: 7
Key found at index 6

*/