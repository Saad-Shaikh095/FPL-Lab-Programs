/*Write a C program to find the sum of individual digits of a positive integer and test
given number is palindrome. */

#include <stdio.h>

int main() {
    int num, temp, sum = 0, reverse = 0, digit;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    temp = num;

    // Sum of digits
    while (temp > 0) {
        digit = temp % 10;
        sum += digit;
        temp /= 10;
    }
    printf("Sum of digits: %d\n", sum);

    // Check if palindrome
    temp = num;
    while (temp > 0) {
        digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp /= 10;
    }
    if (num == reverse)
        printf("The number is a palindrome.\n");
    else
        printf("The number is not a palindrome.\n");

    return 0;
}

/*
Output:

Enter a positive integer: 77
Sum of digits: 14
The number is a palindrome.

*/