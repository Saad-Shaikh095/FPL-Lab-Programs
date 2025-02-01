/*Write a program through a pointer variable to sum of n elements from an array.
*/

#include <stdio.h>

int sumOfElements(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(arr + i);
    }
    return sum;
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Sum of elements: %d\n", sumOfElements(arr, n));
    return 0;
}

/*
Output:
Enter number of elements: 5
Enter 5 elements: 1 2 3 4 5 
Sum of elements: 15

*/
