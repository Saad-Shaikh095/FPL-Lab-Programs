/*Write a C program To find the GCD (greatest common divisor) of two given
integers.
*/

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Using Euclidean algorithm to find GCD
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    printf("GCD: %d\n", a);
    return 0;
}

/*
Output:
Enter two integers: 77 100
GCD: 1

*/