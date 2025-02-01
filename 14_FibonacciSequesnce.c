/*Write a C program to generate the first n terms of the Fibonacci sequence. The
program should Prompt the user to enter a positive integer n. Use a loop to
calculate and display the first n terms of the Fibonacci sequence. The first term is
0. The second term is 1. Each subsequent term is the sum of the previous two
terms. Display the sequence in a single line, separated by spaces.*/

#include <stdio.h>

int main() {
    int n, a = 0, b = 1, next;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }

    return 0;
}

/*
Output:
Enter the number of terms: 10
0 1 1 2 3 5 8 13 21 34

*/
