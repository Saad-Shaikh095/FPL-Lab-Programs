/*Write a program that finds if a given number is a prime number*/

#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
    } 
    
    else {
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                printf("%d is not a prime number.\n", num);
                return 0;  // Exit early if not prime
            }
        }
        printf("%d is a prime number.\n", num);
    }

    return 0;
}

/*
Output: 

Enter a number: 7
7 is a prime number.

Enter a number: 6
6 is not a prime number.
*/
